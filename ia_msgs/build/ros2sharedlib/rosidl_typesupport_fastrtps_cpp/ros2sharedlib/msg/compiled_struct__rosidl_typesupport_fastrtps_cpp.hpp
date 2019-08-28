// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ros2sharedlib:msg/CompiledStruct.idl
// generated code does not contain a copyright notice

#ifndef ROS2SHAREDLIB__MSG__COMPILED_STRUCT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROS2SHAREDLIB__MSG__COMPILED_STRUCT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2sharedlib/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ros2sharedlib/msg/compiled_struct__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace ros2sharedlib
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2sharedlib
cdr_serialize(
  const ros2sharedlib::msg::CompiledStruct & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2sharedlib
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2sharedlib::msg::CompiledStruct & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2sharedlib
get_serialized_size(
  const ros2sharedlib::msg::CompiledStruct & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2sharedlib
max_serialized_size_CompiledStruct(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros2sharedlib

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2sharedlib
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2sharedlib, msg, CompiledStruct)();

#ifdef __cplusplus
}
#endif

#endif  // ROS2SHAREDLIB__MSG__COMPILED_STRUCT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
