// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_yolos_cpp:msg/OrientedBoundingBox2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_yolos_cpp/msg/oriented_bounding_box2_d.h"


#ifndef ROS2_YOLOS_CPP__MSG__DETAIL__ORIENTED_BOUNDING_BOX2_D__STRUCT_H_
#define ROS2_YOLOS_CPP__MSG__DETAIL__ORIENTED_BOUNDING_BOX2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/OrientedBoundingBox2D in the package ros2_yolos_cpp.
/**
  * OrientedBoundingBox2D.msg
  * Oriented (rotated) bounding box in 2D image space
 */
typedef struct ros2_yolos_cpp__msg__OrientedBoundingBox2D
{
  /// Center point of the bounding box
  geometry_msgs__msg__Point center;
  /// Width and height of the box (before rotation)
  double size_x;
  double size_y;
  /// Rotation angle in radians (counter-clockwise from x-axis)
  double theta;
} ros2_yolos_cpp__msg__OrientedBoundingBox2D;

// Struct for a sequence of ros2_yolos_cpp__msg__OrientedBoundingBox2D.
typedef struct ros2_yolos_cpp__msg__OrientedBoundingBox2D__Sequence
{
  ros2_yolos_cpp__msg__OrientedBoundingBox2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_yolos_cpp__msg__OrientedBoundingBox2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_YOLOS_CPP__MSG__DETAIL__ORIENTED_BOUNDING_BOX2_D__STRUCT_H_
