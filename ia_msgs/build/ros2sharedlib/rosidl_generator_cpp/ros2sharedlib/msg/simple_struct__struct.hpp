// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2sharedlib:msg/SimpleStruct.idl
// generated code does not contain a copyright notice

#ifndef ROS2SHAREDLIB__MSG__SIMPLE_STRUCT__STRUCT_HPP_
#define ROS2SHAREDLIB__MSG__SIMPLE_STRUCT__STRUCT_HPP_

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
# define DEPRECATED__ros2sharedlib__msg__SimpleStruct __attribute__((deprecated))
#else
# define DEPRECATED__ros2sharedlib__msg__SimpleStruct __declspec(deprecated)
#endif

namespace ros2sharedlib
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SimpleStruct_
{
  using Type = SimpleStruct_<ContainerAllocator>;

  explicit SimpleStruct_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->s = "";
      this->i = 0l;
    }
  }

  explicit SimpleStruct_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : s(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->s = "";
      this->i = 0l;
    }
  }

  // field types and members
  using _s_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _s_type s;
  using _i_type =
    int32_t;
  _i_type i;

  // setters for named parameter idiom
  Type & set__s(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->s = _arg;
    return *this;
  }
  Type & set__i(
    const int32_t & _arg)
  {
    this->i = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2sharedlib::msg::SimpleStruct_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2sharedlib::msg::SimpleStruct_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2sharedlib::msg::SimpleStruct_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2sharedlib::msg::SimpleStruct_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2sharedlib::msg::SimpleStruct_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2sharedlib::msg::SimpleStruct_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2sharedlib::msg::SimpleStruct_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2sharedlib::msg::SimpleStruct_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2sharedlib::msg::SimpleStruct_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2sharedlib::msg::SimpleStruct_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2sharedlib__msg__SimpleStruct
    std::shared_ptr<ros2sharedlib::msg::SimpleStruct_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2sharedlib__msg__SimpleStruct
    std::shared_ptr<ros2sharedlib::msg::SimpleStruct_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimpleStruct_ & other) const
  {
    if (this->s != other.s) {
      return false;
    }
    if (this->i != other.i) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimpleStruct_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimpleStruct_

// alias to use template instance with default allocator
using SimpleStruct =
  ros2sharedlib::msg::SimpleStruct_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2sharedlib

#endif  // ROS2SHAREDLIB__MSG__SIMPLE_STRUCT__STRUCT_HPP_
