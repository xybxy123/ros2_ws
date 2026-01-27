import os
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    ExecuteProcess,
)
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    # ====================== 常量配置 =======================
    package_name = 'wheel_leg2'
    robot_name_in_model = 'wheel_leg2'
    urdf_file_path = 'urdf/wheel_leg.urdf'

    # 初始位置
    spawn_x_val = '0.0'
    spawn_y_val = '0.0'
    spawn_z_val = '0.5'
    spawn_yaw_val = '0.0'

    # ====================== 路径配置 =======================
    pkg_share = FindPackageShare(package=package_name).find(package_name)
    default_urdf_model_path = os.path.join(pkg_share, urdf_file_path)

    # 直接读取URDF内容
    with open(default_urdf_model_path, 'r') as f:
        robot_desc_content = f.read()

    # ====================== 启动参数声明（仅保留必要参数） =======================
    gui = LaunchConfiguration('gui')          # 控制是否启动关节状态GUI
    use_robot_state_pub = LaunchConfiguration('use_robot_state_pub')
    use_sim_time = LaunchConfiguration('use_sim_time')
    use_simulator = LaunchConfiguration('use_simulator')

    declare_gui_cmd = DeclareLaunchArgument(
        name='gui',
        default_value='True',
        description='Flag to enable joint_state_publisher_gui')

    declare_use_robot_state_pub_cmd = DeclareLaunchArgument(
        name='use_robot_state_pub',
        default_value='True',
        description='Whether to start the robot state publisher')

    declare_use_sim_time_cmd = DeclareLaunchArgument(
        name='use_sim_time',
        default_value='true',
        description='Use simulation (Gazebo) clock if true')

    declare_use_simulator_cmd = DeclareLaunchArgument(
        name='use_simulator',
        default_value='True',
        description='Whether to start the simulator')

    # ====================== 节点启动（移除所有RViz相关） =======================
    # 1. 机器人状态发布器
    start_robot_state_publisher_cmd = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{
            'robot_description': robot_desc_content,
            'use_sim_time': use_sim_time
        }],
        output='screen'
    )

    # 2. 关节状态发布器（无GUI版）
    start_joint_state_publisher_cmd = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher',
        condition=UnlessCondition(gui),
        output='screen'
    )

    # 3. 关节状态发布器GUI
    start_joint_state_publisher_gui_cmd = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui',
        condition=IfCondition(gui),
        output='screen'
    )

    # 4. 启动Gazebo（Server+Client，带可视化界面）
    start_gazebo_cmd = ExecuteProcess(
        cmd=['gz', 'sim', '-r', 'empty.sdf',], 
        output='screen',
        condition=IfCondition(use_simulator)
    )

    # 5. Spawn机器人到Gazebo
    spawn_entity_cmd = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=[
            '-name', robot_name_in_model,
            '-topic', 'robot_description',
            '-x', spawn_x_val,
            '-y', spawn_y_val,
            '-z', spawn_z_val,
            '-Y', spawn_yaw_val
        ],
        output='screen'
    )

    # ====================== 组装Launch描述 ======================
    ld = LaunchDescription()

    # 声明参数（仅保留必要参数）
    ld.add_action(declare_gui_cmd)
    ld.add_action(declare_use_robot_state_pub_cmd)
    ld.add_action(declare_use_sim_time_cmd)
    ld.add_action(declare_use_simulator_cmd)

    # 启动节点（顺序：先启动Gazebo → 再Spawn机器人 → 最后启动状态发布器）
    ld.add_action(start_gazebo_cmd)          
    ld.add_action(spawn_entity_cmd)          
    ld.add_action(start_robot_state_publisher_cmd)
    ld.add_action(start_joint_state_publisher_cmd)
    ld.add_action(start_joint_state_publisher_gui_cmd)

    return ld
