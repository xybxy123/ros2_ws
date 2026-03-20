// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from ros2_yolos_cpp:msg/OBBDetection2DArray.idl
// generated code does not contain a copyright notice
#ifndef ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_yolos_cpp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_yolos_cpp/msg/detail/obb_detection2_d_array__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_yolos_cpp
bool cdr_serialize_ros2_yolos_cpp__msg__OBBDetection2DArray(
  const ros2_yolos_cpp__msg__OBBDetection2DArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_yolos_cpp
bool cdr_deserialize_ros2_yolos_cpp__msg__OBBDetection2DArray(
  eprosima::fastcdr::Cdr &,
  ros2_yolos_cpp__msg__OBBDetection2DArray * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_yolos_cpp
size_t get_serialized_size_ros2_yolos_cpp__msg__OBBDetection2DArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_yolos_cpp
size_t max_serialized_size_ros2_yolos_cpp__msg__OBBDetection2DArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_yolos_cpp
bool cdr_serialize_key_ros2_yolos_cpp__msg__OBBDetection2DArray(
  const ros2_yolos_cpp__msg__OBBDetection2DArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_yolos_cpp
size_t get_serialized_size_key_ros2_yolos_cpp__msg__OBBDetection2DArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_yolos_cpp
size_t max_serialized_size_key_ros2_yolos_cpp__msg__OBBDetection2DArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_yolos_cpp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_yolos_cpp, msg, OBBDetection2DArray)();

#ifdef __cplusplus
}
#endif

#endif  // ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
