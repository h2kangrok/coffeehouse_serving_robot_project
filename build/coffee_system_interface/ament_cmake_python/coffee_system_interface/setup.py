from setuptools import find_packages
from setuptools import setup

setup(
    name='coffee_system_interface',
    version='0.0.0',
    packages=find_packages(
        include=('coffee_system_interface', 'coffee_system_interface.*')),
)
