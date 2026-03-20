import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # ---------------------- 1. 配置文件路径 ----------------------
    slam_toolbox_share = get_package_share_directory("slam_toolbox")
    slam_config = os.path.join(slam_toolbox_share, "config", "mapper_params_online_async.yaml")
    
    # 🌟 修改点 1：使用纯驱动（ydlidar_launch.py）！不要带 _view 的后缀
    # 这会避免弹出多余的没有地图的 RViz 窗口，并依然自动发布 base_link -> laser_frame
    ydlidar_share = get_package_share_directory("ydlidar_ros2_driver")
    ydlidar_launch = os.path.join(ydlidar_share, "launch", "ydlidar_launch.py")

    # ---------------------- 2. 声明启动参数 ----------------------
    use_sim_time = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='Use simulation (Gazebo) clock if true'
    )

    # ---------------------- 3. 启动 ydlidar 雷达 ----------------------
    start_ydlidar = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(ydlidar_launch),
        launch_arguments={'use_sim_time': 'false'}.items()
    )

    # ---------------------- 4. 补全 TF 变换（核心） ----------------------
    # 删除了激光的 tf_laser_base，因为 ydlidar_launch.py 内已经自带了一个静态广播
    # 🌟 修改点 2：使用 ROS 2 Jazzy 标准参数语法，补全 odom -> base_link
    tf_base_odom = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='tf_base_odom',
        arguments=[
            '--x', '0', '--y', '0', '--z', '0',
            '--roll', '0', '--pitch', '0', '--yaw', '0',
            '--frame-id', 'odom', '--child-frame-id', 'base_link'
        ]
    )

    # ---------------------- 5. 启动 slam_toolbox ----------------------
    start_slam_toolbox = Node(
        package='slam_toolbox',
        executable='async_slam_toolbox_node',
        name='slam_toolbox',
        output='screen',
        parameters=[
            slam_config,
            {
                'use_sim_time': LaunchConfiguration('use_sim_time'),
                'scan_topic': '/scan',          
                'base_frame': 'base_link',      # 我们通过上面的 TF 固定为 base_link
                'odom_frame': 'odom',           
                'map_frame': 'map',             
                
                # ========== 强制无里程计纯手持雷达建图的参数 ==========
                'mode': 'mapping',
                'map_update_interval': 1.0,     # 每秒强制刷新一次地图
                'minimum_travel_distance': 0.0, # 强制即使没有里程计移动也处理scan
                'minimum_travel_heading': 0.0,
                'use_scan_matching': True,      # 必须依赖雷达匹配推算位姿
            }
        ]
    )

    # ---------------------- 6. 启动Rviz2 ----------------------
    start_rviz2 = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', os.path.join(slam_toolbox_share, 'rviz', 'slam_toolbox_default.rviz')]
    )

    # ---------------------- 组装启动描述 ----------------------
    return LaunchDescription([
        use_sim_time,
        start_ydlidar,      # 启动雷达 (内含了 laser_frame -> base_link 的变换)
        tf_base_odom,       # 补全里程计 odom -> base_link TF
        start_slam_toolbox, # 启动建图
        start_rviz2         # 启动可视化带地图配置
    ])