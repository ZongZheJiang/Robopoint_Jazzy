import os
from setuptools import find_packages, setup
from glob import glob

package_name = 'robot_startup'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*.launch.py'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='evas',
    maintainer_email='evas@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
        extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'move_arm_node = robot_startup.move_arm:main'
        ],
    },
)
