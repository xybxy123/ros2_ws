// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_yolos_cpp:msg/KeyPoint2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_yolos_cpp/msg/key_point2_d.hpp"


#ifndef ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D__STRUCT_HPP_
#define ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_yolos_cpp__msg__KeyPoint2D __attribute__((deprecated))
#else
# define DEPRECATED__ros2_yolos_cpp__msg__KeyPoint2D __declspec(deprecated)
#endif

namespace ros2_yolos_cpp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KeyPoint2D_
{
  using Type = KeyPoint2D_<ContainerAllocator>;

  explicit KeyPoint2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->confidence = 0.0;
      this->id = 0l;
    }
  }

  explicit KeyPoint2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->confidence = 0.0;
      this->id = 0l;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _confidence_type =
    double;
  _confidence_type confidence;
  using _id_type =
    int32_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_yolos_cpp::msg::KeyPoint2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_yolos_cpp::msg::KeyPoint2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_yolos_cpp::msg::KeyPoint2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_yolos_cpp::msg::KeyPoint2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_yolos_cpp::msg::KeyPoint2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_yolos_cpp::msg::KeyPoint2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_yolos_cpp::msg::KeyPoint2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_yolos_cpp::msg::KeyPoint2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_yolos_cpp::msg::KeyPoint2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_yolos_cpp::msg::KeyPoint2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_yolos_cpp__msg__KeyPoint2D
    std::shared_ptr<ros2_yolos_cpp::msg::KeyPoint2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_yolos_cpp__msg__KeyPoint2D
    std::shared_ptr<ros2_yolos_cpp::msg::KeyPoint2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KeyPoint2D_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const KeyPoint2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KeyPoint2D_

// alias to use template instance with default allocator
using KeyPoint2D =
  ros2_yolos_cpp::msg::KeyPoint2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_yolos_cpp

#endif  // ROS2_YOLOS_CPP__MSG__DETAIL__KEY_POINT2_D__STRUCT_HPP_
