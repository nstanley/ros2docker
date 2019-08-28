// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ia_msgs:msg/YetAnother.idl
// generated code does not contain a copyright notice

#ifndef IA_MSGS__MSG__YET_ANOTHER__TRAITS_HPP_
#define IA_MSGS__MSG__YET_ANOTHER__TRAITS_HPP_

#include "ia_msgs/msg/yet_another__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ia_msgs::msg::YetAnother>()
{
  return "ia_msgs::msg::YetAnother";
}

template<>
struct has_fixed_size<ia_msgs::msg::YetAnother>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ia_msgs::msg::YetAnother>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // IA_MSGS__MSG__YET_ANOTHER__TRAITS_HPP_
