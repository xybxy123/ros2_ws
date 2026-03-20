// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_yolos_cpp:msg/OBBDetection2DArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_yolos_cpp/msg/obb_detection2_d_array.h"


#ifndef ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D_ARRAY__STRUCT_H_
#define ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'detections'
#include "ros2_yolos_cpp/msg/detail/obb_detection2_d__struct.h"

/// Struct defined in msg/OBBDetection2DArray in the package ros2_yolos_cpp.
/**
  * OBBDetection2DArray.msg
  * Array of oriented bounding box detections
 */
typedef struct ros2_yolos_cpp__msg__OBBDetection2DArray
{
  /// Timestamp and frame
  std_msgs__msg__Header header;
  /// Array of OBB detections
  ros2_yolos_cpp__msg__OBBDetection2D__Sequence detections;
} ros2_yolos_cpp__msg__OBBDetection2DArray;

// Struct for a sequence of ros2_yolos_cpp__msg__OBBDetection2DArray.
typedef struct ros2_yolos_cpp__msg__OBBDetection2DArray__Sequence
{
  ros2_yolos_cpp__msg__OBBDetection2DArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_yolos_cpp__msg__OBBDetection2DArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D_ARRAY__STRUCT_H_
