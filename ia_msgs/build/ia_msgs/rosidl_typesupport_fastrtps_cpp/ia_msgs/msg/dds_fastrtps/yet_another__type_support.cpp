// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ia_msgs:msg/YetAnother.idl
// generated code does not contain a copyright notice
#include "ia_msgs/msg/yet_another__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ia_msgs/msg/yet_another__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ia_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ia_msgs
cdr_serialize(
  const ia_msgs::msg::YetAnother & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ia_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ia_msgs::msg::YetAnother & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ia_msgs
get_serialized_size(
  const ia_msgs::msg::YetAnother & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ia_msgs
max_serialized_size_YetAnother(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _YetAnother__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ia_msgs::msg::YetAnother *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _YetAnother__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ia_msgs::msg::YetAnother *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _YetAnother__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ia_msgs::msg::YetAnother *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _YetAnother__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_YetAnother(full_bounded, 0);
}

static message_type_support_callbacks_t _YetAnother__callbacks = {
  "ia_msgs::msg",
  "YetAnother",
  _YetAnother__cdr_serialize,
  _YetAnother__cdr_deserialize,
  _YetAnother__get_serialized_size,
  _YetAnother__max_serialized_size
};

static rosidl_message_type_support_t _YetAnother__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_YetAnother__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ia_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ia_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ia_msgs::msg::YetAnother>()
{
  return &ia_msgs::msg::typesupport_fastrtps_cpp::_YetAnother__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ia_msgs, msg, YetAnother)() {
  return &ia_msgs::msg::typesupport_fastrtps_cpp::_YetAnother__handle;
}

#ifdef __cplusplus
}
#endif
