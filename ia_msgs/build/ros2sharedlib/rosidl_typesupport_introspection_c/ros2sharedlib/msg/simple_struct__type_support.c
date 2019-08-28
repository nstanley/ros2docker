// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2sharedlib:msg/SimpleStruct.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2sharedlib/msg/simple_struct__rosidl_typesupport_introspection_c.h"
#include "ros2sharedlib/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2sharedlib/msg/simple_struct__struct.h"


// Include directives for member types
// Member `s`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember SimpleStruct__rosidl_typesupport_introspection_c__SimpleStruct_message_member_array[2] = {
  {
    "s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2sharedlib__msg__SimpleStruct, s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "i",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2sharedlib__msg__SimpleStruct, i),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SimpleStruct__rosidl_typesupport_introspection_c__SimpleStruct_message_members = {
  "ros2sharedlib__msg",  // message namespace
  "SimpleStruct",  // message name
  2,  // number of fields
  sizeof(ros2sharedlib__msg__SimpleStruct),
  SimpleStruct__rosidl_typesupport_introspection_c__SimpleStruct_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SimpleStruct__rosidl_typesupport_introspection_c__SimpleStruct_message_type_support_handle = {
  0,
  &SimpleStruct__rosidl_typesupport_introspection_c__SimpleStruct_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2sharedlib
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2sharedlib, msg, SimpleStruct)() {
  if (!SimpleStruct__rosidl_typesupport_introspection_c__SimpleStruct_message_type_support_handle.typesupport_identifier) {
    SimpleStruct__rosidl_typesupport_introspection_c__SimpleStruct_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SimpleStruct__rosidl_typesupport_introspection_c__SimpleStruct_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
