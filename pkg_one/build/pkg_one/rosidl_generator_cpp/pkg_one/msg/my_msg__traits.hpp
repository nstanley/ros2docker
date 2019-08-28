// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pkg_one:msg/MyMsg.idl
// generated code does not contain a copyright notice

#ifndef PKG_ONE__MSG__MY_MSG__TRAITS_HPP_
#define PKG_ONE__MSG__MY_MSG__TRAITS_HPP_

#include "pkg_one/msg/my_msg__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pkg_one::msg::MyMsg>()
{
  return "pkg_one::msg::MyMsg";
}

template<>
struct has_fixed_size<pkg_one::msg::MyMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pkg_one::msg::MyMsg>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // PKG_ONE__MSG__MY_MSG__TRAITS_HPP_
