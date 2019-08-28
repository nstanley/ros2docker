// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2sharedlib:msg/CompiledStruct.idl
// generated code does not contain a copyright notice

#ifndef ROS2SHAREDLIB__MSG__COMPILED_STRUCT__TRAITS_HPP_
#define ROS2SHAREDLIB__MSG__COMPILED_STRUCT__TRAITS_HPP_

#include "ros2sharedlib/msg/compiled_struct__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'ss'
#include "ros2sharedlib/msg/simple_struct__traits.hpp"
// Member 'as'
#include "ros2sharedlib/msg/another_struct__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2sharedlib::msg::CompiledStruct>()
{
  return "ros2sharedlib::msg::CompiledStruct";
}

template<>
struct has_fixed_size<ros2sharedlib::msg::CompiledStruct>
  : std::integral_constant<bool, has_fixed_size<ros2sharedlib::msg::AnotherStruct>::value && has_fixed_size<ros2sharedlib::msg::SimpleStruct>::value> {};

template<>
struct has_bounded_size<ros2sharedlib::msg::CompiledStruct>
  : std::integral_constant<bool, has_bounded_size<ros2sharedlib::msg::AnotherStruct>::value && has_bounded_size<ros2sharedlib::msg::SimpleStruct>::value> {};

}  // namespace rosidl_generator_traits

#endif  // ROS2SHAREDLIB__MSG__COMPILED_STRUCT__TRAITS_HPP_
