// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2sharedlib:msg/CompiledStruct.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_generator_c/visibility_control.h"
#include "ros2sharedlib/msg/compiled_struct__struct.h"
#include "ros2sharedlib/msg/compiled_struct__functions.h"

bool ros2sharedlib__msg__simple_struct__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2sharedlib__msg__simple_struct__convert_to_py(void * raw_ros_message);
bool ros2sharedlib__msg__another_struct__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2sharedlib__msg__another_struct__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2sharedlib__msg__compiled_struct__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp(
        "ros2sharedlib.msg._compiled_struct.CompiledStruct",
        full_classname_dest, 49) == 0);
  }
  ros2sharedlib__msg__CompiledStruct * ros_message = _ros_message;
  {  // ss
    PyObject * field = PyObject_GetAttrString(_pymsg, "ss");
    if (!field) {
      return false;
    }
    if (!ros2sharedlib__msg__simple_struct__convert_from_py(field, &ros_message->ss)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // as
    PyObject * field = PyObject_GetAttrString(_pymsg, "as");
    if (!field) {
      return false;
    }
    if (!ros2sharedlib__msg__another_struct__convert_from_py(field, &ros_message->as)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2sharedlib__msg__compiled_struct__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CompiledStruct */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2sharedlib.msg._compiled_struct");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CompiledStruct");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2sharedlib__msg__CompiledStruct * ros_message = (ros2sharedlib__msg__CompiledStruct *)raw_ros_message;
  {  // ss
    PyObject * field = NULL;
    field = ros2sharedlib__msg__simple_struct__convert_to_py(&ros_message->ss);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ss", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // as
    PyObject * field = NULL;
    field = ros2sharedlib__msg__another_struct__convert_to_py(&ros_message->as);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "as", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
