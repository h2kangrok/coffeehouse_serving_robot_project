# main_kiosk.py

import sys
import os
from collections import Counter
from functools import partial
from PyQt5 import QtWidgets, QtGui
from PyQt5.QtCore import QThread, pyqtSignal
from PyQt5.QtGui import QPixmap
import rclpy
from rclpy.node import Node
from coffee_system_interface.srv import MySrv
from ament_index_python.packages import get_package_share_directory

# 메뉴 데이터
MENU_ITEMS = [
    {"name": "아메리카노", "price": 4000, "image": "affogato.jpg"},
    {"name": "라떼", "price": 5000, "image": "Americano.jpg"},
    {"name": "카푸치노", "price": 5000, "image": "cafe_latte.jpg"},
    {"name": "모카", "price": 6000, "image": "caramel_macchiato.jpg"},
    {"name": "에스프레소", "price": 3000, "image": "condensed_milk_coffee.jpg"},
    {"name": "마키아토", "price": 6000, "image": "espresso.jpg"},
]

UI_DIR = os.path.join(os.path.dirname(__file__), 'images')


class ROS2Thread(QThread):
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
        self.wait()

class KioskClientNode(Node):
    def __init__(self):
        super().__init__('kiosk_client_node')
        self.client = self.create_client(MySrv, 'order_food')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('서비스를 기다리는 중...')

    def send_order(self, table_num, items, callback):
        request = MySrv.Request(table_num=table_num, items=items)
        future = self.client.call_async(request)
        future.add_done_callback(callback)

class CoffeeKiosk(QtWidgets.QMainWindow):
    order_successful = pyqtSignal(str)
    order_rejected = pyqtSignal(str)

    def __init__(self):
        super().__init__()
        self.setWindowTitle("커피 키오스크")
        self.setGeometry(100, 100, 800, 600)

        rclpy.init()
        self.node = KioskClientNode()
        self.ros2_thread = ROS2Thread(self.node)
        self.ros2_thread.start()

        self.cart = []
        self.selected_table = None
        self.init_ui()

        self.order_successful.connect(self.show_order_success)
        self.order_rejected.connect(self.show_order_rejection)

    def init_ui(self):
        main_layout = QtWidgets.QVBoxLayout()
        container = QtWidgets.QWidget()
        container.setLayout(main_layout)
        self.setCentralWidget(container)

        menu_layout = QtWidgets.QGridLayout()
        for i, item in enumerate(MENU_ITEMS):
            item_layout = self.create_menu_item(item)
            row, col = i // 3, i % 3
            menu_layout.addWidget(item_layout, row, col)
        main_layout.addLayout(menu_layout)

        self.cart_list = QtWidgets.QListWidget()
        main_layout.addWidget(self.cart_list)
        self.total_label = QtWidgets.QLabel("총 합계: 0원")
        main_layout.addWidget(self.total_label)

        self.init_table_buttons(main_layout)
        self.init_action_buttons(main_layout)

    def create_menu_item(self, item):
        item_widget = QtWidgets.QWidget()
        item_layout = QtWidgets.QVBoxLayout(item_widget)

        image_label = QtWidgets.QLabel()
        # image_path = os.path.join(get_package_share_directory('coffee_system'), 'images', item['image'])
        image_path = os.path.join(UI_DIR, item['image'])
        # print("이미지 경로:", image_path)
        pixmap = QPixmap(image_path).scaled(100, 100) if os.path.exists(image_path) else None
        image_label.setPixmap(pixmap or QtGui.QPixmap())
        item_layout.addWidget(image_label)

        item_layout.addWidget(QtWidgets.QLabel(item['name']))
        item_layout.addWidget(QtWidgets.QLabel(f"{item['price']} 원"))

        add_button = QtWidgets.QPushButton("장바구니에 추가")
        add_button.clicked.connect(partial(self.add_to_cart, item))
        item_layout.addWidget(add_button)

        return item_widget

    def init_table_buttons(self, layout):
        table_layout = QtWidgets.QHBoxLayout()
        self.table_buttons = []
        for i in range(1, 10):
            button = QtWidgets.QPushButton(f"테이블 {i}")
            button.setCheckable(True)
            button.clicked.connect(partial(self.select_table, button))
            self.table_buttons.append(button)
            table_layout.addWidget(button)
        layout.addLayout(table_layout)

    def init_action_buttons(self, layout):
        self.order_button = QtWidgets.QPushButton("주문하기")
        self.order_button.clicked.connect(self.place_order)
        layout.addWidget(self.order_button)

        self.clear_cart_button = QtWidgets.QPushButton("장바구니 비우기")
        self.clear_cart_button.clicked.connect(self.clear_cart)
        layout.addWidget(self.clear_cart_button)

    def add_to_cart(self, item):
        self.cart.append(item)
        self.update_cart_display()

    def update_cart_display(self):
        self.cart_list.clear()
        total = 0
        item_counter = Counter(item['name'] for item in self.cart)
        for item_name, count in item_counter.items():
            price = next(item['price'] for item in self.cart if item['name'] == item_name)
            self.cart_list.addItem(f"{item_name} - {count}개 ({price * count} 원)")
            total += price * count
        self.total_label.setText(f"총 합계: {total} 원")

    def clear_cart(self):
        self.cart.clear()
        self.update_cart_display()

    def select_table(self, selected_button):
        """선택한 테이블 외의 버튼을 모두 해제"""
        for button in self.table_buttons:
            button.setChecked(button == selected_button)
        self.selected_table = int(selected_button.text().split()[-1]) if selected_button.isChecked() else None

    def place_order(self):
        if not self.cart:
            QtWidgets.QMessageBox.warning(self, "빈 장바구니", "먼저 장바구니에 항목을 추가하세요!")
            return
        if self.selected_table is None:
            QtWidgets.QMessageBox.warning(self, "테이블 미선택", "테이블을 선택하세요!")
            return

        items = [f"{name}: {count}" if count > 1 else name for name, count in Counter(item['name'] for item in self.cart).items()]
        self.node.send_order(self.selected_table, items, self.order_response_callback)

    def order_response_callback(self, future):
        try:
            result = future.result()
            (self.order_successful if result.success else self.order_rejected).emit(result.message)
        except Exception as e:
            self.order_rejected.emit(f"오류 발생: {e}")

    def show_order_success(self, message):
        QtWidgets.QMessageBox.information(self, "주문 성공", message)
        self.clear_cart()

    def show_order_rejection(self, message):
        QtWidgets.QMessageBox.warning(self, "주문 거절", message)

    def closeEvent(self, event):
        self.ros2_thread.stop()
        self.ros2_thread.wait()

def main():
    app = QtWidgets.QApplication(sys.argv)
    window = CoffeeKiosk()
    window.show()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()
