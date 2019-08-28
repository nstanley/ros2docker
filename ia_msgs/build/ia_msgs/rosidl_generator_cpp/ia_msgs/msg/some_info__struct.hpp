// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ia_msgs:msg/SomeInfo.idl
// generated code does not contain a copyright notice

#ifndef IA_MSGS__MSG__SOME_INFO__STRUCT_HPP_
#define IA_MSGS__MSG__SOME_INFO__STRUCT_HPP_

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
// Member 'core'
#include "ia_msgs/msg/base_struct__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ia_msgs__msg__SomeInfo __attribute__((deprecated))
#else
# define DEPRECATED__ia_msgs__msg__SomeInfo __declspec(deprecated)
#endif

namespace ia_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SomeInfo_
{
  using Type = SomeInfo_<ContainerAllocator>;

  explicit SomeInfo_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : core(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ul;
    }
  }

  explicit SomeInfo_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : core(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ul;
    }
  }

  // field types and members
  using _core_type =
    ia_msgs::msg::BaseStruct_<ContainerAllocator>;
  _core_type core;
  using _timestamp_type =
    uint32_t;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__core(
    const ia_msgs::msg::BaseStruct_<ContainerAllocator> & _arg)
  {
    this->core = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint32_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ia_msgs::msg::SomeInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ia_msgs::msg::SomeInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ia_msgs::msg::SomeInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ia_msgs::msg::SomeInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ia_msgs::msg::SomeInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ia_msgs::msg::SomeInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ia_msgs::msg::SomeInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ia_msgs::msg::SomeInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ia_msgs::msg::SomeInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ia_msgs::msg::SomeInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ia_msgs__msg__SomeInfo
    std::shared_ptr<ia_msgs::msg::SomeInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ia_msgs__msg__SomeInfo
    std::shared_ptr<ia_msgs::msg::SomeInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SomeInfo_ & other) const
  {
    if (this->core != other.core) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SomeInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SomeInfo_

// alias to use template instance with default allocator
using SomeInfo =
  ia_msgs::msg::SomeInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ia_msgs

#endif  // IA_MSGS__MSG__SOME_INFO__STRUCT_HPP_
