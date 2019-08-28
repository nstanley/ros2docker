// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2sharedlib:msg/CompiledStruct.idl
// generated code does not contain a copyright notice

#ifndef ROS2SHAREDLIB__MSG__COMPILED_STRUCT__STRUCT_HPP_
#define ROS2SHAREDLIB__MSG__COMPILED_STRUCT__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

// Include directives for member types
// Member 'ss'
#include "ros2sharedlib/msg/simple_struct__struct.hpp"
// Member 'as'
#include "ros2sharedlib/msg/another_struct__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2sharedlib__msg__CompiledStruct __attribute__((deprecated))
#else
# define DEPRECATED__ros2sharedlib__msg__CompiledStruct __declspec(deprecated)
#endif

namespace ros2sharedlib
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CompiledStruct_
{
  using Type = CompiledStruct_<ContainerAllocator>;

  explicit CompiledStruct_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : ss(_init),
    as(_init)
  {
    (void)_init;
  }

  explicit CompiledStruct_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : ss(_alloc, _init),
    as(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _ss_type =
    ros2sharedlib::msg::SimpleStruct_<ContainerAllocator>;
  _ss_type ss;
  using _as_type =
    ros2sharedlib::msg::AnotherStruct_<ContainerAllocator>;
  _as_type as;

  // setters for named parameter idiom
  Type & set__ss(
    const ros2sharedlib::msg::SimpleStruct_<ContainerAllocator> & _arg)
  {
    this->ss = _arg;
    return *this;
  }
  Type & set__as(
    const ros2sharedlib::msg::AnotherStruct_<ContainerAllocator> & _arg)
  {
    this->as = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2sharedlib::msg::CompiledStruct_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2sharedlib::msg::CompiledStruct_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2sharedlib::msg::CompiledStruct_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2sharedlib::msg::CompiledStruct_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2sharedlib::msg::CompiledStruct_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2sharedlib::msg::CompiledStruct_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2sharedlib::msg::CompiledStruct_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2sharedlib::msg::CompiledStruct_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2sharedlib::msg::CompiledStruct_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2sharedlib::msg::CompiledStruct_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2sharedlib__msg__CompiledStruct
    std::shared_ptr<ros2sharedlib::msg::CompiledStruct_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2sharedlib__msg__CompiledStruct
    std::shared_ptr<ros2sharedlib::msg::CompiledStruct_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CompiledStruct_ & other) const
  {
    if (this->ss != other.ss) {
      return false;
    }
    if (this->as != other.as) {
      return false;
    }
    return true;
  }
  bool operator!=(const CompiledStruct_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CompiledStruct_

// alias to use template instance with default allocator
using CompiledStruct =
  ros2sharedlib::msg::CompiledStruct_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2sharedlib

#endif  // ROS2SHAREDLIB__MSG__COMPILED_STRUCT__STRUCT_HPP_
