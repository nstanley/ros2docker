// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ia_msgs:msg/NewMsg.idl
// generated code does not contain a copyright notice

#ifndef IA_MSGS__MSG__NEW_MSG__STRUCT_HPP_
#define IA_MSGS__MSG__NEW_MSG__STRUCT_HPP_

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
// Member 's'
#include "ia_msgs/msg/some_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ia_msgs__msg__NewMsg __attribute__((deprecated))
#else
# define DEPRECATED__ia_msgs__msg__NewMsg __declspec(deprecated)
#endif

namespace ia_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NewMsg_
{
  using Type = NewMsg_<ContainerAllocator>;

  explicit NewMsg_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : s(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->f = 0.0;
    }
  }

  explicit NewMsg_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : s(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->f = 0.0;
    }
  }

  // field types and members
  using _s_type =
    ia_msgs::msg::SomeInfo_<ContainerAllocator>;
  _s_type s;
  using _f_type =
    double;
  _f_type f;

  // setters for named parameter idiom
  Type & set__s(
    const ia_msgs::msg::SomeInfo_<ContainerAllocator> & _arg)
  {
    this->s = _arg;
    return *this;
  }
  Type & set__f(
    const double & _arg)
  {
    this->f = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ia_msgs::msg::NewMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const ia_msgs::msg::NewMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ia_msgs::msg::NewMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ia_msgs::msg::NewMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ia_msgs::msg::NewMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ia_msgs::msg::NewMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ia_msgs::msg::NewMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ia_msgs::msg::NewMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ia_msgs::msg::NewMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ia_msgs::msg::NewMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ia_msgs__msg__NewMsg
    std::shared_ptr<ia_msgs::msg::NewMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ia_msgs__msg__NewMsg
    std::shared_ptr<ia_msgs::msg::NewMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NewMsg_ & other) const
  {
    if (this->s != other.s) {
      return false;
    }
    if (this->f != other.f) {
      return false;
    }
    return true;
  }
  bool operator!=(const NewMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NewMsg_

// alias to use template instance with default allocator
using NewMsg =
  ia_msgs::msg::NewMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ia_msgs

#endif  // IA_MSGS__MSG__NEW_MSG__STRUCT_HPP_
