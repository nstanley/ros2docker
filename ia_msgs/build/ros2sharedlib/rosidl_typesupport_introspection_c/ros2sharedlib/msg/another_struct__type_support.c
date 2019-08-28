// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2sharedlib:msg/AnotherStruct.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2sharedlib/msg/another_struct__rosidl_typesupport_introspection_c.h"
#include "ros2sharedlib/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2sharedlib/msg/another_struct__struct.h"


// Include directives for member types
// Member `str`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember AnotherStruct__rosidl_typesupport_introspection_c__AnotherStruct_message_member_array[2] = {
  {
    "str",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2sharedlib__msg__AnotherStruct, str),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2sharedlib__msg__AnotherStruct, num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AnotherStruct__rosidl_typesupport_introspection_c__AnotherStruct_message_members = {
  "ros2sharedlib__msg",  // message namespace
  "AnotherStruct",  // message name
  2,  // number of fields
  sizeof(ros2sharedlib__msg__AnotherStruct),
  AnotherStruct__rosidl_typesupport_introspection_c__AnotherStruct_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AnotherStruct__rosidl_typesupport_introspection_c__AnotherStruct_message_type_support_handle = {
  0,
  &AnotherStruct__rosidl_typesupport_introspection_c__AnotherStruct_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2sharedlib
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2sharedlib, msg, AnotherStruct)() {
  if (!AnotherStruct__rosidl_typesupport_introspection_c__AnotherStruct_message_type_support_handle.typesupport_identifier) {
    AnotherStruct__rosidl_typesupport_introspection_c__AnotherStruct_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AnotherStruct__rosidl_typesupport_introspection_c__AnotherStruct_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
