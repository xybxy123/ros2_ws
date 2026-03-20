// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_yolos_cpp:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_yolos_cpp/msg/key_point2_d_array.hpp"


#ifndef ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_HPP_
#define ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'keypoints'
#include "ros2_yolos_cpp/msg/detail/key_point2_d__struct.hpp"
// Member 'bounding_box_center'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_yolos_cpp__msg__KeyPoint2DArray __attribute__((deprecated))
#else
# define DEPRECATED__ros2_yolos_cpp__msg__KeyPoint2DArray __declspec(deprecated)
#endif

namespace ros2_yolos_cpp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KeyPoint2DArray_
{
  using Type = KeyPoint2DArray_<ContainerAllocator>;

  explicit KeyPoint2DArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    bounding_box_center(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bounding_box_size_x = 0.0;
      this->bounding_box_size_y = 0.0;
      this->confidence = 0.0;
      this->class_id = 0l;
    }
  }

  explicit KeyPoint2DArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    bounding_box_center(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bounding_box_size_x = 0.0;
      this->bounding_box_size_y = 0.0;
      this->confidence = 0.0;
      this->class_id = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _keypoints_type =
    std::vector<ros2_yolos_cpp::msg::KeyPoint2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_yolos_cpp::msg::KeyPoint2D_<ContainerAllocator>>>;
  _keypoints_type keypoints;
  using _bounding_box_center_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _bounding_box_center_type bounding_box_center;
  using _bounding_box_size_x_type =
    double;
  _bounding_box_size_x_type bounding_box_size_x;
  using _bounding_box_size_y_type =
    double;
  _bounding_box_size_y_type bounding_box_size_y;
  using _confidence_type =
    double;
  _confidence_type confidence;
  using _class_id_type =
    int32_t;
  _class_id_type class_id;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__keypoints(
    const std::vector<ros2_yolos_cpp::msg::KeyPoint2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_yolos_cpp::msg::KeyPoint2D_<ContainerAllocator>>> & _arg)
  {
    this->keypoints = _arg;
    return *this;
  }
  Type & set__bounding_box_center(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->bounding_box_center = _arg;
    return *this;
  }
  Type & set__bounding_box_size_x(
    const double & _arg)
  {
    this->bounding_box_size_x = _arg;
    return *this;
  }
  Type & set__bounding_box_size_y(
    const double & _arg)
  {
    this->bounding_box_size_y = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__class_id(
    const int32_t & _arg)
  {
    this->class_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_yolos_cpp::msg::KeyPoint2DArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_yolos_cpp::msg::KeyPoint2DArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_yolos_cpp::msg::KeyPoint2DArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_yolos_cpp::msg::KeyPoint2DArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_yolos_cpp::msg::KeyPoint2DArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_yolos_cpp::msg::KeyPoint2DArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_yolos_cpp::msg::KeyPoint2DArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_yolos_cpp::msg::KeyPoint2DArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_yolos_cpp::msg::KeyPoint2DArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_yolos_cpp::msg::KeyPoint2DArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_yolos_cpp__msg__KeyPoint2DArray
    std::shared_ptr<ros2_yolos_cpp::msg::KeyPoint2DArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_yolos_cpp__msg__KeyPoint2DArray
    std::shared_ptr<ros2_yolos_cpp::msg::KeyPoint2DArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KeyPoint2DArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->keypoints != other.keypoints) {
      return false;
    }
    if (this->bounding_box_center != other.bounding_box_center) {
      return false;
    }
    if (this->bounding_box_size_x != other.bounding_box_size_x) {
      return false;
    }
    if (this->bounding_box_size_y != other.bounding_box_size_y) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->class_id != other.class_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const KeyPoint2DArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KeyPoint2DArray_

// alias to use template instance with default allocator
using KeyPoint2DArray =
  ros2_yolos_cpp::msg::KeyPoint2DArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_yolos_cpp

#endif  // ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_HPP_
