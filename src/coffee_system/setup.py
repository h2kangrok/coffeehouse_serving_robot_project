from setuptools import find_packages, setup

package_name = 'coffee_system'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='phb',
    maintainer_email='bin000120@naver.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'main_kiosk = coffee_system.main_kiosk:main',
            'main_kitchen = coffee_system.main_kitchen:main',
            'turtlebot_gui = coffee_system.turtlebot_gui:main',
            'main_robot = coffee_system.main_robot:main',
        ],
    },
)
