// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_yolos_cpp:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_yolos_cpp/msg/detail/key_point2_d_array__rosidl_typesupport_introspection_c.h"
#include "ros2_yolos_cpp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_yolos_cpp/msg/detail/key_point2_d_array__functions.h"
#include "ros2_yolos_cpp/msg/detail/key_point2_d_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `keypoints`
#include "ros2_yolos_cpp/msg/key_point2_d.h"
// Member `keypoints`
#include "ros2_yolos_cpp/msg/detail/key_point2_d__rosidl_typesupport_introspection_c.h"
// Member `bounding_box_center`
#include "geometry_msgs/msg/point.h"
// Member `bounding_box_center`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_yolos_cpp__msg__KeyPoint2DArray__init(message_memory);
}

void ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_fini_function(void * message_memory)
{
  ros2_yolos_cpp__msg__KeyPoint2DArray__fini(message_memory);
}

size_t ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__size_function__KeyPoint2DArray__keypoints(
  const void * untyped_member)
{
  const ros2_yolos_cpp__msg__KeyPoint2D__Sequence * member =
    (const ros2_yolos_cpp__msg__KeyPoint2D__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__get_const_function__KeyPoint2DArray__keypoints(
  const void * untyped_member, size_t index)
{
  const ros2_yolos_cpp__msg__KeyPoint2D__Sequence * member =
    (const ros2_yolos_cpp__msg__KeyPoint2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__get_function__KeyPoint2DArray__keypoints(
  void * untyped_member, size_t index)
{
  ros2_yolos_cpp__msg__KeyPoint2D__Sequence * member =
    (ros2_yolos_cpp__msg__KeyPoint2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__fetch_function__KeyPoint2DArray__keypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_yolos_cpp__msg__KeyPoint2D * item =
    ((const ros2_yolos_cpp__msg__KeyPoint2D *)
    ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__get_const_function__KeyPoint2DArray__keypoints(untyped_member, index));
  ros2_yolos_cpp__msg__KeyPoint2D * value =
    (ros2_yolos_cpp__msg__KeyPoint2D *)(untyped_value);
  *value = *item;
}

void ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__assign_function__KeyPoint2DArray__keypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_yolos_cpp__msg__KeyPoint2D * item =
    ((ros2_yolos_cpp__msg__KeyPoint2D *)
    ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__get_function__KeyPoint2DArray__keypoints(untyped_member, index));
  const ros2_yolos_cpp__msg__KeyPoint2D * value =
    (const ros2_yolos_cpp__msg__KeyPoint2D *)(untyped_value);
  *item = *value;
}

bool ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__resize_function__KeyPoint2DArray__keypoints(
  void * untyped_member, size_t size)
{
  ros2_yolos_cpp__msg__KeyPoint2D__Sequence * member =
    (ros2_yolos_cpp__msg__KeyPoint2D__Sequence *)(untyped_member);
  ros2_yolos_cpp__msg__KeyPoint2D__Sequence__fini(member);
  return ros2_yolos_cpp__msg__KeyPoint2D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp__msg__KeyPoint2DArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "keypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp__msg__KeyPoint2DArray, keypoints),  // bytes offset in struct
    NULL,  // default value
    ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__size_function__KeyPoint2DArray__keypoints,  // size() function pointer
    ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__get_const_function__KeyPoint2DArray__keypoints,  // get_const(index) function pointer
    ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__get_function__KeyPoint2DArray__keypoints,  // get(index) function pointer
    ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__fetch_function__KeyPoint2DArray__keypoints,  // fetch(index, &value) function pointer
    ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__assign_function__KeyPoint2DArray__keypoints,  // assign(index, value) function pointer
    ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__resize_function__KeyPoint2DArray__keypoints  // resize(index) function pointer
  },
  {
    "bounding_box_center",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp__msg__KeyPoint2DArray, bounding_box_center),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounding_box_size_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp__msg__KeyPoint2DArray, bounding_box_size_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounding_box_size_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp__msg__KeyPoint2DArray, bounding_box_size_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp__msg__KeyPoint2DArray, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp__msg__KeyPoint2DArray, class_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_members = {
  "ros2_yolos_cpp__msg",  // message namespace
  "KeyPoint2DArray",  // message name
  7,  // number of fields
  sizeof(ros2_yolos_cpp__msg__KeyPoint2DArray),
  false,  // has_any_key_member_
  ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_member_array,  // message members
  ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_type_support_handle = {
  0,
  &ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_members,
  get_message_typesupport_handle_function,
  &ros2_yolos_cpp__msg__KeyPoint2DArray__get_type_hash,
  &ros2_yolos_cpp__msg__KeyPoint2DArray__get_type_description,
  &ros2_yolos_cpp__msg__KeyPoint2DArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_yolos_cpp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_yolos_cpp, msg, KeyPoint2DArray)() {
  ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_yolos_cpp, msg, KeyPoint2D)();
  ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_type_support_handle.typesupport_identifier) {
    ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_yolos_cpp__msg__KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
