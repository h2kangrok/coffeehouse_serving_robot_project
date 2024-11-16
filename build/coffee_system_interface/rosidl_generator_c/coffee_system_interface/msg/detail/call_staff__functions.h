// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from coffee_system_interface:msg/CallStaff.idl
// generated code does not contain a copyright notice

#ifndef COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__CALL_STAFF__FUNCTIONS_H_
#define COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__CALL_STAFF__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "coffee_system_interface/msg/rosidl_generator_c__visibility_control.h"

#include "coffee_system_interface/msg/detail/call_staff__struct.h"

/// Initialize msg/CallStaff message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * coffee_system_interface__msg__CallStaff
 * )) before or use
 * coffee_system_interface__msg__CallStaff__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_coffee_system_interface
bool
coffee_system_interface__msg__CallStaff__init(coffee_system_interface__msg__CallStaff * msg);

/// Finalize msg/CallStaff message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_coffee_system_interface
void
coffee_system_interface__msg__CallStaff__fini(coffee_system_interface__msg__CallStaff * msg);

/// Create msg/CallStaff message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * coffee_system_interface__msg__CallStaff__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_coffee_system_interface
coffee_system_interface__msg__CallStaff *
coffee_system_interface__msg__CallStaff__create();

/// Destroy msg/CallStaff message.
/**
 * It calls
 * coffee_system_interface__msg__CallStaff__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_coffee_system_interface
void
coffee_system_interface__msg__CallStaff__destroy(coffee_system_interface__msg__CallStaff * msg);

/// Check for msg/CallStaff message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_coffee_system_interface
bool
coffee_system_interface__msg__CallStaff__are_equal(const coffee_system_interface__msg__CallStaff * lhs, const coffee_system_interface__msg__CallStaff * rhs);

/// Copy a msg/CallStaff message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_coffee_system_interface
bool
coffee_system_interface__msg__CallStaff__copy(
  const coffee_system_interface__msg__CallStaff * input,
  coffee_system_interface__msg__CallStaff * output);

/// Initialize array of msg/CallStaff messages.
/**
 * It allocates the memory for the number of elements and calls
 * coffee_system_interface__msg__CallStaff__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_coffee_system_interface
bool
coffee_system_interface__msg__CallStaff__Sequence__init(coffee_system_interface__msg__CallStaff__Sequence * array, size_t size);

/// Finalize array of msg/CallStaff messages.
/**
 * It calls
 * coffee_system_interface__msg__CallStaff__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_coffee_system_interface
void
coffee_system_interface__msg__CallStaff__Sequence__fini(coffee_system_interface__msg__CallStaff__Sequence * array);

/// Create array of msg/CallStaff messages.
/**
 * It allocates the memory for the array and calls
 * coffee_system_interface__msg__CallStaff__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_coffee_system_interface
coffee_system_interface__msg__CallStaff__Sequence *
coffee_system_interface__msg__CallStaff__Sequence__create(size_t size);

/// Destroy array of msg/CallStaff messages.
/**
 * It calls
 * coffee_system_interface__msg__CallStaff__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_coffee_system_interface
void
coffee_system_interface__msg__CallStaff__Sequence__destroy(coffee_system_interface__msg__CallStaff__Sequence * array);

/// Check for msg/CallStaff message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_coffee_system_interface
bool
coffee_system_interface__msg__CallStaff__Sequence__are_equal(const coffee_system_interface__msg__CallStaff__Sequence * lhs, const coffee_system_interface__msg__CallStaff__Sequence * rhs);

/// Copy an array of msg/CallStaff messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_coffee_system_interface
bool
coffee_system_interface__msg__CallStaff__Sequence__copy(
  const coffee_system_interface__msg__CallStaff__Sequence * input,
  coffee_system_interface__msg__CallStaff__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COFFEE_SYSTEM_INTERFACE__MSG__DETAIL__CALL_STAFF__FUNCTIONS_H_
