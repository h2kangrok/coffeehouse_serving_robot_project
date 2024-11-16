// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from coffee_system_interface:msg/CallStaff.idl
// generated code does not contain a copyright notice
#include "coffee_system_interface/msg/detail/call_staff__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
coffee_system_interface__msg__CallStaff__init(coffee_system_interface__msg__CallStaff * msg)
{
  if (!msg) {
    return false;
  }
  // table_num
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    coffee_system_interface__msg__CallStaff__fini(msg);
    return false;
  }
  return true;
}

void
coffee_system_interface__msg__CallStaff__fini(coffee_system_interface__msg__CallStaff * msg)
{
  if (!msg) {
    return;
  }
  // table_num
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
coffee_system_interface__msg__CallStaff__are_equal(const coffee_system_interface__msg__CallStaff * lhs, const coffee_system_interface__msg__CallStaff * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // table_num
  if (lhs->table_num != rhs->table_num) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
coffee_system_interface__msg__CallStaff__copy(
  const coffee_system_interface__msg__CallStaff * input,
  coffee_system_interface__msg__CallStaff * output)
{
  if (!input || !output) {
    return false;
  }
  // table_num
  output->table_num = input->table_num;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

coffee_system_interface__msg__CallStaff *
coffee_system_interface__msg__CallStaff__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__msg__CallStaff * msg = (coffee_system_interface__msg__CallStaff *)allocator.allocate(sizeof(coffee_system_interface__msg__CallStaff), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(coffee_system_interface__msg__CallStaff));
  bool success = coffee_system_interface__msg__CallStaff__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
coffee_system_interface__msg__CallStaff__destroy(coffee_system_interface__msg__CallStaff * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    coffee_system_interface__msg__CallStaff__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
coffee_system_interface__msg__CallStaff__Sequence__init(coffee_system_interface__msg__CallStaff__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__msg__CallStaff * data = NULL;

  if (size) {
    data = (coffee_system_interface__msg__CallStaff *)allocator.zero_allocate(size, sizeof(coffee_system_interface__msg__CallStaff), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = coffee_system_interface__msg__CallStaff__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        coffee_system_interface__msg__CallStaff__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
coffee_system_interface__msg__CallStaff__Sequence__fini(coffee_system_interface__msg__CallStaff__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      coffee_system_interface__msg__CallStaff__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

coffee_system_interface__msg__CallStaff__Sequence *
coffee_system_interface__msg__CallStaff__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__msg__CallStaff__Sequence * array = (coffee_system_interface__msg__CallStaff__Sequence *)allocator.allocate(sizeof(coffee_system_interface__msg__CallStaff__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = coffee_system_interface__msg__CallStaff__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
coffee_system_interface__msg__CallStaff__Sequence__destroy(coffee_system_interface__msg__CallStaff__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    coffee_system_interface__msg__CallStaff__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
coffee_system_interface__msg__CallStaff__Sequence__are_equal(const coffee_system_interface__msg__CallStaff__Sequence * lhs, const coffee_system_interface__msg__CallStaff__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!coffee_system_interface__msg__CallStaff__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
coffee_system_interface__msg__CallStaff__Sequence__copy(
  const coffee_system_interface__msg__CallStaff__Sequence * input,
  coffee_system_interface__msg__CallStaff__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(coffee_system_interface__msg__CallStaff);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    coffee_system_interface__msg__CallStaff * data =
      (coffee_system_interface__msg__CallStaff *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!coffee_system_interface__msg__CallStaff__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          coffee_system_interface__msg__CallStaff__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!coffee_system_interface__msg__CallStaff__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
