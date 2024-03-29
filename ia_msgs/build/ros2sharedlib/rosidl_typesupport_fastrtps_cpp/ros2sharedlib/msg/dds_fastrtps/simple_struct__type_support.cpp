// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2sharedlib:msg/SimpleStruct.idl
// generated code does not contain a copyright notice
#include "ros2sharedlib/msg/simple_struct__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2sharedlib/msg/simple_struct__struct.hpp"

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

namespace ros2sharedlib
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2sharedlib
cdr_serialize(
  const ros2sharedlib::msg::SimpleStruct & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: s
  cdr << ros_message.s;
  // Member: i
  cdr << ros_message.i;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2sharedlib
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2sharedlib::msg::SimpleStruct & ros_message)
{
  // Member: s
  cdr >> ros_message.s;

  // Member: i
  cdr >> ros_message.i;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2sharedlib
get_serialized_size(
  const ros2sharedlib::msg::SimpleStruct & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: s
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.s.size() + 1);
  // Member: i
  {
    size_t item_size = sizeof(ros_message.i);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2sharedlib
max_serialized_size_SimpleStruct(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: s
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: i
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SimpleStruct__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2sharedlib::msg::SimpleStruct *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SimpleStruct__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2sharedlib::msg::SimpleStruct *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SimpleStruct__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2sharedlib::msg::SimpleStruct *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SimpleStruct__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SimpleStruct(full_bounded, 0);
}

static message_type_support_callbacks_t _SimpleStruct__callbacks = {
  "ros2sharedlib::msg",
  "SimpleStruct",
  _SimpleStruct__cdr_serialize,
  _SimpleStruct__cdr_deserialize,
  _SimpleStruct__get_serialized_size,
  _SimpleStruct__max_serialized_size
};

static rosidl_message_type_support_t _SimpleStruct__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SimpleStruct__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros2sharedlib

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros2sharedlib
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2sharedlib::msg::SimpleStruct>()
{
  return &ros2sharedlib::msg::typesupport_fastrtps_cpp::_SimpleStruct__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2sharedlib, msg, SimpleStruct)() {
  return &ros2sharedlib::msg::typesupport_fastrtps_cpp::_SimpleStruct__handle;
}

#ifdef __cplusplus
}
#endif
