// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robopoint_interfaces:srv/Query.idl
// generated code does not contain a copyright notice
#include "robopoint_interfaces/srv/detail/query__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `query`
#include "rosidl_runtime_c/string_functions.h"

bool
robopoint_interfaces__srv__Query_Request__init(robopoint_interfaces__srv__Query_Request * msg)
{
  if (!msg) {
    return false;
  }
  // query
  if (!rosidl_runtime_c__String__init(&msg->query)) {
    robopoint_interfaces__srv__Query_Request__fini(msg);
    return false;
  }
  return true;
}

void
robopoint_interfaces__srv__Query_Request__fini(robopoint_interfaces__srv__Query_Request * msg)
{
  if (!msg) {
    return;
  }
  // query
  rosidl_runtime_c__String__fini(&msg->query);
}

bool
robopoint_interfaces__srv__Query_Request__are_equal(const robopoint_interfaces__srv__Query_Request * lhs, const robopoint_interfaces__srv__Query_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // query
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->query), &(rhs->query)))
  {
    return false;
  }
  return true;
}

bool
robopoint_interfaces__srv__Query_Request__copy(
  const robopoint_interfaces__srv__Query_Request * input,
  robopoint_interfaces__srv__Query_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // query
  if (!rosidl_runtime_c__String__copy(
      &(input->query), &(output->query)))
  {
    return false;
  }
  return true;
}

robopoint_interfaces__srv__Query_Request *
robopoint_interfaces__srv__Query_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robopoint_interfaces__srv__Query_Request * msg = (robopoint_interfaces__srv__Query_Request *)allocator.allocate(sizeof(robopoint_interfaces__srv__Query_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robopoint_interfaces__srv__Query_Request));
  bool success = robopoint_interfaces__srv__Query_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robopoint_interfaces__srv__Query_Request__destroy(robopoint_interfaces__srv__Query_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robopoint_interfaces__srv__Query_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robopoint_interfaces__srv__Query_Request__Sequence__init(robopoint_interfaces__srv__Query_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robopoint_interfaces__srv__Query_Request * data = NULL;

  if (size) {
    data = (robopoint_interfaces__srv__Query_Request *)allocator.zero_allocate(size, sizeof(robopoint_interfaces__srv__Query_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robopoint_interfaces__srv__Query_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robopoint_interfaces__srv__Query_Request__fini(&data[i - 1]);
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
robopoint_interfaces__srv__Query_Request__Sequence__fini(robopoint_interfaces__srv__Query_Request__Sequence * array)
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
      robopoint_interfaces__srv__Query_Request__fini(&array->data[i]);
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

robopoint_interfaces__srv__Query_Request__Sequence *
robopoint_interfaces__srv__Query_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robopoint_interfaces__srv__Query_Request__Sequence * array = (robopoint_interfaces__srv__Query_Request__Sequence *)allocator.allocate(sizeof(robopoint_interfaces__srv__Query_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robopoint_interfaces__srv__Query_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robopoint_interfaces__srv__Query_Request__Sequence__destroy(robopoint_interfaces__srv__Query_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robopoint_interfaces__srv__Query_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robopoint_interfaces__srv__Query_Request__Sequence__are_equal(const robopoint_interfaces__srv__Query_Request__Sequence * lhs, const robopoint_interfaces__srv__Query_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robopoint_interfaces__srv__Query_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robopoint_interfaces__srv__Query_Request__Sequence__copy(
  const robopoint_interfaces__srv__Query_Request__Sequence * input,
  robopoint_interfaces__srv__Query_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robopoint_interfaces__srv__Query_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robopoint_interfaces__srv__Query_Request * data =
      (robopoint_interfaces__srv__Query_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robopoint_interfaces__srv__Query_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robopoint_interfaces__srv__Query_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robopoint_interfaces__srv__Query_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
robopoint_interfaces__srv__Query_Response__init(robopoint_interfaces__srv__Query_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
robopoint_interfaces__srv__Query_Response__fini(robopoint_interfaces__srv__Query_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
robopoint_interfaces__srv__Query_Response__are_equal(const robopoint_interfaces__srv__Query_Response * lhs, const robopoint_interfaces__srv__Query_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
robopoint_interfaces__srv__Query_Response__copy(
  const robopoint_interfaces__srv__Query_Response * input,
  robopoint_interfaces__srv__Query_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

robopoint_interfaces__srv__Query_Response *
robopoint_interfaces__srv__Query_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robopoint_interfaces__srv__Query_Response * msg = (robopoint_interfaces__srv__Query_Response *)allocator.allocate(sizeof(robopoint_interfaces__srv__Query_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robopoint_interfaces__srv__Query_Response));
  bool success = robopoint_interfaces__srv__Query_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robopoint_interfaces__srv__Query_Response__destroy(robopoint_interfaces__srv__Query_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robopoint_interfaces__srv__Query_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robopoint_interfaces__srv__Query_Response__Sequence__init(robopoint_interfaces__srv__Query_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robopoint_interfaces__srv__Query_Response * data = NULL;

  if (size) {
    data = (robopoint_interfaces__srv__Query_Response *)allocator.zero_allocate(size, sizeof(robopoint_interfaces__srv__Query_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robopoint_interfaces__srv__Query_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robopoint_interfaces__srv__Query_Response__fini(&data[i - 1]);
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
robopoint_interfaces__srv__Query_Response__Sequence__fini(robopoint_interfaces__srv__Query_Response__Sequence * array)
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
      robopoint_interfaces__srv__Query_Response__fini(&array->data[i]);
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

robopoint_interfaces__srv__Query_Response__Sequence *
robopoint_interfaces__srv__Query_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robopoint_interfaces__srv__Query_Response__Sequence * array = (robopoint_interfaces__srv__Query_Response__Sequence *)allocator.allocate(sizeof(robopoint_interfaces__srv__Query_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robopoint_interfaces__srv__Query_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robopoint_interfaces__srv__Query_Response__Sequence__destroy(robopoint_interfaces__srv__Query_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robopoint_interfaces__srv__Query_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robopoint_interfaces__srv__Query_Response__Sequence__are_equal(const robopoint_interfaces__srv__Query_Response__Sequence * lhs, const robopoint_interfaces__srv__Query_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robopoint_interfaces__srv__Query_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robopoint_interfaces__srv__Query_Response__Sequence__copy(
  const robopoint_interfaces__srv__Query_Response__Sequence * input,
  robopoint_interfaces__srv__Query_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robopoint_interfaces__srv__Query_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robopoint_interfaces__srv__Query_Response * data =
      (robopoint_interfaces__srv__Query_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robopoint_interfaces__srv__Query_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robopoint_interfaces__srv__Query_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robopoint_interfaces__srv__Query_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "robopoint_interfaces/srv/detail/query__functions.h"

bool
robopoint_interfaces__srv__Query_Event__init(robopoint_interfaces__srv__Query_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    robopoint_interfaces__srv__Query_Event__fini(msg);
    return false;
  }
  // request
  if (!robopoint_interfaces__srv__Query_Request__Sequence__init(&msg->request, 0)) {
    robopoint_interfaces__srv__Query_Event__fini(msg);
    return false;
  }
  // response
  if (!robopoint_interfaces__srv__Query_Response__Sequence__init(&msg->response, 0)) {
    robopoint_interfaces__srv__Query_Event__fini(msg);
    return false;
  }
  return true;
}

void
robopoint_interfaces__srv__Query_Event__fini(robopoint_interfaces__srv__Query_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  robopoint_interfaces__srv__Query_Request__Sequence__fini(&msg->request);
  // response
  robopoint_interfaces__srv__Query_Response__Sequence__fini(&msg->response);
}

bool
robopoint_interfaces__srv__Query_Event__are_equal(const robopoint_interfaces__srv__Query_Event * lhs, const robopoint_interfaces__srv__Query_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!robopoint_interfaces__srv__Query_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!robopoint_interfaces__srv__Query_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
robopoint_interfaces__srv__Query_Event__copy(
  const robopoint_interfaces__srv__Query_Event * input,
  robopoint_interfaces__srv__Query_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!robopoint_interfaces__srv__Query_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!robopoint_interfaces__srv__Query_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

robopoint_interfaces__srv__Query_Event *
robopoint_interfaces__srv__Query_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robopoint_interfaces__srv__Query_Event * msg = (robopoint_interfaces__srv__Query_Event *)allocator.allocate(sizeof(robopoint_interfaces__srv__Query_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robopoint_interfaces__srv__Query_Event));
  bool success = robopoint_interfaces__srv__Query_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robopoint_interfaces__srv__Query_Event__destroy(robopoint_interfaces__srv__Query_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robopoint_interfaces__srv__Query_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robopoint_interfaces__srv__Query_Event__Sequence__init(robopoint_interfaces__srv__Query_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robopoint_interfaces__srv__Query_Event * data = NULL;

  if (size) {
    data = (robopoint_interfaces__srv__Query_Event *)allocator.zero_allocate(size, sizeof(robopoint_interfaces__srv__Query_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robopoint_interfaces__srv__Query_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robopoint_interfaces__srv__Query_Event__fini(&data[i - 1]);
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
robopoint_interfaces__srv__Query_Event__Sequence__fini(robopoint_interfaces__srv__Query_Event__Sequence * array)
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
      robopoint_interfaces__srv__Query_Event__fini(&array->data[i]);
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

robopoint_interfaces__srv__Query_Event__Sequence *
robopoint_interfaces__srv__Query_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robopoint_interfaces__srv__Query_Event__Sequence * array = (robopoint_interfaces__srv__Query_Event__Sequence *)allocator.allocate(sizeof(robopoint_interfaces__srv__Query_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robopoint_interfaces__srv__Query_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robopoint_interfaces__srv__Query_Event__Sequence__destroy(robopoint_interfaces__srv__Query_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robopoint_interfaces__srv__Query_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robopoint_interfaces__srv__Query_Event__Sequence__are_equal(const robopoint_interfaces__srv__Query_Event__Sequence * lhs, const robopoint_interfaces__srv__Query_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robopoint_interfaces__srv__Query_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robopoint_interfaces__srv__Query_Event__Sequence__copy(
  const robopoint_interfaces__srv__Query_Event__Sequence * input,
  robopoint_interfaces__srv__Query_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robopoint_interfaces__srv__Query_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robopoint_interfaces__srv__Query_Event * data =
      (robopoint_interfaces__srv__Query_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robopoint_interfaces__srv__Query_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robopoint_interfaces__srv__Query_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robopoint_interfaces__srv__Query_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
