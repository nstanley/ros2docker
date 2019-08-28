// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ia_msgs:msg/NewMsg.idl
// generated code does not contain a copyright notice
#include "ia_msgs/msg/new_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ia_msgs/msg/new_msg__struct.hpp"

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
bool cdr_serialize(
  const ia_msgs::msg::SomeInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ia_msgs::msg::SomeInfo &);
size_t get_serialized_size(
  const ia_msgs::msg::SomeInfo &,
  size_t current_alignment);
size_t
max_serialized_size_SomeInfo(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ia_msgs


namespace ia_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ia_msgs
cdr_serialize(
  const ia_msgs::msg::NewMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: s
  ia_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.s,
    cdr);
  // Member: f
  cdr << ros_message.f;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ia_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ia_msgs::msg::NewMsg & ros_message)
{
  // Member: s
  ia_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.s);

  // Member: f
  cdr >> ros_message.f;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ia_msgs
get_serialized_size(
  const ia_msgs::msg::NewMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: s

  current_alignment +=
    ia_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.s, current_alignment);
  // Member: f
  {
    size_t item_size = sizeof(ros_message.f);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ia_msgs
max_serialized_size_NewMsg(
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


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ia_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SomeInfo(
        full_bounded, current_alignment);
    }
  }

  // Member: f
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _NewMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ia_msgs::msg::NewMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NewMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ia_msgs::msg::NewMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NewMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ia_msgs::msg::NewMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NewMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NewMsg(full_bounded, 0);
}

static message_type_support_callbacks_t _NewMsg__callbacks = {
  "ia_msgs::msg",
  "NewMsg",
  _NewMsg__cdr_serialize,
  _NewMsg__cdr_deserialize,
  _NewMsg__get_serialized_size,
  _NewMsg__max_serialized_size
};

static rosidl_message_type_support_t _NewMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NewMsg__callbacks,
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
get_message_type_support_handle<ia_msgs::msg::NewMsg>()
{
  return &ia_msgs::msg::typesupport_fastrtps_cpp::_NewMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ia_msgs, msg, NewMsg)() {
  return &ia_msgs::msg::typesupport_fastrtps_cpp::_NewMsg__handle;
}

#ifdef __cplusplus
}
#endif
