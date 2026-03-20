// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_yolos_cpp:msg/OBBDetection2DArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_yolos_cpp/msg/detail/obb_detection2_d_array__rosidl_typesupport_introspection_c.h"
#include "ros2_yolos_cpp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_yolos_cpp/msg/detail/obb_detection2_d_array__functions.h"
#include "ros2_yolos_cpp/msg/detail/obb_detection2_d_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `detections`
#include "ros2_yolos_cpp/msg/obb_detection2_d.h"
// Member `detections`
#include "ros2_yolos_cpp/msg/detail/obb_detection2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__OBBDetection2DArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_yolos_cpp__msg__OBBDetection2DArray__init(message_memory);
}

void ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__OBBDetection2DArray_fini_function(void * message_memory)
{
  ros2_yolos_cpp__msg__OBBDetection2DArray__fini(message_memory);
}

size_t ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__size_function__OBBDetection2DArray__detections(
  const void * untyped_member)
{
  const ros2_yolos_cpp__msg__OBBDetection2D__Sequence * member =
    (const ros2_yolos_cpp__msg__OBBDetection2D__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__get_const_function__OBBDetection2DArray__detections(
  const void * untyped_member, size_t index)
{
  const ros2_yolos_cpp__msg__OBBDetection2D__Sequence * member =
    (const ros2_yolos_cpp__msg__OBBDetection2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__get_function__OBBDetection2DArray__detections(
  void * untyped_member, size_t index)
{
  ros2_yolos_cpp__msg__OBBDetection2D__Sequence * member =
    (ros2_yolos_cpp__msg__OBBDetection2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__fetch_function__OBBDetection2DArray__detections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_yolos_cpp__msg__OBBDetection2D * item =
    ((const ros2_yolos_cpp__msg__OBBDetection2D *)
    ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__get_const_function__OBBDetection2DArray__detections(untyped_member, index));
  ros2_yolos_cpp__msg__OBBDetection2D * value =
    (ros2_yolos_cpp__msg__OBBDetection2D *)(untyped_value);
  *value = *item;
}

void ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__assign_function__OBBDetection2DArray__detections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_yolos_cpp__msg__OBBDetection2D * item =
    ((ros2_yolos_cpp__msg__OBBDetection2D *)
    ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__get_function__OBBDetection2DArray__detections(untyped_member, index));
  const ros2_yolos_cpp__msg__OBBDetection2D * value =
    (const ros2_yolos_cpp__msg__OBBDetection2D *)(untyped_value);
  *item = *value;
}

bool ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__resize_function__OBBDetection2DArray__detections(
  void * untyped_member, size_t size)
{
  ros2_yolos_cpp__msg__OBBDetection2D__Sequence * member =
    (ros2_yolos_cpp__msg__OBBDetection2D__Sequence *)(untyped_member);
  ros2_yolos_cpp__msg__OBBDetection2D__Sequence__fini(member);
  return ros2_yolos_cpp__msg__OBBDetection2D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__OBBDetection2DArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp__msg__OBBDetection2DArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp__msg__OBBDetection2DArray, detections),  // bytes offset in struct
    NULL,  // default value
    ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__size_function__OBBDetection2DArray__detections,  // size() function pointer
    ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__get_const_function__OBBDetection2DArray__detections,  // get_const(index) function pointer
    ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__get_function__OBBDetection2DArray__detections,  // get(index) function pointer
    ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__fetch_function__OBBDetection2DArray__detections,  // fetch(index, &value) function pointer
    ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__assign_function__OBBDetection2DArray__detections,  // assign(index, value) function pointer
    ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__resize_function__OBBDetection2DArray__detections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__OBBDetection2DArray_message_members = {
  "ros2_yolos_cpp__msg",  // message namespace
  "OBBDetection2DArray",  // message name
  2,  // number of fields
  sizeof(ros2_yolos_cpp__msg__OBBDetection2DArray),
  false,  // has_any_key_member_
  ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__OBBDetection2DArray_message_member_array,  // message members
  ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__OBBDetection2DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__OBBDetection2DArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__OBBDetection2DArray_message_type_support_handle = {
  0,
  &ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__OBBDetection2DArray_message_members,
  get_message_typesupport_handle_function,
  &ros2_yolos_cpp__msg__OBBDetection2DArray__get_type_hash,
  &ros2_yolos_cpp__msg__OBBDetection2DArray__get_type_description,
  &ros2_yolos_cpp__msg__OBBDetection2DArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_yolos_cpp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_yolos_cpp, msg, OBBDetection2DArray)() {
  ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__OBBDetection2DArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__OBBDetection2DArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_yolos_cpp, msg, OBBDetection2D)();
  if (!ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__OBBDetection2DArray_message_type_support_handle.typesupport_identifier) {
    ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__OBBDetection2DArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_yolos_cpp__msg__OBBDetection2DArray__rosidl_typesupport_introspection_c__OBBDetection2DArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
