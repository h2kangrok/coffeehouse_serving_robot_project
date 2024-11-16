// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from coffee_system_interface:srv/MySrv.idl
// generated code does not contain a copyright notice
#include "coffee_system_interface/srv/detail/my_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `items`
#include "rosidl_runtime_c/string_functions.h"

bool
coffee_system_interface__srv__MySrv_Request__init(coffee_system_interface__srv__MySrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // table_num
  // items
  if (!rosidl_runtime_c__String__Sequence__init(&msg->items, 0)) {
    coffee_system_interface__srv__MySrv_Request__fini(msg);
    return false;
  }
  return true;
}

void
coffee_system_interface__srv__MySrv_Request__fini(coffee_system_interface__srv__MySrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // table_num
  // items
  rosidl_runtime_c__String__Sequence__fini(&msg->items);
}

bool
coffee_system_interface__srv__MySrv_Request__are_equal(const coffee_system_interface__srv__MySrv_Request * lhs, const coffee_system_interface__srv__MySrv_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // table_num
  if (lhs->table_num != rhs->table_num) {
    return false;
  }
  // items
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->items), &(rhs->items)))
  {
    return false;
  }
  return true;
}

bool
coffee_system_interface__srv__MySrv_Request__copy(
  const coffee_system_interface__srv__MySrv_Request * input,
  coffee_system_interface__srv__MySrv_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // table_num
  output->table_num = input->table_num;
  // items
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->items), &(output->items)))
  {
    return false;
  }
  return true;
}

coffee_system_interface__srv__MySrv_Request *
coffee_system_interface__srv__MySrv_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__srv__MySrv_Request * msg = (coffee_system_interface__srv__MySrv_Request *)allocator.allocate(sizeof(coffee_system_interface__srv__MySrv_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(coffee_system_interface__srv__MySrv_Request));
  bool success = coffee_system_interface__srv__MySrv_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
coffee_system_interface__srv__MySrv_Request__destroy(coffee_system_interface__srv__MySrv_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    coffee_system_interface__srv__MySrv_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
coffee_system_interface__srv__MySrv_Request__Sequence__init(coffee_system_interface__srv__MySrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__srv__MySrv_Request * data = NULL;

  if (size) {
    data = (coffee_system_interface__srv__MySrv_Request *)allocator.zero_allocate(size, sizeof(coffee_system_interface__srv__MySrv_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = coffee_system_interface__srv__MySrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        coffee_system_interface__srv__MySrv_Request__fini(&data[i - 1]);
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
coffee_system_interface__srv__MySrv_Request__Sequence__fini(coffee_system_interface__srv__MySrv_Request__Sequence * array)
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
      coffee_system_interface__srv__MySrv_Request__fini(&array->data[i]);
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

coffee_system_interface__srv__MySrv_Request__Sequence *
coffee_system_interface__srv__MySrv_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__srv__MySrv_Request__Sequence * array = (coffee_system_interface__srv__MySrv_Request__Sequence *)allocator.allocate(sizeof(coffee_system_interface__srv__MySrv_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = coffee_system_interface__srv__MySrv_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
coffee_system_interface__srv__MySrv_Request__Sequence__destroy(coffee_system_interface__srv__MySrv_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    coffee_system_interface__srv__MySrv_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
coffee_system_interface__srv__MySrv_Request__Sequence__are_equal(const coffee_system_interface__srv__MySrv_Request__Sequence * lhs, const coffee_system_interface__srv__MySrv_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!coffee_system_interface__srv__MySrv_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
coffee_system_interface__srv__MySrv_Request__Sequence__copy(
  const coffee_system_interface__srv__MySrv_Request__Sequence * input,
  coffee_system_interface__srv__MySrv_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(coffee_system_interface__srv__MySrv_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    coffee_system_interface__srv__MySrv_Request * data =
      (coffee_system_interface__srv__MySrv_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!coffee_system_interface__srv__MySrv_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          coffee_system_interface__srv__MySrv_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!coffee_system_interface__srv__MySrv_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
coffee_system_interface__srv__MySrv_Response__init(coffee_system_interface__srv__MySrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    coffee_system_interface__srv__MySrv_Response__fini(msg);
    return false;
  }
  return true;
}

void
coffee_system_interface__srv__MySrv_Response__fini(coffee_system_interface__srv__MySrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
coffee_system_interface__srv__MySrv_Response__are_equal(const coffee_system_interface__srv__MySrv_Response * lhs, const coffee_system_interface__srv__MySrv_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
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
coffee_system_interface__srv__MySrv_Response__copy(
  const coffee_system_interface__srv__MySrv_Response * input,
  coffee_system_interface__srv__MySrv_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

coffee_system_interface__srv__MySrv_Response *
coffee_system_interface__srv__MySrv_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__srv__MySrv_Response * msg = (coffee_system_interface__srv__MySrv_Response *)allocator.allocate(sizeof(coffee_system_interface__srv__MySrv_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(coffee_system_interface__srv__MySrv_Response));
  bool success = coffee_system_interface__srv__MySrv_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
coffee_system_interface__srv__MySrv_Response__destroy(coffee_system_interface__srv__MySrv_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    coffee_system_interface__srv__MySrv_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
coffee_system_interface__srv__MySrv_Response__Sequence__init(coffee_system_interface__srv__MySrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__srv__MySrv_Response * data = NULL;

  if (size) {
    data = (coffee_system_interface__srv__MySrv_Response *)allocator.zero_allocate(size, sizeof(coffee_system_interface__srv__MySrv_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = coffee_system_interface__srv__MySrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        coffee_system_interface__srv__MySrv_Response__fini(&data[i - 1]);
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
coffee_system_interface__srv__MySrv_Response__Sequence__fini(coffee_system_interface__srv__MySrv_Response__Sequence * array)
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
      coffee_system_interface__srv__MySrv_Response__fini(&array->data[i]);
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

coffee_system_interface__srv__MySrv_Response__Sequence *
coffee_system_interface__srv__MySrv_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__srv__MySrv_Response__Sequence * array = (coffee_system_interface__srv__MySrv_Response__Sequence *)allocator.allocate(sizeof(coffee_system_interface__srv__MySrv_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = coffee_system_interface__srv__MySrv_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
coffee_system_interface__srv__MySrv_Response__Sequence__destroy(coffee_system_interface__srv__MySrv_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    coffee_system_interface__srv__MySrv_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
coffee_system_interface__srv__MySrv_Response__Sequence__are_equal(const coffee_system_interface__srv__MySrv_Response__Sequence * lhs, const coffee_system_interface__srv__MySrv_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!coffee_system_interface__srv__MySrv_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
coffee_system_interface__srv__MySrv_Response__Sequence__copy(
  const coffee_system_interface__srv__MySrv_Response__Sequence * input,
  coffee_system_interface__srv__MySrv_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(coffee_system_interface__srv__MySrv_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    coffee_system_interface__srv__MySrv_Response * data =
      (coffee_system_interface__srv__MySrv_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!coffee_system_interface__srv__MySrv_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          coffee_system_interface__srv__MySrv_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!coffee_system_interface__srv__MySrv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
