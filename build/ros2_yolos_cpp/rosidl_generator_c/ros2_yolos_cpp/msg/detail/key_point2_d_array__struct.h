// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_yolos_cpp:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_yolos_cpp/msg/key_point2_d_array.h"


#ifndef ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_H_
#define ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_H_

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
// Member 'keypoints'
#include "ros2_yolos_cpp/msg/detail/key_point2_d__struct.h"
// Member 'bounding_box_center'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/KeyPoint2DArray in the package ros2_yolos_cpp.
/**
  * KeyPoint2DArray.msg
  * Array of 2D keypoints for a single person/object
 */
typedef struct ros2_yolos_cpp__msg__KeyPoint2DArray
{
  /// Header with timestamp
  std_msgs__msg__Header header;
  /// Array of keypoints (17 for COCO format)
  ros2_yolos_cpp__msg__KeyPoint2D__Sequence keypoints;
  /// Bounding box of the detected person (optional)
  geometry_msgs__msg__Point bounding_box_center;
  double bounding_box_size_x;
  double bounding_box_size_y;
  /// Detection confidence
  double confidence;
  /// Class ID (typically 0 for person in pose estimation)
  int32_t class_id;
} ros2_yolos_cpp__msg__KeyPoint2DArray;

// Struct for a sequence of ros2_yolos_cpp__msg__KeyPoint2DArray.
typedef struct ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence
{
  ros2_yolos_cpp__msg__KeyPoint2DArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_yolos_cpp__msg__KeyPoint2DArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_H_
