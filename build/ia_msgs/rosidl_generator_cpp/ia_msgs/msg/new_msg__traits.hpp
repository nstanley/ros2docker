// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ia_msgs:msg/NewMsg.idl
// generated code does not contain a copyright notice

#ifndef IA_MSGS__MSG__NEW_MSG__TRAITS_HPP_
#define IA_MSGS__MSG__NEW_MSG__TRAITS_HPP_

#include "ia_msgs/msg/new_msg__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 's'
#include "ia_msgs/msg/some_info__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ia_msgs::msg::NewMsg>()
{
  return "ia_msgs::msg::NewMsg";
}

template<>
struct has_fixed_size<ia_msgs::msg::NewMsg>
  : std::integral_constant<bool, has_fixed_size<ia_msgs::msg::SomeInfo>::value> {};

template<>
struct has_bounded_size<ia_msgs::msg::NewMsg>
  : std::integral_constant<bool, has_bounded_size<ia_msgs::msg::SomeInfo>::value> {};

}  // namespace rosidl_generator_traits

#endif  // IA_MSGS__MSG__NEW_MSG__TRAITS_HPP_
