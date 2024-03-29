// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ia_msgs:msg/BaseStruct.idl
// generated code does not contain a copyright notice

#ifndef IA_MSGS__MSG__BASE_STRUCT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define IA_MSGS__MSG__BASE_STRUCT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ia_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ia_msgs/msg/base_struct__struct.hpp"

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

namespace ia_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ia_msgs
cdr_serialize(
  const ia_msgs::msg::BaseStruct & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ia_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ia_msgs::msg::BaseStruct & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ia_msgs
get_serialized_size(
  const ia_msgs::msg::BaseStruct & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ia_msgs
max_serialized_size_BaseStruct(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ia_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ia_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ia_msgs, msg, BaseStruct)();

#ifdef __cplusplus
}
#endif

#endif  // IA_MSGS__MSG__BASE_STRUCT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
