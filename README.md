# ros2_ws
my workspace

## 二维雷达slam启动流程：ydlidar + rf2o激光里程计 + slam_toolbox
### 1. 启动激光雷达（ydlidar）
```bash
ros2 launch ydlidar_ros2_driver ydlidar_launch_view.py
```

### 2. 发布TF变换（base_link → laser_frame）
```bash
cd ~/w_work/ros2_ws
source install/setup.bash
ros2 run tf2_ros static_transform_publisher --x 0 --y 0 --z 0 --yaw 0 --pitch 0 --roll 0 --frame-id base_link --child-frame-id laser_frame
```

### 3. 启动激光里程计
```bash
ros2 launch rf2o_laser_odometry rf2o_laser_odometry.launch.py \
  laser_scan_topic:=/scan \
  odom_topic:=/odom \
  publish_tf:=true \
  base_frame_id:=base_link \
  odom_frame_id:=odom \
  init_pose_from_topic:=EMPTY \
  min_scan_distance:=0.1 \
  max_scan_distance:=8.0 \
  min_translation:=0.005 \
  min_rotation:=0.005
```

### 4. 启动SLAM建图（slam_toolbox）
```bash
cd ~/w_work/ros2_ws
source install/setup.bash
ros2 launch slam_toolbox online_async_launch.py slam_params_file:=./src/slam_toolbox/config/mapper_params_online_async.yaml
```

