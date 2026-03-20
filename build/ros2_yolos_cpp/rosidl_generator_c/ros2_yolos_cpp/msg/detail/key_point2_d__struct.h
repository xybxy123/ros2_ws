// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_yolos_cpp:msg/KeyPoint2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_yolos_cpp/msg/key_point2_d.h"


#ifndef ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D__STRUCT_H_
#define ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/KeyPoint2D in the package ros2_yolos_cpp.
/**
  * KeyPoint2D.msg
  * A single 2D keypoint with confidence
 */
typedef struct ros2_yolos_cpp__msg__KeyPoint2D
{
  /// X coordinate in pixels
  double x;
  /// Y coordinate in pixels
  double y;
  /// Confidence score (0.0 - 1.0)
  double confidence;
  /// Keypoint index (according to COCO format)
  int32_t id;
} ros2_yolos_cpp__msg__KeyPoint2D;

// Struct for a sequence of ros2_yolos_cpp__msg__KeyPoint2D.
typedef struct ros2_yolos_cpp__msg__KeyPoint2D__Sequence
{
  ros2_yolos_cpp__msg__KeyPoint2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_yolos_cpp__msg__KeyPoint2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D__STRUCT_H_
