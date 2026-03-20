// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros2_yolos_cpp:msg/OrientedBoundingBox2D.idl
// generated code does not contain a copyright notice

#include "ros2_yolos_cpp/msg/detail/oriented_bounding_box2_d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros2_yolos_cpp
const rosidl_type_hash_t *
ros2_yolos_cpp__msg__OrientedBoundingBox2D__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbc, 0xd5, 0x0f, 0xc6, 0xab, 0x83, 0x2b, 0x53,
      0xb6, 0xbf, 0x86, 0xc4, 0x05, 0x00, 0xf4, 0x2f,
      0xaa, 0x41, 0x3b, 0x5c, 0x48, 0xef, 0x89, 0xe3,
      0xd4, 0xd6, 0xea, 0xdf, 0x53, 0x0e, 0x8f, 0x33,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
#endif

static char ros2_yolos_cpp__msg__OrientedBoundingBox2D__TYPE_NAME[] = "ros2_yolos_cpp/msg/OrientedBoundingBox2D";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";

// Define type names, field names, and default values
static char ros2_yolos_cpp__msg__OrientedBoundingBox2D__FIELD_NAME__center[] = "center";
static char ros2_yolos_cpp__msg__OrientedBoundingBox2D__FIELD_NAME__size_x[] = "size_x";
static char ros2_yolos_cpp__msg__OrientedBoundingBox2D__FIELD_NAME__size_y[] = "size_y";
static char ros2_yolos_cpp__msg__OrientedBoundingBox2D__FIELD_NAME__theta[] = "theta";

static rosidl_runtime_c__type_description__Field ros2_yolos_cpp__msg__OrientedBoundingBox2D__FIELDS[] = {
  {
    {ros2_yolos_cpp__msg__OrientedBoundingBox2D__FIELD_NAME__center, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_yolos_cpp__msg__OrientedBoundingBox2D__FIELD_NAME__size_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_yolos_cpp__msg__OrientedBoundingBox2D__FIELD_NAME__size_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_yolos_cpp__msg__OrientedBoundingBox2D__FIELD_NAME__theta, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros2_yolos_cpp__msg__OrientedBoundingBox2D__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2_yolos_cpp__msg__OrientedBoundingBox2D__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2_yolos_cpp__msg__OrientedBoundingBox2D__TYPE_NAME, 40, 40},
      {ros2_yolos_cpp__msg__OrientedBoundingBox2D__FIELDS, 4, 4},
    },
    {ros2_yolos_cpp__msg__OrientedBoundingBox2D__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# OrientedBoundingBox2D.msg\n"
  "# Oriented (rotated) bounding box in 2D image space\n"
  "\n"
  "# Center point of the bounding box\n"
  "geometry_msgs/Point center\n"
  "\n"
  "# Width and height of the box (before rotation)\n"
  "float64 size_x\n"
  "float64 size_y\n"
  "\n"
  "# Rotation angle in radians (counter-clockwise from x-axis)\n"
  "float64 theta";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros2_yolos_cpp__msg__OrientedBoundingBox2D__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2_yolos_cpp__msg__OrientedBoundingBox2D__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 297, 297},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2_yolos_cpp__msg__OrientedBoundingBox2D__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2_yolos_cpp__msg__OrientedBoundingBox2D__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
