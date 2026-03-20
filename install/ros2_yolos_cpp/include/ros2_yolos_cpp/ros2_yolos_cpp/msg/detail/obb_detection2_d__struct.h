// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_yolos_cpp:msg/OBBDetection2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_yolos_cpp/msg/obb_detection2_d.h"


#ifndef ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D__STRUCT_H_
#define ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D__STRUCT_H_

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
// Member 'bbox'
#include "ros2_yolos_cpp/msg/detail/oriented_bounding_box2_d__struct.h"
// Member 'class_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/OBBDetection2D in the package ros2_yolos_cpp.
/**
  * OBBDetection2D.msg
  * A single oriented bounding box detection result
 */
typedef struct ros2_yolos_cpp__msg__OBBDetection2D
{
  /// Timestamp and frame
  std_msgs__msg__Header header;
  /// The oriented bounding box
  ros2_yolos_cpp__msg__OrientedBoundingBox2D bbox;
  /// Class ID
  int32_t class_id;
  /// Class name (optional)
  rosidl_runtime_c__String class_name;
  /// Confidence score (0.0 - 1.0)
  double score;
} ros2_yolos_cpp__msg__OBBDetection2D;

// Struct for a sequence of ros2_yolos_cpp__msg__OBBDetection2D.
typedef struct ros2_yolos_cpp__msg__OBBDetection2D__Sequence
{
  ros2_yolos_cpp__msg__OBBDetection2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_yolos_cpp__msg__OBBDetection2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_YOLOS_CPP__MSG__DETAIL__OBB_DETECTION2_D__STRUCT_H_
