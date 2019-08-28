// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2sharedlib:msg/SimpleStruct.idl
// generated code does not contain a copyright notice

#ifndef ROS2SHAREDLIB__MSG__SIMPLE_STRUCT__TRAITS_HPP_
#define ROS2SHAREDLIB__MSG__SIMPLE_STRUCT__TRAITS_HPP_

#include "ros2sharedlib/msg/simple_struct__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2sharedlib::msg::SimpleStruct>()
{
  return "ros2sharedlib::msg::SimpleStruct";
}

template<>
struct has_fixed_size<ros2sharedlib::msg::SimpleStruct>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2sharedlib::msg::SimpleStruct>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // ROS2SHAREDLIB__MSG__SIMPLE_STRUCT__TRAITS_HPP_
