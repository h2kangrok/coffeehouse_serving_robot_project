# main_kitchen.py

import sys
from PyQt5 import QtWidgets
from PyQt5.QtCore import QThread, pyqtSignal
import rclpy
from rclpy.node import Node
from coffee_system_interface.srv import MySrv
from functools import partial

# turtlebot3
from nav2_msgs.srv import SetInitialPose
from geometry_msgs.msg import Point, Quaternion
from rclpy.action import ActionClient
from nav2_msgs.action import NavigateToPose



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
        self.init_pose = [-2.0, -0.5, 0.0, 1.0] # pose:x,y orient:z,w

        #######################################################################################
        # pose 서비스 클라이언트 설정
        self.set_initial_pose_service_client = self.create_client(
            SetInitialPose, 
            '/set_initial_pose'
            )
        
        # # turtlebot3 동작하기 위해서 네비게이션 전달
        # self.navigate_to_pose_action_client = ActionClient(
        #     self, 
        #     NavigateToPose, 
        #     "navigate_to_pose")
                
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
    
class KitchenApp(QtWidgets.QMainWindow):
    order_received = pyqtSignal(int, list)  # 주문 수신 시그널

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

    def init_ui(self):
        """UI 초기화 및 레이아웃 설정"""
        main_layout = QtWidgets.QVBoxLayout()
        container = QtWidgets.QWidget()
        container.setLayout(main_layout)
        self.setCentralWidget(container)

        # 주문 목록 표시
        self.order_list_widget = QtWidgets.QListWidget()
        main_layout.addWidget(self.order_list_widget)

    def display_order_popup(self, table_num, items):
        """주문 수신 시 팝업 창 표시"""
        dialog = QtWidgets.QDialog(self)
        dialog.setWindowTitle(f"테이블 {table_num} 주문")
        
        layout = QtWidgets.QVBoxLayout()
        layout.addWidget(QtWidgets.QLabel(f"테이블 {table_num} 주문 내역:\n" + "\n".join(items)))
        
        accept_button = QtWidgets.QPushButton("주문 수락")
        accept_button.clicked.connect(partial(self.accept_order, dialog, table_num, items))
        layout.addWidget(accept_button)

        reject_button = QtWidgets.QPushButton("주문 거절")
        reject_button.clicked.connect(partial(self.reject_order, dialog, table_num))
        layout.addWidget(reject_button)

        dialog.setLayout(layout)
        dialog.exec_()

    def accept_order(self, dialog, table_num, items):
        """주문 수락 처리"""
        dialog.accept()
        order_item = QtWidgets.QListWidgetItem(f"테이블 {table_num} - {', '.join(items)}")

        # 주문 상태 버튼 추가
        order_widget = QtWidgets.QWidget()
        order_layout = QtWidgets.QHBoxLayout(order_widget)
        
        in_progress_button = QtWidgets.QPushButton("조리 중")
        in_progress_button.clicked.connect(partial(self.update_order_status, order_item, "조리 중"))
        order_layout.addWidget(in_progress_button)
        
        complete_button = QtWidgets.QPushButton("조리 완료")
        complete_button.clicked.connect(partial(self.complete_order, order_item))
        order_layout.addWidget(complete_button)

        # 주문 항목 및 위젯 설정
        order_item.setSizeHint(order_widget.sizeHint())
        self.order_list_widget.addItem(order_item)
        self.order_list_widget.setItemWidget(order_item, order_widget)

        # 주문 수락 메시지 전송
        self.node.get_logger().info(f"테이블 {table_num} 주문 수락.")
        self.send_response_to_client(True, "주문이 수락되었습니다.", table_num)

    def reject_order(self, dialog, table_num):
        """주문 거절 처리"""
        dialog.reject()
        self.node.get_logger().info(f"테이블 {table_num} 주문 거절")
        self.send_response_to_client(False, "주문이 거절되었습니다.", table_num)

    def send_response_to_client(self, success, message, table_num):
        """키오스크로 주문 수락/거절 상태 응답"""
        # 응답 전송 로직 추가 필요 (예: publisher 또는 callback 사용)
        self.node.get_logger().info(f"주문 응답 전송: {message} - 테이블 {table_num}")

    def update_order_status(self, order_item, status):
        """주문 상태 업데이트"""
        order_item.setText(order_item.text() + f" - {status}")
        self.node.get_logger().info(f"주문 상태 업데이트: {status}")

    def complete_order(self, order_item):
        """주문 완료 상태로 표시"""
        order_item.setText(order_item.text() + " - 완료")
        self.node.get_logger().info("주문 완료로 표시되었습니다.")

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
