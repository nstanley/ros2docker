// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2sharedlib:msg/AnotherStruct.idl
// generated code does not contain a copyright notice
#include "ros2sharedlib/msg/another_struct__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2sharedlib/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2sharedlib/msg/another_struct__struct.h"
#include "ros2sharedlib/msg/another_struct__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_generator_c/string.h"  // str
#include "rosidl_generator_c/string_functions.h"  // str

// forward declare type support functions


using _AnotherStruct__ros_msg_type = ros2sharedlib__msg__AnotherStruct;

static bool _AnotherStruct__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AnotherStruct__ros_msg_type * ros_message = static_cast<const _AnotherStruct__ros_msg_type *>(untyped_ros_message);
  // Field name: str
  {
    const rosidl_generator_c__String * str = &ros_message->str;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: num
  {
    cdr << ros_message->num;
  }

  return true;
}

static bool _AnotherStruct__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AnotherStruct__ros_msg_type * ros_message = static_cast<_AnotherStruct__ros_msg_type *>(untyped_ros_message);
  // Field name: str
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->str.data) {
      rosidl_generator_c__String__init(&ros_message->str);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->str,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'str'\n");
      return false;
    }
  }

  // Field name: num
  {
    cdr >> ros_message->num;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2sharedlib
size_t get_serialized_size_ros2sharedlib__msg__AnotherStruct(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AnotherStruct__ros_msg_type * ros_message = static_cast<const _AnotherStruct__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name str
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->str.size + 1);
  // field.name num
  {
    size_t item_size = sizeof(ros_message->num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AnotherStruct__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2sharedlib__msg__AnotherStruct(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2sharedlib
size_t max_serialized_size_ros2sharedlib__msg__AnotherStruct(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: str
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AnotherStruct__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ros2sharedlib__msg__AnotherStruct(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AnotherStruct = {
  "ros2sharedlib::msg",
  "AnotherStruct",
  _AnotherStruct__cdr_serialize,
  _AnotherStruct__cdr_deserialize,
  _AnotherStruct__get_serialized_size,
  _AnotherStruct__max_serialized_size
};

static rosidl_message_type_support_t _AnotherStruct__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AnotherStruct,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2sharedlib, msg, AnotherStruct)() {
  return &_AnotherStruct__type_support;
}

#if defined(__cplusplus)
}
#endif
