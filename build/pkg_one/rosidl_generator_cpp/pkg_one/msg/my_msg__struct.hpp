// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pkg_one:msg/MyMsg.idl
// generated code does not contain a copyright notice

#ifndef PKG_ONE__MSG__MY_MSG__STRUCT_HPP_
#define PKG_ONE__MSG__MY_MSG__STRUCT_HPP_

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
# define DEPRECATED__pkg_one__msg__MyMsg __attribute__((deprecated))
#else
# define DEPRECATED__pkg_one__msg__MyMsg __declspec(deprecated)
#endif

namespace pkg_one
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MyMsg_
{
  using Type = MyMsg_<ContainerAllocator>;

  explicit MyMsg_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->an_int = 0l;
      this->a_uint = 0ul;
    }
  }

  explicit MyMsg_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->an_int = 0l;
      this->a_uint = 0ul;
    }
  }

  // field types and members
  using _an_int_type =
    int32_t;
  _an_int_type an_int;
  using _a_uint_type =
    uint32_t;
  _a_uint_type a_uint;

  // setters for named parameter idiom
  Type & set__an_int(
    const int32_t & _arg)
  {
    this->an_int = _arg;
    return *this;
  }
  Type & set__a_uint(
    const uint32_t & _arg)
  {
    this->a_uint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pkg_one::msg::MyMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const pkg_one::msg::MyMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pkg_one::msg::MyMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pkg_one::msg::MyMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pkg_one::msg::MyMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pkg_one::msg::MyMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pkg_one::msg::MyMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pkg_one::msg::MyMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pkg_one::msg::MyMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pkg_one::msg::MyMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pkg_one__msg__MyMsg
    std::shared_ptr<pkg_one::msg::MyMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pkg_one__msg__MyMsg
    std::shared_ptr<pkg_one::msg::MyMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyMsg_ & other) const
  {
    if (this->an_int != other.an_int) {
      return false;
    }
    if (this->a_uint != other.a_uint) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyMsg_

// alias to use template instance with default allocator
using MyMsg =
  pkg_one::msg::MyMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pkg_one

#endif  // PKG_ONE__MSG__MY_MSG__STRUCT_HPP_
