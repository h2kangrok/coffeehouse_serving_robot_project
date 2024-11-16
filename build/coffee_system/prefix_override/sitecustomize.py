import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/yoonkangrok/coffeehouse_serving_robot-1/install/coffee_system'
