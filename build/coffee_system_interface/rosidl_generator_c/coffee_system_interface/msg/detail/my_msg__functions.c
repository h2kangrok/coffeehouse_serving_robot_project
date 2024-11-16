// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from coffee_system_interface:msg/MyMsg.idl
// generated code does not contain a copyright notice
#include "coffee_system_interface/msg/detail/my_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cook`
#include "rosidl_runtime_c/string_functions.h"

bool
coffee_system_interface__msg__MyMsg__init(coffee_system_interface__msg__MyMsg * msg)
{
  if (!msg) {
    return false;
  }
  // cook
  if (!rosidl_runtime_c__String__init(&msg->cook)) {
    coffee_system_interface__msg__MyMsg__fini(msg);
    return false;
  }
  return true;
}

void
coffee_system_interface__msg__MyMsg__fini(coffee_system_interface__msg__MyMsg * msg)
{
  if (!msg) {
    return;
  }
  // cook
  rosidl_runtime_c__String__fini(&msg->cook);
}

bool
coffee_system_interface__msg__MyMsg__are_equal(const coffee_system_interface__msg__MyMsg * lhs, const coffee_system_interface__msg__MyMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cook
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cook), &(rhs->cook)))
  {
    return false;
  }
  return true;
}

bool
coffee_system_interface__msg__MyMsg__copy(
  const coffee_system_interface__msg__MyMsg * input,
  coffee_system_interface__msg__MyMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // cook
  if (!rosidl_runtime_c__String__copy(
      &(input->cook), &(output->cook)))
  {
    return false;
  }
  return true;
}

coffee_system_interface__msg__MyMsg *
coffee_system_interface__msg__MyMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__msg__MyMsg * msg = (coffee_system_interface__msg__MyMsg *)allocator.allocate(sizeof(coffee_system_interface__msg__MyMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(coffee_system_interface__msg__MyMsg));
  bool success = coffee_system_interface__msg__MyMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
coffee_system_interface__msg__MyMsg__destroy(coffee_system_interface__msg__MyMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    coffee_system_interface__msg__MyMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
coffee_system_interface__msg__MyMsg__Sequence__init(coffee_system_interface__msg__MyMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__msg__MyMsg * data = NULL;

  if (size) {
    data = (coffee_system_interface__msg__MyMsg *)allocator.zero_allocate(size, sizeof(coffee_system_interface__msg__MyMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = coffee_system_interface__msg__MyMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        coffee_system_interface__msg__MyMsg__fini(&data[i - 1]);
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
coffee_system_interface__msg__MyMsg__Sequence__fini(coffee_system_interface__msg__MyMsg__Sequence * array)
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
      coffee_system_interface__msg__MyMsg__fini(&array->data[i]);
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

coffee_system_interface__msg__MyMsg__Sequence *
coffee_system_interface__msg__MyMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__msg__MyMsg__Sequence * array = (coffee_system_interface__msg__MyMsg__Sequence *)allocator.allocate(sizeof(coffee_system_interface__msg__MyMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = coffee_system_interface__msg__MyMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
coffee_system_interface__msg__MyMsg__Sequence__destroy(coffee_system_interface__msg__MyMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    coffee_system_interface__msg__MyMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
coffee_system_interface__msg__MyMsg__Sequence__are_equal(const coffee_system_interface__msg__MyMsg__Sequence * lhs, const coffee_system_interface__msg__MyMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!coffee_system_interface__msg__MyMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
coffee_system_interface__msg__MyMsg__Sequence__copy(
  const coffee_system_interface__msg__MyMsg__Sequence * input,
  coffee_system_interface__msg__MyMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(coffee_system_interface__msg__MyMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    coffee_system_interface__msg__MyMsg * data =
      (coffee_system_interface__msg__MyMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!coffee_system_interface__msg__MyMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          coffee_system_interface__msg__MyMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!coffee_system_interface__msg__MyMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
