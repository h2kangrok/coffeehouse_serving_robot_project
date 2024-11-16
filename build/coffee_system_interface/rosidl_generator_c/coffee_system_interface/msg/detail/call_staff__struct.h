// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from coffee_system_interface:msg/CallStaff.idl
// generated code does not contain a copyright notice

#ifndef COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__CALL_STAFF__STRUCT_H_
#define COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__CALL_STAFF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CallStaff in the package coffee_system_interface.
typedef struct coffee_system_interface__msg__CallStaff
{
  int32_t table_num;
  rosidl_runtime_c__String message;
} coffee_system_interface__msg__CallStaff;

// Struct for a sequence of coffee_system_interface__msg__CallStaff.
typedef struct coffee_system_interface__msg__CallStaff__Sequence
{
  coffee_system_interface__msg__CallStaff * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} coffee_system_interface__msg__CallStaff__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__CALL_STAFF__STRUCT_H_
