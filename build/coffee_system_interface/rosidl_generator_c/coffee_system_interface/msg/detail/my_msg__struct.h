// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from coffee_system_interface:msg/MyMsg.idl
// generated code does not contain a copyright notice

#ifndef COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__MY_MSG__STRUCT_H_
#define COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__MY_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cook'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MyMsg in the package coffee_system_interface.
/**
  * msg
 */
typedef struct coffee_system_interface__msg__MyMsg
{
  rosidl_runtime_c__String cook;
} coffee_system_interface__msg__MyMsg;

// Struct for a sequence of coffee_system_interface__msg__MyMsg.
typedef struct coffee_system_interface__msg__MyMsg__Sequence
{
  coffee_system_interface__msg__MyMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} coffee_system_interface__msg__MyMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__MY_MSG__STRUCT_H_
