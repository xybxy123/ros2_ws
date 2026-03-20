// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros2_yolos_cpp:msg/OBBDetection2DArray.idl
// generated code does not contain a copyright notice

#include "ros2_yolos_cpp/msg/detail/obb_detection2_d_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros2_yolos_cpp
const rosidl_type_hash_t *
ros2_yolos_cpp__msg__OBBDetection2DArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x90, 0x09, 0x35, 0xb5, 0xd3, 0x79, 0xf9, 0xf7,
      0x69, 0x34, 0x93, 0x2b, 0x14, 0xec, 0xf0, 0x32,
      0xb1, 0xec, 0xf5, 0x35, 0x47, 0xf7, 0x91, 0x0c,
      0xd9, 0xee, 0xdf, 0x7c, 0xf4, 0x9a, 0xeb, 0x8b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ros2_yolos_cpp/msg/detail/obb_detection2_d__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "ros2_yolos_cpp/msg/detail/oriented_bounding_box2_d__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t ros2_yolos_cpp__msg__OBBDetection2D__EXPECTED_HASH = {1, {
    0x45, 0xe6, 0xb6, 0x8e, 0x47, 0x92, 0x14, 0xc0,
    0x5a, 0xc5, 0xda, 0x29, 0x90, 0x74, 0x52, 0xe5,
    0x38, 0x91, 0x6d, 0xf7, 0xa5, 0xcb, 0x53, 0x2f,
    0xb6, 0xd6, 0x54, 0x19, 0xf4, 0x7a, 0x36, 0x74,
  }};
static const rosidl_type_hash_t ros2_yolos_cpp__msg__OrientedBoundingBox2D__EXPECTED_HASH = {1, {
    0xbc, 0xd5, 0x0f, 0xc6, 0xab, 0x83, 0x2b, 0x53,
    0xb6, 0xbf, 0x86, 0xc4, 0x05, 0x00, 0xf4, 0x2f,
    0xaa, 0x41, 0x3b, 0x5c, 0x48, 0xef, 0x89, 0xe3,
    0xd4, 0xd6, 0xea, 0xdf, 0x53, 0x0e, 0x8f, 0x33,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char ros2_yolos_cpp__msg__OBBDetection2DArray__TYPE_NAME[] = "ros2_yolos_cpp/msg/OBBDetection2DArray";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char ros2_yolos_cpp__msg__OBBDetection2D__TYPE_NAME[] = "ros2_yolos_cpp/msg/OBBDetection2D";
static char ros2_yolos_cpp__msg__OrientedBoundingBox2D__TYPE_NAME[] = "ros2_yolos_cpp/msg/OrientedBoundingBox2D";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char ros2_yolos_cpp__msg__OBBDetection2DArray__FIELD_NAME__header[] = "header";
static char ros2_yolos_cpp__msg__OBBDetection2DArray__FIELD_NAME__detections[] = "detections";

static rosidl_runtime_c__type_description__Field ros2_yolos_cpp__msg__OBBDetection2DArray__FIELDS[] = {
  {
    {ros2_yolos_cpp__msg__OBBDetection2DArray__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_yolos_cpp__msg__OBBDetection2DArray__FIELD_NAME__detections, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ros2_yolos_cpp__msg__OBBDetection2D__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros2_yolos_cpp__msg__OBBDetection2DArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {ros2_yolos_cpp__msg__OBBDetection2D__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ros2_yolos_cpp__msg__OrientedBoundingBox2D__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2_yolos_cpp__msg__OBBDetection2DArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2_yolos_cpp__msg__OBBDetection2DArray__TYPE_NAME, 38, 38},
      {ros2_yolos_cpp__msg__OBBDetection2DArray__FIELDS, 2, 2},
    },
    {ros2_yolos_cpp__msg__OBBDetection2DArray__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros2_yolos_cpp__msg__OBBDetection2D__EXPECTED_HASH, ros2_yolos_cpp__msg__OBBDetection2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ros2_yolos_cpp__msg__OBBDetection2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros2_yolos_cpp__msg__OrientedBoundingBox2D__EXPECTED_HASH, ros2_yolos_cpp__msg__OrientedBoundingBox2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = ros2_yolos_cpp__msg__OrientedBoundingBox2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# OBBDetection2DArray.msg\n"
  "# Array of oriented bounding box detections\n"
  "\n"
  "# Timestamp and frame\n"
  "std_msgs/Header header\n"
  "\n"
  "# Array of OBB detections\n"
  "ros2_yolos_cpp/OBBDetection2D[] detections";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros2_yolos_cpp__msg__OBBDetection2DArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2_yolos_cpp__msg__OBBDetection2DArray__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 186, 186},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2_yolos_cpp__msg__OBBDetection2DArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2_yolos_cpp__msg__OBBDetection2DArray__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *ros2_yolos_cpp__msg__OBBDetection2D__get_individual_type_description_source(NULL);
    sources[4] = *ros2_yolos_cpp__msg__OrientedBoundingBox2D__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
