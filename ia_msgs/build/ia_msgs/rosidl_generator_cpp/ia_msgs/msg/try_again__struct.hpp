// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ia_msgs:msg/TryAgain.idl
// generated code does not contain a copyright notice

#ifndef IA_MSGS__MSG__TRY_AGAIN__STRUCT_HPP_
#define IA_MSGS__MSG__TRY_AGAIN__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__ia_msgs__msg__TryAgain __attribute__((deprecated))
#else
# define DEPRECATED__ia_msgs__msg__TryAgain __declspec(deprecated)
#endif

namespace ia_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TryAgain_
{
  using Type = TryAgain_<ContainerAllocator>;

  explicit TryAgain_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TryAgain_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;

  // setters for named parameter idiom
  Type & set__structure_needs_at_least_one_member(
    const uint8_t & _arg)
  {
    this->structure_needs_at_least_one_member = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ia_msgs::msg::TryAgain_<ContainerAllocator> *;
  using ConstRawPtr =
    const ia_msgs::msg::TryAgain_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ia_msgs::msg::TryAgain_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ia_msgs::msg::TryAgain_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ia_msgs::msg::TryAgain_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ia_msgs::msg::TryAgain_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ia_msgs::msg::TryAgain_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ia_msgs::msg::TryAgain_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ia_msgs::msg::TryAgain_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ia_msgs::msg::TryAgain_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ia_msgs__msg__TryAgain
    std::shared_ptr<ia_msgs::msg::TryAgain_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ia_msgs__msg__TryAgain
    std::shared_ptr<ia_msgs::msg::TryAgain_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TryAgain_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TryAgain_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TryAgain_

// alias to use template instance with default allocator
using TryAgain =
  ia_msgs::msg::TryAgain_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ia_msgs

#endif  // IA_MSGS__MSG__TRY_AGAIN__STRUCT_HPP_
