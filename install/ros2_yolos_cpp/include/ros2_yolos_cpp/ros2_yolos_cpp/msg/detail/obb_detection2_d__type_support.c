// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_yolos_cpp:msg/OBBDetection2D.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_yolos_cpp/msg/detail/obb_detection2_d__rosidl_typesupport_introspection_c.h"
#include "ros2_yolos_cpp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_yolos_cpp/msg/detail/obb_detection2_d__functions.h"
#include "ros2_yolos_cpp/msg/detail/obb_detection2_d__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `bbox`
#include "ros2_yolos_cpp/msg/oriented_bounding_box2_d.h"
// Member `bbox`
#include "ros2_yolos_cpp/msg/detail/oriented_bounding_box2_d__rosidl_typesupport_introspection_c.h"
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_yolos_cpp__msg__OBBDetection2D__rosidl_typesupport_introspection_c__OBBDetection2D_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_yolos_cpp__msg__OBBDetection2D__init(message_memory);
}

void ros2_yolos_cpp__msg__OBBDetection2D__rosidl_typesupport_introspection_c__OBBDetection2D_fini_function(void * message_memory)
{
  ros2_yolos_cpp__msg__OBBDetection2D__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_yolos_cpp__msg__OBBDetection2D__rosidl_typesupport_introspection_c__OBBDetection2D_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp__msg__OBBDetection2D, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp__msg__OBBDetection2D, bbox),  // bytes offset in struct
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
    offsetof(ros2_yolos_cpp__msg__OBBDetection2D, class_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp__msg__OBBDetection2D, class_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_yolos_cpp__msg__OBBDetection2D, score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_yolos_cpp__msg__OBBDetection2D__rosidl_typesupport_introspection_c__OBBDetection2D_message_members = {
  "ros2_yolos_cpp__msg",  // message namespace
  "OBBDetection2D",  // message name
  5,  // number of fields
  sizeof(ros2_yolos_cpp__msg__OBBDetection2D),
  false,  // has_any_key_member_
  ros2_yolos_cpp__msg__OBBDetection2D__rosidl_typesupport_introspection_c__OBBDetection2D_message_member_array,  // message members
  ros2_yolos_cpp__msg__OBBDetection2D__rosidl_typesupport_introspection_c__OBBDetection2D_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_yolos_cpp__msg__OBBDetection2D__rosidl_typesupport_introspection_c__OBBDetection2D_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_yolos_cpp__msg__OBBDetection2D__rosidl_typesupport_introspection_c__OBBDetection2D_message_type_support_handle = {
  0,
  &ros2_yolos_cpp__msg__OBBDetection2D__rosidl_typesupport_introspection_c__OBBDetection2D_message_members,
  get_message_typesupport_handle_function,
  &ros2_yolos_cpp__msg__OBBDetection2D__get_type_hash,
  &ros2_yolos_cpp__msg__OBBDetection2D__get_type_description,
  &ros2_yolos_cpp__msg__OBBDetection2D__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_yolos_cpp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_yolos_cpp, msg, OBBDetection2D)() {
  ros2_yolos_cpp__msg__OBBDetection2D__rosidl_typesupport_introspection_c__OBBDetection2D_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros2_yolos_cpp__msg__OBBDetection2D__rosidl_typesupport_introspection_c__OBBDetection2D_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_yolos_cpp, msg, OrientedBoundingBox2D)();
  if (!ros2_yolos_cpp__msg__OBBDetection2D__rosidl_typesupport_introspection_c__OBBDetection2D_message_type_support_handle.typesupport_identifier) {
    ros2_yolos_cpp__msg__OBBDetection2D__rosidl_typesupport_introspection_c__OBBDetection2D_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_yolos_cpp__msg__OBBDetection2D__rosidl_typesupport_introspection_c__OBBDetection2D_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
