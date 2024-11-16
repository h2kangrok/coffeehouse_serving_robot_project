# main_kitchen.py

import sys
from PyQt5 import QtWidgets
from PyQt5.QtCore import QThread, pyqtSignal, QTimer
import rclpy
from rclpy.node import Node
from coffee_system_interface.srv import MySrv
from functools import partial
from PyQt5 import QtWidgets, QtCore
from coffee_system_interface.msg import CallStaff

# turtlebot3
from nav2_msgs.srv import SetInitialPose
from geometry_msgs.msg import Point, Quaternion
from rclpy.action import ActionClient
from nav2_msgs.action import NavigateToPose
from rclpy.action.client import GoalStatus



class ROS2Thread(QThread):
    """별도의 스레드에서 rclpy 스핀을 관리"""
    def __init__(self, node):
        super().__init__()
        self.node = node

    def run(self):
        rclpy.spin(self.node)

    def stop(self):
        if self.node:
            self.node.destroy_node()
        rclpy.shutdown()
        self.quit()
        self.wait()  # 스레드 종료 대기

class KitchenNode(Node):
    def __init__(self):
        super().__init__('kitchen_node')
        self.service = self.create_service(MySrv, 'order_food', self.handle_order_request)
        # staff call
        self.subscription = self.create_subscription(CallStaff, 'staff_call', self.handle_staff_call, 10)
        self.init_pose = [-1.92, 0.0, 0.0, 1.0] # pose:x,y orient:z,w

        self.goal_poses = {
            0: [-1.92, 0.0],
            1: [1.07, 1.28],
            2: [1.03, 0.17],
            3: [1.07, -0.95],
            4: [-0.12, 1.22],
            5: [-0.06, 0.17],
            6: [-0.10, -0.97],
            7: [-1.16, 1.24],
            8: [-1.17, 0.13],
            9: [-1.14, -0.89]
        }

        #######################################################################################
        # pose 서비스 클라이언트 설정
        self.set_initial_pose_service_client = self.create_client(
            SetInitialPose, 
            '/set_initial_pose'
            )
        
        # turtlebot3 동작하기 위해서 네비게이션 전달
        self.navigate_to_pose_action_client = ActionClient(
            self, 
            NavigateToPose, 
            "navigate_to_pose")
                
        # Init function
        while not self.set_initial_pose_service_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service /set_initial_pose not available, waiting again...')
        self.set_initial_pose(*self.init_pose) # 언패킹하여 각 인수로 전달
        #######################################################################################


    def handle_order_request(self, request, response):
        """키오스크에서 들어온 주문 요청을 처리"""
        self.window.order_received.emit(request.table_num, request.items)
        response.success = True
        response.message = "주문 전송 완료"
        return response
    
    def handle_staff_call(self, msg):
        self.get_logger().info(f'테이블 {msg.table_num} : {msg.message}')
        # 메인 스레드로 직원 호출 신호 전달
        self.window.staff_call_signal.emit(msg.table_num, msg.message)

    # Service client SET INIT POSE ESTIMATE
    def set_initial_pose(self, x,y,z,w):
        req = SetInitialPose.Request()
        req.pose.header.frame_id = 'map'
        req.pose.pose.pose.position = Point(x=x, y=y, z=0.0)
        req.pose.pose.pose.orientation = Quaternion(x=0.0, y=0.0, z=z, w=w)
        req.pose.pose.covariance = [0.1, 0.0, 0.0, 0.0, 0.0, 0.1,
                                    0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                                    0.0, 0.0, 0.1, 0.0, 0.0, 0.0,
                                    0.0, 0.0, 0.0, 0.01, 0.0, 0.0,
                                    0.0, 0.0, 0.0, 0.0, 0.01, 0.0,
                                    0.0, 0.0, 0.0, 0.0, 0.0, 0.01]

        future = self.set_initial_pose_service_client.call_async(req)
        
        if future.result() is not None:
            message = "[INFO] Initial pose set successfully"
        else:
            message = "[WARN] Failed to set initial pose"
            
        self.get_logger().info(message) # 메세지 전달 부분
        
        return future.result()

    ## Action client NAVIGATE
    def navigate_to_pose_send_goal(self, i):
        wait_count = 1
        while not self.navigate_to_pose_action_client.wait_for_server(timeout_sec=0.1):
            if wait_count > 3:
                message = "[WARN] Navigate action server is not available."
                # self.gui.textBrowser.append(message)
                self.get_logger().info(message) # 메세지 전달 부분
                return False
            wait_count += 1
            
        goal_msg = NavigateToPose.Goal()
        goal_msg.pose.header.frame_id = "map"
        goal_msg.pose.pose.position.x = self.goal_poses[i][0]
        goal_msg.pose.pose.position.y = self.goal_poses[i][1]
        goal_msg.pose.pose.position.z = 0.0
        goal_msg.pose.pose.orientation.x = 0.0
        goal_msg.pose.pose.orientation.y = 0.0
        goal_msg.pose.pose.orientation.z = 0.0
        goal_msg.pose.pose.orientation.w = 1.0

        self.send_goal_future = self.navigate_to_pose_action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.navigate_to_pose_action_feedback)
        self.send_goal_future.add_done_callback(self.navigate_to_pose_action_goal)
        
        return True
    
    def navigate_to_pose_action_goal(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            message = "[WARN] Action goal rejected."
            # self.gui.textBrowser.append(message)
            self.get_logger().info(message)
            return

        message = "[INFO] Action goal accepted."
        # self.gui.textBrowser.append(message)
        self.get_logger().info(message)
        self.action_result_future = goal_handle.get_result_async()
        self.action_result_future.add_done_callback(self.navigate_to_pose_action_result)

    def navigate_to_pose_action_feedback(self, feedback_msg):
        action_feedback = feedback_msg.feedback

    def navigate_to_pose_action_result(self, future):
        action_status = future.result().status
        action_result = future.result().result
        if action_status == GoalStatus.STATUS_SUCCEEDED:

            message = "[INFO] Action succeeded!."
            # self.gui.textBrowser.append(message)
            self.get_logger().info(message) # 메세지 전달 부분

        else:
            message = f"[WARN] Action failed with status: {action_status}"
            # self.gui.textBrowser.append(message)
            self.get_logger().info(message) # 메세지 전달 부분
    

class KitchenApp(QtWidgets.QMainWindow):
    order_received = pyqtSignal(int, list)  # 주문 수신 시그널
    staff_call_signal = QtCore.pyqtSignal(int, str)

    def __init__(self):
        super().__init__()
        self.setWindowTitle("주방 주문 관리 시스템")
        self.setGeometry(100, 100, 600, 400)

        # ROS2 초기화 및 스레드 시작
        rclpy.init()
        self.node = KitchenNode()
        self.node.window = self
        self.ros2_thread = ROS2Thread(self.node)
        self.ros2_thread.start()

        self.init_ui()
        self.order_received.connect(self.display_order_popup)
        # ROS2 콜백이 수신한 메시지를 Qt UI로 전달하는 신호 연결
        self.staff_call_signal.connect(self.show_staff_call_popup)

    def init_ui(self):
        """UI 초기화 및 레이아웃 설정"""
        main_layout = QtWidgets.QVBoxLayout()
        container = QtWidgets.QWidget()
        container.setLayout(main_layout)
        self.setCentralWidget(container)

        # 주문 목록 표시
        self.order_list_widget = QtWidgets.QListWidget()
        main_layout.addWidget(self.order_list_widget)

        # 메인 창 크기 조정
        self.resize(800, 600)  # 창 크기를 넓게 설정

    def show_staff_call_popup(self, table_num, message):
        """직원 호출 팝업 표시"""
        QtWidgets.QMessageBox.information(
            self, "직원 호출", f"테이블 {table_num}: {message}"
        )

    def display_order_popup(self, table_num, items):
        """주문 수신 시 팝업 창 표시"""
        dialog = QtWidgets.QDialog(self)
        dialog.setWindowTitle(f"테이블 {table_num} 주문")
        
        # 팝업 크기 조정
        dialog.resize(400, 300)

        layout = QtWidgets.QVBoxLayout()
        layout.addWidget(QtWidgets.QLabel(f"테이블 {table_num} 주문 내역:\n" + "\n".join(items)))
        
        accept_button = QtWidgets.QPushButton("주문 수락")
        accept_button.setMinimumHeight(40)  # 버튼 높이 조정
        accept_button.clicked.connect(partial(self.accept_order, dialog, table_num, items))
        layout.addWidget(accept_button)

        reject_button = QtWidgets.QPushButton("주문 거절")
        reject_button.setMinimumHeight(40)  # 버튼 높이 조정
        reject_button.clicked.connect(partial(self.reject_order, dialog, table_num))
        layout.addWidget(reject_button)

        dialog.setLayout(layout)
        dialog.exec_()


    def accept_order(self, dialog, table_num, items):
        """주문 수락 처리"""
        dialog.accept()

        # 주문 상태 텍스트 포함한 QLabel 생성
        self.order_status = f"테이블 {table_num} - {', '.join(items)} - 대기 중"
        order_item = QtWidgets.QListWidgetItem()
        
        # 주문 상태 라벨 추가
        order_widget = QtWidgets.QWidget()
        main_layout = QtWidgets.QVBoxLayout(order_widget)
        main_layout.setContentsMargins(0, 0, 0, 0)
        
        self.order_label = QtWidgets.QLabel(self.order_status)
        main_layout.addWidget(self.order_label)
        
        # 버튼 레이아웃 추가
        button_layout = QtWidgets.QHBoxLayout()
        
        # "조리 중" 버튼
        in_progress_button = QtWidgets.QPushButton("조리 중")
        in_progress_button.setMinimumHeight(15)
        in_progress_button.clicked.connect(partial(self.update_order_status, table_num, items, "조리 중"))
        button_layout.addWidget(in_progress_button)
        
        # "조리 완료" 버튼
        complete_button = QtWidgets.QPushButton("조리 완료")
        complete_button.setMinimumHeight(15)
        complete_button.clicked.connect(partial(self.complete_order, table_num, order_item, complete_button, in_progress_button))
        button_layout.addWidget(complete_button)

        # 버튼 레이아웃 추가
        main_layout.addLayout(button_layout)

        # 주문 항목을 리스트에 추가
        order_item.setSizeHint(order_widget.sizeHint())
        self.order_list_widget.addItem(order_item)
        self.order_list_widget.setItemWidget(order_item, order_widget)

    def reject_order(self, dialog, table_num):
        """주문 거절 처리"""
        dialog.reject()
        self.node.get_logger().info(f"테이블 {table_num} 주문 거절")
        self.send_response_to_client(False, "주문이 거절되었습니다.", table_num)

    def send_response_to_client(self, success, message, table_num):
        """키오스크로 주문 수락/거절 상태 응답"""
        # 응답 전송 로직 추가 필요 (예: publisher 또는 callback 사용)
        self.node.get_logger().info(f"주문 응답 전송: {message} - 테이블 {table_num}")

    def update_order_status(self, table_num, items, status):
        """주문 상태 업데이트 (조리 중)"""
        self.order_status = f"테이블 {table_num} - {', '.join(items)} - {status}"
        self.order_label.setText(self.order_status)
        self.node.get_logger().info(f"{self.order_status}")

    def complete_order(self, table_num, order_item, complete_button, in_progress_button):
        """주문 완료 상태로 표시 및 버튼 비활성화"""
        # 상태 업데이트
        self.order_status = self.order_label.text() + " - 조리완료"
        self.order_label.setText(self.order_status)
        self.node.get_logger().info("주문 완료로 표시되었습니다.")
        
        # 버튼 비활성화 및 흐리게 설정
        complete_button.setDisabled(True)
        in_progress_button.setDisabled(True)
        complete_button.setStyleSheet("color: gray;")
        in_progress_button.setStyleSheet("color: gray;")
        self.navigate_to_table_and_return(table_num) # 테이블로 이동 후 복귀


    # 60초후 복귀
    def navigate_to_table_and_return(self, table_num):
        """로봇을 테이블로 이동하고 60초 후 초기 위치로 복귀"""
        self.node.get_logger().info(f"테이블 {table_num}로 이동을 시작합니다.")

        # 테이블로 이동
        if self.node.navigate_to_pose_send_goal(table_num):
            self.node.get_logger().info(f"테이블 {table_num}에 도착했습니다. 60초 대기 중...")
            
            # 60초 대기 후 init_pose로 복귀
            QTimer.singleShot(60000, self.return_to_initial_pose)  # 60초 후 실행
    
    def return_to_initial_pose(self):
        """로봇을 초기 위치로 복귀"""
        self.node.get_logger().info("초기 위치로 복귀를 시작합니다.")
        if self.node.navigate_to_pose_send_goal(0):  # 초기 위치 이동
            self.node.get_logger().info("초기 위치로 복귀 완료.")
        else:
            self.node.get_logger().info("초기 위치 복귀 실패.")


    def closeEvent(self, event):
        """앱 종료 시 ROS2 스레드 정리"""
        self.ros2_thread.stop()
        self.ros2_thread.wait()

def main():
    app = QtWidgets.QApplication(sys.argv)
    window = KitchenApp()
    window.show()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()
