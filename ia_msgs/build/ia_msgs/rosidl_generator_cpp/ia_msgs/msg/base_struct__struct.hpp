// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ia_msgs:msg/BaseStruct.idl
// generated code does not contain a copyright notice

#ifndef IA_MSGS__MSG__BASE_STRUCT__STRUCT_HPP_
#define IA_MSGS__MSG__BASE_STRUCT__STRUCT_HPP_

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
# define DEPRECATED__ia_msgs__msg__BaseStruct __attribute__((deprecated))
#else
# define DEPRECATED__ia_msgs__msg__BaseStruct __declspec(deprecated)
#endif

namespace ia_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BaseStruct_
{
  using Type = BaseStruct_<ContainerAllocator>;

  explicit BaseStruct_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->info = 0.0;
    }
  }

  explicit BaseStruct_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->info = 0.0;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _info_type =
    double;
  _info_type info;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__info(
    const double & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ia_msgs::msg::BaseStruct_<ContainerAllocator> *;
  using ConstRawPtr =
    const ia_msgs::msg::BaseStruct_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ia_msgs::msg::BaseStruct_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ia_msgs::msg::BaseStruct_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ia_msgs::msg::BaseStruct_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ia_msgs::msg::BaseStruct_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ia_msgs::msg::BaseStruct_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ia_msgs::msg::BaseStruct_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ia_msgs::msg::BaseStruct_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ia_msgs::msg::BaseStruct_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ia_msgs__msg__BaseStruct
    std::shared_ptr<ia_msgs::msg::BaseStruct_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ia_msgs__msg__BaseStruct
    std::shared_ptr<ia_msgs::msg::BaseStruct_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BaseStruct_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const BaseStruct_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BaseStruct_

// alias to use template instance with default allocator
using BaseStruct =
  ia_msgs::msg::BaseStruct_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ia_msgs

#endif  // IA_MSGS__MSG__BASE_STRUCT__STRUCT_HPP_
