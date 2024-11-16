// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from coffee_system_interface:action/MyAction.idl
// generated code does not contain a copyright notice
#include "coffee_system_interface/action/detail/my_action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
coffee_system_interface__action__MyAction_Goal__init(coffee_system_interface__action__MyAction_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // table_num
  // wait_time
  return true;
}

void
coffee_system_interface__action__MyAction_Goal__fini(coffee_system_interface__action__MyAction_Goal * msg)
{
  if (!msg) {
    return;
  }
  // table_num
  // wait_time
}

bool
coffee_system_interface__action__MyAction_Goal__are_equal(const coffee_system_interface__action__MyAction_Goal * lhs, const coffee_system_interface__action__MyAction_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // table_num
  if (lhs->table_num != rhs->table_num) {
    return false;
  }
  // wait_time
  if (lhs->wait_time != rhs->wait_time) {
    return false;
  }
  return true;
}

bool
coffee_system_interface__action__MyAction_Goal__copy(
  const coffee_system_interface__action__MyAction_Goal * input,
  coffee_system_interface__action__MyAction_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // table_num
  output->table_num = input->table_num;
  // wait_time
  output->wait_time = input->wait_time;
  return true;
}

coffee_system_interface__action__MyAction_Goal *
coffee_system_interface__action__MyAction_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_Goal * msg = (coffee_system_interface__action__MyAction_Goal *)allocator.allocate(sizeof(coffee_system_interface__action__MyAction_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(coffee_system_interface__action__MyAction_Goal));
  bool success = coffee_system_interface__action__MyAction_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
coffee_system_interface__action__MyAction_Goal__destroy(coffee_system_interface__action__MyAction_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    coffee_system_interface__action__MyAction_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
coffee_system_interface__action__MyAction_Goal__Sequence__init(coffee_system_interface__action__MyAction_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_Goal * data = NULL;

  if (size) {
    data = (coffee_system_interface__action__MyAction_Goal *)allocator.zero_allocate(size, sizeof(coffee_system_interface__action__MyAction_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = coffee_system_interface__action__MyAction_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        coffee_system_interface__action__MyAction_Goal__fini(&data[i - 1]);
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
coffee_system_interface__action__MyAction_Goal__Sequence__fini(coffee_system_interface__action__MyAction_Goal__Sequence * array)
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
      coffee_system_interface__action__MyAction_Goal__fini(&array->data[i]);
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

coffee_system_interface__action__MyAction_Goal__Sequence *
coffee_system_interface__action__MyAction_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_Goal__Sequence * array = (coffee_system_interface__action__MyAction_Goal__Sequence *)allocator.allocate(sizeof(coffee_system_interface__action__MyAction_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = coffee_system_interface__action__MyAction_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
coffee_system_interface__action__MyAction_Goal__Sequence__destroy(coffee_system_interface__action__MyAction_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    coffee_system_interface__action__MyAction_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
coffee_system_interface__action__MyAction_Goal__Sequence__are_equal(const coffee_system_interface__action__MyAction_Goal__Sequence * lhs, const coffee_system_interface__action__MyAction_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!coffee_system_interface__action__MyAction_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
coffee_system_interface__action__MyAction_Goal__Sequence__copy(
  const coffee_system_interface__action__MyAction_Goal__Sequence * input,
  coffee_system_interface__action__MyAction_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(coffee_system_interface__action__MyAction_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    coffee_system_interface__action__MyAction_Goal * data =
      (coffee_system_interface__action__MyAction_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!coffee_system_interface__action__MyAction_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          coffee_system_interface__action__MyAction_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!coffee_system_interface__action__MyAction_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// Member `final_location`
#include "rosidl_runtime_c/string_functions.h"

bool
coffee_system_interface__action__MyAction_Result__init(coffee_system_interface__action__MyAction_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    coffee_system_interface__action__MyAction_Result__fini(msg);
    return false;
  }
  // final_location
  if (!rosidl_runtime_c__String__init(&msg->final_location)) {
    coffee_system_interface__action__MyAction_Result__fini(msg);
    return false;
  }
  // total_time
  return true;
}

void
coffee_system_interface__action__MyAction_Result__fini(coffee_system_interface__action__MyAction_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // final_location
  rosidl_runtime_c__String__fini(&msg->final_location);
  // total_time
}

bool
coffee_system_interface__action__MyAction_Result__are_equal(const coffee_system_interface__action__MyAction_Result * lhs, const coffee_system_interface__action__MyAction_Result * rhs)
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
  // final_location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->final_location), &(rhs->final_location)))
  {
    return false;
  }
  // total_time
  if (lhs->total_time != rhs->total_time) {
    return false;
  }
  return true;
}

bool
coffee_system_interface__action__MyAction_Result__copy(
  const coffee_system_interface__action__MyAction_Result * input,
  coffee_system_interface__action__MyAction_Result * output)
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
  // final_location
  if (!rosidl_runtime_c__String__copy(
      &(input->final_location), &(output->final_location)))
  {
    return false;
  }
  // total_time
  output->total_time = input->total_time;
  return true;
}

coffee_system_interface__action__MyAction_Result *
coffee_system_interface__action__MyAction_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_Result * msg = (coffee_system_interface__action__MyAction_Result *)allocator.allocate(sizeof(coffee_system_interface__action__MyAction_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(coffee_system_interface__action__MyAction_Result));
  bool success = coffee_system_interface__action__MyAction_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
coffee_system_interface__action__MyAction_Result__destroy(coffee_system_interface__action__MyAction_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    coffee_system_interface__action__MyAction_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
coffee_system_interface__action__MyAction_Result__Sequence__init(coffee_system_interface__action__MyAction_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_Result * data = NULL;

  if (size) {
    data = (coffee_system_interface__action__MyAction_Result *)allocator.zero_allocate(size, sizeof(coffee_system_interface__action__MyAction_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = coffee_system_interface__action__MyAction_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        coffee_system_interface__action__MyAction_Result__fini(&data[i - 1]);
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
coffee_system_interface__action__MyAction_Result__Sequence__fini(coffee_system_interface__action__MyAction_Result__Sequence * array)
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
      coffee_system_interface__action__MyAction_Result__fini(&array->data[i]);
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

coffee_system_interface__action__MyAction_Result__Sequence *
coffee_system_interface__action__MyAction_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_Result__Sequence * array = (coffee_system_interface__action__MyAction_Result__Sequence *)allocator.allocate(sizeof(coffee_system_interface__action__MyAction_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = coffee_system_interface__action__MyAction_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
coffee_system_interface__action__MyAction_Result__Sequence__destroy(coffee_system_interface__action__MyAction_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    coffee_system_interface__action__MyAction_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
coffee_system_interface__action__MyAction_Result__Sequence__are_equal(const coffee_system_interface__action__MyAction_Result__Sequence * lhs, const coffee_system_interface__action__MyAction_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!coffee_system_interface__action__MyAction_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
coffee_system_interface__action__MyAction_Result__Sequence__copy(
  const coffee_system_interface__action__MyAction_Result__Sequence * input,
  coffee_system_interface__action__MyAction_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(coffee_system_interface__action__MyAction_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    coffee_system_interface__action__MyAction_Result * data =
      (coffee_system_interface__action__MyAction_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!coffee_system_interface__action__MyAction_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          coffee_system_interface__action__MyAction_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!coffee_system_interface__action__MyAction_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_state`
// Member `current_location`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
coffee_system_interface__action__MyAction_Feedback__init(coffee_system_interface__action__MyAction_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_state
  if (!rosidl_runtime_c__String__init(&msg->current_state)) {
    coffee_system_interface__action__MyAction_Feedback__fini(msg);
    return false;
  }
  // time_elapsed
  // current_location
  if (!rosidl_runtime_c__String__init(&msg->current_location)) {
    coffee_system_interface__action__MyAction_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
coffee_system_interface__action__MyAction_Feedback__fini(coffee_system_interface__action__MyAction_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_state
  rosidl_runtime_c__String__fini(&msg->current_state);
  // time_elapsed
  // current_location
  rosidl_runtime_c__String__fini(&msg->current_location);
}

bool
coffee_system_interface__action__MyAction_Feedback__are_equal(const coffee_system_interface__action__MyAction_Feedback * lhs, const coffee_system_interface__action__MyAction_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_state), &(rhs->current_state)))
  {
    return false;
  }
  // time_elapsed
  if (lhs->time_elapsed != rhs->time_elapsed) {
    return false;
  }
  // current_location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_location), &(rhs->current_location)))
  {
    return false;
  }
  return true;
}

bool
coffee_system_interface__action__MyAction_Feedback__copy(
  const coffee_system_interface__action__MyAction_Feedback * input,
  coffee_system_interface__action__MyAction_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_state
  if (!rosidl_runtime_c__String__copy(
      &(input->current_state), &(output->current_state)))
  {
    return false;
  }
  // time_elapsed
  output->time_elapsed = input->time_elapsed;
  // current_location
  if (!rosidl_runtime_c__String__copy(
      &(input->current_location), &(output->current_location)))
  {
    return false;
  }
  return true;
}

coffee_system_interface__action__MyAction_Feedback *
coffee_system_interface__action__MyAction_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_Feedback * msg = (coffee_system_interface__action__MyAction_Feedback *)allocator.allocate(sizeof(coffee_system_interface__action__MyAction_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(coffee_system_interface__action__MyAction_Feedback));
  bool success = coffee_system_interface__action__MyAction_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
coffee_system_interface__action__MyAction_Feedback__destroy(coffee_system_interface__action__MyAction_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    coffee_system_interface__action__MyAction_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
coffee_system_interface__action__MyAction_Feedback__Sequence__init(coffee_system_interface__action__MyAction_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_Feedback * data = NULL;

  if (size) {
    data = (coffee_system_interface__action__MyAction_Feedback *)allocator.zero_allocate(size, sizeof(coffee_system_interface__action__MyAction_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = coffee_system_interface__action__MyAction_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        coffee_system_interface__action__MyAction_Feedback__fini(&data[i - 1]);
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
coffee_system_interface__action__MyAction_Feedback__Sequence__fini(coffee_system_interface__action__MyAction_Feedback__Sequence * array)
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
      coffee_system_interface__action__MyAction_Feedback__fini(&array->data[i]);
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

coffee_system_interface__action__MyAction_Feedback__Sequence *
coffee_system_interface__action__MyAction_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_Feedback__Sequence * array = (coffee_system_interface__action__MyAction_Feedback__Sequence *)allocator.allocate(sizeof(coffee_system_interface__action__MyAction_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = coffee_system_interface__action__MyAction_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
coffee_system_interface__action__MyAction_Feedback__Sequence__destroy(coffee_system_interface__action__MyAction_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    coffee_system_interface__action__MyAction_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
coffee_system_interface__action__MyAction_Feedback__Sequence__are_equal(const coffee_system_interface__action__MyAction_Feedback__Sequence * lhs, const coffee_system_interface__action__MyAction_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!coffee_system_interface__action__MyAction_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
coffee_system_interface__action__MyAction_Feedback__Sequence__copy(
  const coffee_system_interface__action__MyAction_Feedback__Sequence * input,
  coffee_system_interface__action__MyAction_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(coffee_system_interface__action__MyAction_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    coffee_system_interface__action__MyAction_Feedback * data =
      (coffee_system_interface__action__MyAction_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!coffee_system_interface__action__MyAction_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          coffee_system_interface__action__MyAction_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!coffee_system_interface__action__MyAction_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "coffee_system_interface/action/detail/my_action__functions.h"

bool
coffee_system_interface__action__MyAction_SendGoal_Request__init(coffee_system_interface__action__MyAction_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    coffee_system_interface__action__MyAction_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!coffee_system_interface__action__MyAction_Goal__init(&msg->goal)) {
    coffee_system_interface__action__MyAction_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
coffee_system_interface__action__MyAction_SendGoal_Request__fini(coffee_system_interface__action__MyAction_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  coffee_system_interface__action__MyAction_Goal__fini(&msg->goal);
}

bool
coffee_system_interface__action__MyAction_SendGoal_Request__are_equal(const coffee_system_interface__action__MyAction_SendGoal_Request * lhs, const coffee_system_interface__action__MyAction_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!coffee_system_interface__action__MyAction_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
coffee_system_interface__action__MyAction_SendGoal_Request__copy(
  const coffee_system_interface__action__MyAction_SendGoal_Request * input,
  coffee_system_interface__action__MyAction_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!coffee_system_interface__action__MyAction_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

coffee_system_interface__action__MyAction_SendGoal_Request *
coffee_system_interface__action__MyAction_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_SendGoal_Request * msg = (coffee_system_interface__action__MyAction_SendGoal_Request *)allocator.allocate(sizeof(coffee_system_interface__action__MyAction_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(coffee_system_interface__action__MyAction_SendGoal_Request));
  bool success = coffee_system_interface__action__MyAction_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
coffee_system_interface__action__MyAction_SendGoal_Request__destroy(coffee_system_interface__action__MyAction_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    coffee_system_interface__action__MyAction_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
coffee_system_interface__action__MyAction_SendGoal_Request__Sequence__init(coffee_system_interface__action__MyAction_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_SendGoal_Request * data = NULL;

  if (size) {
    data = (coffee_system_interface__action__MyAction_SendGoal_Request *)allocator.zero_allocate(size, sizeof(coffee_system_interface__action__MyAction_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = coffee_system_interface__action__MyAction_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        coffee_system_interface__action__MyAction_SendGoal_Request__fini(&data[i - 1]);
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
coffee_system_interface__action__MyAction_SendGoal_Request__Sequence__fini(coffee_system_interface__action__MyAction_SendGoal_Request__Sequence * array)
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
      coffee_system_interface__action__MyAction_SendGoal_Request__fini(&array->data[i]);
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

coffee_system_interface__action__MyAction_SendGoal_Request__Sequence *
coffee_system_interface__action__MyAction_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_SendGoal_Request__Sequence * array = (coffee_system_interface__action__MyAction_SendGoal_Request__Sequence *)allocator.allocate(sizeof(coffee_system_interface__action__MyAction_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = coffee_system_interface__action__MyAction_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
coffee_system_interface__action__MyAction_SendGoal_Request__Sequence__destroy(coffee_system_interface__action__MyAction_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    coffee_system_interface__action__MyAction_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
coffee_system_interface__action__MyAction_SendGoal_Request__Sequence__are_equal(const coffee_system_interface__action__MyAction_SendGoal_Request__Sequence * lhs, const coffee_system_interface__action__MyAction_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!coffee_system_interface__action__MyAction_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
coffee_system_interface__action__MyAction_SendGoal_Request__Sequence__copy(
  const coffee_system_interface__action__MyAction_SendGoal_Request__Sequence * input,
  coffee_system_interface__action__MyAction_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(coffee_system_interface__action__MyAction_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    coffee_system_interface__action__MyAction_SendGoal_Request * data =
      (coffee_system_interface__action__MyAction_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!coffee_system_interface__action__MyAction_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          coffee_system_interface__action__MyAction_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!coffee_system_interface__action__MyAction_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
coffee_system_interface__action__MyAction_SendGoal_Response__init(coffee_system_interface__action__MyAction_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    coffee_system_interface__action__MyAction_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
coffee_system_interface__action__MyAction_SendGoal_Response__fini(coffee_system_interface__action__MyAction_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
coffee_system_interface__action__MyAction_SendGoal_Response__are_equal(const coffee_system_interface__action__MyAction_SendGoal_Response * lhs, const coffee_system_interface__action__MyAction_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
coffee_system_interface__action__MyAction_SendGoal_Response__copy(
  const coffee_system_interface__action__MyAction_SendGoal_Response * input,
  coffee_system_interface__action__MyAction_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

coffee_system_interface__action__MyAction_SendGoal_Response *
coffee_system_interface__action__MyAction_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_SendGoal_Response * msg = (coffee_system_interface__action__MyAction_SendGoal_Response *)allocator.allocate(sizeof(coffee_system_interface__action__MyAction_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(coffee_system_interface__action__MyAction_SendGoal_Response));
  bool success = coffee_system_interface__action__MyAction_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
coffee_system_interface__action__MyAction_SendGoal_Response__destroy(coffee_system_interface__action__MyAction_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    coffee_system_interface__action__MyAction_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
coffee_system_interface__action__MyAction_SendGoal_Response__Sequence__init(coffee_system_interface__action__MyAction_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_SendGoal_Response * data = NULL;

  if (size) {
    data = (coffee_system_interface__action__MyAction_SendGoal_Response *)allocator.zero_allocate(size, sizeof(coffee_system_interface__action__MyAction_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = coffee_system_interface__action__MyAction_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        coffee_system_interface__action__MyAction_SendGoal_Response__fini(&data[i - 1]);
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
coffee_system_interface__action__MyAction_SendGoal_Response__Sequence__fini(coffee_system_interface__action__MyAction_SendGoal_Response__Sequence * array)
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
      coffee_system_interface__action__MyAction_SendGoal_Response__fini(&array->data[i]);
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

coffee_system_interface__action__MyAction_SendGoal_Response__Sequence *
coffee_system_interface__action__MyAction_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_SendGoal_Response__Sequence * array = (coffee_system_interface__action__MyAction_SendGoal_Response__Sequence *)allocator.allocate(sizeof(coffee_system_interface__action__MyAction_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = coffee_system_interface__action__MyAction_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
coffee_system_interface__action__MyAction_SendGoal_Response__Sequence__destroy(coffee_system_interface__action__MyAction_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    coffee_system_interface__action__MyAction_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
coffee_system_interface__action__MyAction_SendGoal_Response__Sequence__are_equal(const coffee_system_interface__action__MyAction_SendGoal_Response__Sequence * lhs, const coffee_system_interface__action__MyAction_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!coffee_system_interface__action__MyAction_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
coffee_system_interface__action__MyAction_SendGoal_Response__Sequence__copy(
  const coffee_system_interface__action__MyAction_SendGoal_Response__Sequence * input,
  coffee_system_interface__action__MyAction_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(coffee_system_interface__action__MyAction_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    coffee_system_interface__action__MyAction_SendGoal_Response * data =
      (coffee_system_interface__action__MyAction_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!coffee_system_interface__action__MyAction_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          coffee_system_interface__action__MyAction_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!coffee_system_interface__action__MyAction_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
coffee_system_interface__action__MyAction_GetResult_Request__init(coffee_system_interface__action__MyAction_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    coffee_system_interface__action__MyAction_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
coffee_system_interface__action__MyAction_GetResult_Request__fini(coffee_system_interface__action__MyAction_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
coffee_system_interface__action__MyAction_GetResult_Request__are_equal(const coffee_system_interface__action__MyAction_GetResult_Request * lhs, const coffee_system_interface__action__MyAction_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
coffee_system_interface__action__MyAction_GetResult_Request__copy(
  const coffee_system_interface__action__MyAction_GetResult_Request * input,
  coffee_system_interface__action__MyAction_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

coffee_system_interface__action__MyAction_GetResult_Request *
coffee_system_interface__action__MyAction_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_GetResult_Request * msg = (coffee_system_interface__action__MyAction_GetResult_Request *)allocator.allocate(sizeof(coffee_system_interface__action__MyAction_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(coffee_system_interface__action__MyAction_GetResult_Request));
  bool success = coffee_system_interface__action__MyAction_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
coffee_system_interface__action__MyAction_GetResult_Request__destroy(coffee_system_interface__action__MyAction_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    coffee_system_interface__action__MyAction_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
coffee_system_interface__action__MyAction_GetResult_Request__Sequence__init(coffee_system_interface__action__MyAction_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_GetResult_Request * data = NULL;

  if (size) {
    data = (coffee_system_interface__action__MyAction_GetResult_Request *)allocator.zero_allocate(size, sizeof(coffee_system_interface__action__MyAction_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = coffee_system_interface__action__MyAction_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        coffee_system_interface__action__MyAction_GetResult_Request__fini(&data[i - 1]);
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
coffee_system_interface__action__MyAction_GetResult_Request__Sequence__fini(coffee_system_interface__action__MyAction_GetResult_Request__Sequence * array)
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
      coffee_system_interface__action__MyAction_GetResult_Request__fini(&array->data[i]);
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

coffee_system_interface__action__MyAction_GetResult_Request__Sequence *
coffee_system_interface__action__MyAction_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_GetResult_Request__Sequence * array = (coffee_system_interface__action__MyAction_GetResult_Request__Sequence *)allocator.allocate(sizeof(coffee_system_interface__action__MyAction_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = coffee_system_interface__action__MyAction_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
coffee_system_interface__action__MyAction_GetResult_Request__Sequence__destroy(coffee_system_interface__action__MyAction_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    coffee_system_interface__action__MyAction_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
coffee_system_interface__action__MyAction_GetResult_Request__Sequence__are_equal(const coffee_system_interface__action__MyAction_GetResult_Request__Sequence * lhs, const coffee_system_interface__action__MyAction_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!coffee_system_interface__action__MyAction_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
coffee_system_interface__action__MyAction_GetResult_Request__Sequence__copy(
  const coffee_system_interface__action__MyAction_GetResult_Request__Sequence * input,
  coffee_system_interface__action__MyAction_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(coffee_system_interface__action__MyAction_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    coffee_system_interface__action__MyAction_GetResult_Request * data =
      (coffee_system_interface__action__MyAction_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!coffee_system_interface__action__MyAction_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          coffee_system_interface__action__MyAction_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!coffee_system_interface__action__MyAction_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "coffee_system_interface/action/detail/my_action__functions.h"

bool
coffee_system_interface__action__MyAction_GetResult_Response__init(coffee_system_interface__action__MyAction_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!coffee_system_interface__action__MyAction_Result__init(&msg->result)) {
    coffee_system_interface__action__MyAction_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
coffee_system_interface__action__MyAction_GetResult_Response__fini(coffee_system_interface__action__MyAction_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  coffee_system_interface__action__MyAction_Result__fini(&msg->result);
}

bool
coffee_system_interface__action__MyAction_GetResult_Response__are_equal(const coffee_system_interface__action__MyAction_GetResult_Response * lhs, const coffee_system_interface__action__MyAction_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!coffee_system_interface__action__MyAction_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
coffee_system_interface__action__MyAction_GetResult_Response__copy(
  const coffee_system_interface__action__MyAction_GetResult_Response * input,
  coffee_system_interface__action__MyAction_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!coffee_system_interface__action__MyAction_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

coffee_system_interface__action__MyAction_GetResult_Response *
coffee_system_interface__action__MyAction_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_GetResult_Response * msg = (coffee_system_interface__action__MyAction_GetResult_Response *)allocator.allocate(sizeof(coffee_system_interface__action__MyAction_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(coffee_system_interface__action__MyAction_GetResult_Response));
  bool success = coffee_system_interface__action__MyAction_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
coffee_system_interface__action__MyAction_GetResult_Response__destroy(coffee_system_interface__action__MyAction_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    coffee_system_interface__action__MyAction_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
coffee_system_interface__action__MyAction_GetResult_Response__Sequence__init(coffee_system_interface__action__MyAction_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_GetResult_Response * data = NULL;

  if (size) {
    data = (coffee_system_interface__action__MyAction_GetResult_Response *)allocator.zero_allocate(size, sizeof(coffee_system_interface__action__MyAction_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = coffee_system_interface__action__MyAction_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        coffee_system_interface__action__MyAction_GetResult_Response__fini(&data[i - 1]);
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
coffee_system_interface__action__MyAction_GetResult_Response__Sequence__fini(coffee_system_interface__action__MyAction_GetResult_Response__Sequence * array)
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
      coffee_system_interface__action__MyAction_GetResult_Response__fini(&array->data[i]);
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

coffee_system_interface__action__MyAction_GetResult_Response__Sequence *
coffee_system_interface__action__MyAction_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_GetResult_Response__Sequence * array = (coffee_system_interface__action__MyAction_GetResult_Response__Sequence *)allocator.allocate(sizeof(coffee_system_interface__action__MyAction_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = coffee_system_interface__action__MyAction_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
coffee_system_interface__action__MyAction_GetResult_Response__Sequence__destroy(coffee_system_interface__action__MyAction_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    coffee_system_interface__action__MyAction_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
coffee_system_interface__action__MyAction_GetResult_Response__Sequence__are_equal(const coffee_system_interface__action__MyAction_GetResult_Response__Sequence * lhs, const coffee_system_interface__action__MyAction_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!coffee_system_interface__action__MyAction_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
coffee_system_interface__action__MyAction_GetResult_Response__Sequence__copy(
  const coffee_system_interface__action__MyAction_GetResult_Response__Sequence * input,
  coffee_system_interface__action__MyAction_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(coffee_system_interface__action__MyAction_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    coffee_system_interface__action__MyAction_GetResult_Response * data =
      (coffee_system_interface__action__MyAction_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!coffee_system_interface__action__MyAction_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          coffee_system_interface__action__MyAction_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!coffee_system_interface__action__MyAction_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "coffee_system_interface/action/detail/my_action__functions.h"

bool
coffee_system_interface__action__MyAction_FeedbackMessage__init(coffee_system_interface__action__MyAction_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    coffee_system_interface__action__MyAction_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!coffee_system_interface__action__MyAction_Feedback__init(&msg->feedback)) {
    coffee_system_interface__action__MyAction_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
coffee_system_interface__action__MyAction_FeedbackMessage__fini(coffee_system_interface__action__MyAction_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  coffee_system_interface__action__MyAction_Feedback__fini(&msg->feedback);
}

bool
coffee_system_interface__action__MyAction_FeedbackMessage__are_equal(const coffee_system_interface__action__MyAction_FeedbackMessage * lhs, const coffee_system_interface__action__MyAction_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!coffee_system_interface__action__MyAction_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
coffee_system_interface__action__MyAction_FeedbackMessage__copy(
  const coffee_system_interface__action__MyAction_FeedbackMessage * input,
  coffee_system_interface__action__MyAction_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!coffee_system_interface__action__MyAction_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

coffee_system_interface__action__MyAction_FeedbackMessage *
coffee_system_interface__action__MyAction_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_FeedbackMessage * msg = (coffee_system_interface__action__MyAction_FeedbackMessage *)allocator.allocate(sizeof(coffee_system_interface__action__MyAction_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(coffee_system_interface__action__MyAction_FeedbackMessage));
  bool success = coffee_system_interface__action__MyAction_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
coffee_system_interface__action__MyAction_FeedbackMessage__destroy(coffee_system_interface__action__MyAction_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    coffee_system_interface__action__MyAction_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
coffee_system_interface__action__MyAction_FeedbackMessage__Sequence__init(coffee_system_interface__action__MyAction_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_FeedbackMessage * data = NULL;

  if (size) {
    data = (coffee_system_interface__action__MyAction_FeedbackMessage *)allocator.zero_allocate(size, sizeof(coffee_system_interface__action__MyAction_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = coffee_system_interface__action__MyAction_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        coffee_system_interface__action__MyAction_FeedbackMessage__fini(&data[i - 1]);
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
coffee_system_interface__action__MyAction_FeedbackMessage__Sequence__fini(coffee_system_interface__action__MyAction_FeedbackMessage__Sequence * array)
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
      coffee_system_interface__action__MyAction_FeedbackMessage__fini(&array->data[i]);
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

coffee_system_interface__action__MyAction_FeedbackMessage__Sequence *
coffee_system_interface__action__MyAction_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coffee_system_interface__action__MyAction_FeedbackMessage__Sequence * array = (coffee_system_interface__action__MyAction_FeedbackMessage__Sequence *)allocator.allocate(sizeof(coffee_system_interface__action__MyAction_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = coffee_system_interface__action__MyAction_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
coffee_system_interface__action__MyAction_FeedbackMessage__Sequence__destroy(coffee_system_interface__action__MyAction_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    coffee_system_interface__action__MyAction_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
coffee_system_interface__action__MyAction_FeedbackMessage__Sequence__are_equal(const coffee_system_interface__action__MyAction_FeedbackMessage__Sequence * lhs, const coffee_system_interface__action__MyAction_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!coffee_system_interface__action__MyAction_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
coffee_system_interface__action__MyAction_FeedbackMessage__Sequence__copy(
  const coffee_system_interface__action__MyAction_FeedbackMessage__Sequence * input,
  coffee_system_interface__action__MyAction_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(coffee_system_interface__action__MyAction_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    coffee_system_interface__action__MyAction_FeedbackMessage * data =
      (coffee_system_interface__action__MyAction_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!coffee_system_interface__action__MyAction_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          coffee_system_interface__action__MyAction_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!coffee_system_interface__action__MyAction_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
