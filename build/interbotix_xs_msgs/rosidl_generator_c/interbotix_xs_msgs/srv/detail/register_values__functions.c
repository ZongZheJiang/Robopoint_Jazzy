// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interbotix_xs_msgs:srv/RegisterValues.idl
// generated code does not contain a copyright notice
#include "interbotix_xs_msgs/srv/detail/register_values__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `cmd_type`
// Member `name`
// Member `reg`
#include "rosidl_runtime_c/string_functions.h"

bool
interbotix_xs_msgs__srv__RegisterValues_Request__init(interbotix_xs_msgs__srv__RegisterValues_Request * msg)
{
  if (!msg) {
    return false;
  }
  // cmd_type
  if (!rosidl_runtime_c__String__init(&msg->cmd_type)) {
    interbotix_xs_msgs__srv__RegisterValues_Request__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    interbotix_xs_msgs__srv__RegisterValues_Request__fini(msg);
    return false;
  }
  // reg
  if (!rosidl_runtime_c__String__init(&msg->reg)) {
    interbotix_xs_msgs__srv__RegisterValues_Request__fini(msg);
    return false;
  }
  // value
  return true;
}

void
interbotix_xs_msgs__srv__RegisterValues_Request__fini(interbotix_xs_msgs__srv__RegisterValues_Request * msg)
{
  if (!msg) {
    return;
  }
  // cmd_type
  rosidl_runtime_c__String__fini(&msg->cmd_type);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // reg
  rosidl_runtime_c__String__fini(&msg->reg);
  // value
}

bool
interbotix_xs_msgs__srv__RegisterValues_Request__are_equal(const interbotix_xs_msgs__srv__RegisterValues_Request * lhs, const interbotix_xs_msgs__srv__RegisterValues_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cmd_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cmd_type), &(rhs->cmd_type)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // reg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reg), &(rhs->reg)))
  {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
interbotix_xs_msgs__srv__RegisterValues_Request__copy(
  const interbotix_xs_msgs__srv__RegisterValues_Request * input,
  interbotix_xs_msgs__srv__RegisterValues_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // cmd_type
  if (!rosidl_runtime_c__String__copy(
      &(input->cmd_type), &(output->cmd_type)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // reg
  if (!rosidl_runtime_c__String__copy(
      &(input->reg), &(output->reg)))
  {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

interbotix_xs_msgs__srv__RegisterValues_Request *
interbotix_xs_msgs__srv__RegisterValues_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_xs_msgs__srv__RegisterValues_Request * msg = (interbotix_xs_msgs__srv__RegisterValues_Request *)allocator.allocate(sizeof(interbotix_xs_msgs__srv__RegisterValues_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_xs_msgs__srv__RegisterValues_Request));
  bool success = interbotix_xs_msgs__srv__RegisterValues_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interbotix_xs_msgs__srv__RegisterValues_Request__destroy(interbotix_xs_msgs__srv__RegisterValues_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interbotix_xs_msgs__srv__RegisterValues_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interbotix_xs_msgs__srv__RegisterValues_Request__Sequence__init(interbotix_xs_msgs__srv__RegisterValues_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_xs_msgs__srv__RegisterValues_Request * data = NULL;

  if (size) {
    data = (interbotix_xs_msgs__srv__RegisterValues_Request *)allocator.zero_allocate(size, sizeof(interbotix_xs_msgs__srv__RegisterValues_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_xs_msgs__srv__RegisterValues_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_xs_msgs__srv__RegisterValues_Request__fini(&data[i - 1]);
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
interbotix_xs_msgs__srv__RegisterValues_Request__Sequence__fini(interbotix_xs_msgs__srv__RegisterValues_Request__Sequence * array)
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
      interbotix_xs_msgs__srv__RegisterValues_Request__fini(&array->data[i]);
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

interbotix_xs_msgs__srv__RegisterValues_Request__Sequence *
interbotix_xs_msgs__srv__RegisterValues_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_xs_msgs__srv__RegisterValues_Request__Sequence * array = (interbotix_xs_msgs__srv__RegisterValues_Request__Sequence *)allocator.allocate(sizeof(interbotix_xs_msgs__srv__RegisterValues_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interbotix_xs_msgs__srv__RegisterValues_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interbotix_xs_msgs__srv__RegisterValues_Request__Sequence__destroy(interbotix_xs_msgs__srv__RegisterValues_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interbotix_xs_msgs__srv__RegisterValues_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interbotix_xs_msgs__srv__RegisterValues_Request__Sequence__are_equal(const interbotix_xs_msgs__srv__RegisterValues_Request__Sequence * lhs, const interbotix_xs_msgs__srv__RegisterValues_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_xs_msgs__srv__RegisterValues_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_xs_msgs__srv__RegisterValues_Request__Sequence__copy(
  const interbotix_xs_msgs__srv__RegisterValues_Request__Sequence * input,
  interbotix_xs_msgs__srv__RegisterValues_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_xs_msgs__srv__RegisterValues_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interbotix_xs_msgs__srv__RegisterValues_Request * data =
      (interbotix_xs_msgs__srv__RegisterValues_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_xs_msgs__srv__RegisterValues_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interbotix_xs_msgs__srv__RegisterValues_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interbotix_xs_msgs__srv__RegisterValues_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
interbotix_xs_msgs__srv__RegisterValues_Response__init(interbotix_xs_msgs__srv__RegisterValues_Response * msg)
{
  if (!msg) {
    return false;
  }
  // values
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->values, 0)) {
    interbotix_xs_msgs__srv__RegisterValues_Response__fini(msg);
    return false;
  }
  return true;
}

void
interbotix_xs_msgs__srv__RegisterValues_Response__fini(interbotix_xs_msgs__srv__RegisterValues_Response * msg)
{
  if (!msg) {
    return;
  }
  // values
  rosidl_runtime_c__int32__Sequence__fini(&msg->values);
}

bool
interbotix_xs_msgs__srv__RegisterValues_Response__are_equal(const interbotix_xs_msgs__srv__RegisterValues_Response * lhs, const interbotix_xs_msgs__srv__RegisterValues_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // values
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->values), &(rhs->values)))
  {
    return false;
  }
  return true;
}

bool
interbotix_xs_msgs__srv__RegisterValues_Response__copy(
  const interbotix_xs_msgs__srv__RegisterValues_Response * input,
  interbotix_xs_msgs__srv__RegisterValues_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // values
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->values), &(output->values)))
  {
    return false;
  }
  return true;
}

interbotix_xs_msgs__srv__RegisterValues_Response *
interbotix_xs_msgs__srv__RegisterValues_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_xs_msgs__srv__RegisterValues_Response * msg = (interbotix_xs_msgs__srv__RegisterValues_Response *)allocator.allocate(sizeof(interbotix_xs_msgs__srv__RegisterValues_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_xs_msgs__srv__RegisterValues_Response));
  bool success = interbotix_xs_msgs__srv__RegisterValues_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interbotix_xs_msgs__srv__RegisterValues_Response__destroy(interbotix_xs_msgs__srv__RegisterValues_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interbotix_xs_msgs__srv__RegisterValues_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interbotix_xs_msgs__srv__RegisterValues_Response__Sequence__init(interbotix_xs_msgs__srv__RegisterValues_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_xs_msgs__srv__RegisterValues_Response * data = NULL;

  if (size) {
    data = (interbotix_xs_msgs__srv__RegisterValues_Response *)allocator.zero_allocate(size, sizeof(interbotix_xs_msgs__srv__RegisterValues_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_xs_msgs__srv__RegisterValues_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_xs_msgs__srv__RegisterValues_Response__fini(&data[i - 1]);
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
interbotix_xs_msgs__srv__RegisterValues_Response__Sequence__fini(interbotix_xs_msgs__srv__RegisterValues_Response__Sequence * array)
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
      interbotix_xs_msgs__srv__RegisterValues_Response__fini(&array->data[i]);
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

interbotix_xs_msgs__srv__RegisterValues_Response__Sequence *
interbotix_xs_msgs__srv__RegisterValues_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_xs_msgs__srv__RegisterValues_Response__Sequence * array = (interbotix_xs_msgs__srv__RegisterValues_Response__Sequence *)allocator.allocate(sizeof(interbotix_xs_msgs__srv__RegisterValues_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interbotix_xs_msgs__srv__RegisterValues_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interbotix_xs_msgs__srv__RegisterValues_Response__Sequence__destroy(interbotix_xs_msgs__srv__RegisterValues_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interbotix_xs_msgs__srv__RegisterValues_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interbotix_xs_msgs__srv__RegisterValues_Response__Sequence__are_equal(const interbotix_xs_msgs__srv__RegisterValues_Response__Sequence * lhs, const interbotix_xs_msgs__srv__RegisterValues_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_xs_msgs__srv__RegisterValues_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_xs_msgs__srv__RegisterValues_Response__Sequence__copy(
  const interbotix_xs_msgs__srv__RegisterValues_Response__Sequence * input,
  interbotix_xs_msgs__srv__RegisterValues_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_xs_msgs__srv__RegisterValues_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interbotix_xs_msgs__srv__RegisterValues_Response * data =
      (interbotix_xs_msgs__srv__RegisterValues_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_xs_msgs__srv__RegisterValues_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interbotix_xs_msgs__srv__RegisterValues_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interbotix_xs_msgs__srv__RegisterValues_Response__copy(
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
// #include "interbotix_xs_msgs/srv/detail/register_values__functions.h"

bool
interbotix_xs_msgs__srv__RegisterValues_Event__init(interbotix_xs_msgs__srv__RegisterValues_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    interbotix_xs_msgs__srv__RegisterValues_Event__fini(msg);
    return false;
  }
  // request
  if (!interbotix_xs_msgs__srv__RegisterValues_Request__Sequence__init(&msg->request, 0)) {
    interbotix_xs_msgs__srv__RegisterValues_Event__fini(msg);
    return false;
  }
  // response
  if (!interbotix_xs_msgs__srv__RegisterValues_Response__Sequence__init(&msg->response, 0)) {
    interbotix_xs_msgs__srv__RegisterValues_Event__fini(msg);
    return false;
  }
  return true;
}

void
interbotix_xs_msgs__srv__RegisterValues_Event__fini(interbotix_xs_msgs__srv__RegisterValues_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  interbotix_xs_msgs__srv__RegisterValues_Request__Sequence__fini(&msg->request);
  // response
  interbotix_xs_msgs__srv__RegisterValues_Response__Sequence__fini(&msg->response);
}

bool
interbotix_xs_msgs__srv__RegisterValues_Event__are_equal(const interbotix_xs_msgs__srv__RegisterValues_Event * lhs, const interbotix_xs_msgs__srv__RegisterValues_Event * rhs)
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
  if (!interbotix_xs_msgs__srv__RegisterValues_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!interbotix_xs_msgs__srv__RegisterValues_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
interbotix_xs_msgs__srv__RegisterValues_Event__copy(
  const interbotix_xs_msgs__srv__RegisterValues_Event * input,
  interbotix_xs_msgs__srv__RegisterValues_Event * output)
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
  if (!interbotix_xs_msgs__srv__RegisterValues_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!interbotix_xs_msgs__srv__RegisterValues_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

interbotix_xs_msgs__srv__RegisterValues_Event *
interbotix_xs_msgs__srv__RegisterValues_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_xs_msgs__srv__RegisterValues_Event * msg = (interbotix_xs_msgs__srv__RegisterValues_Event *)allocator.allocate(sizeof(interbotix_xs_msgs__srv__RegisterValues_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_xs_msgs__srv__RegisterValues_Event));
  bool success = interbotix_xs_msgs__srv__RegisterValues_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interbotix_xs_msgs__srv__RegisterValues_Event__destroy(interbotix_xs_msgs__srv__RegisterValues_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interbotix_xs_msgs__srv__RegisterValues_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interbotix_xs_msgs__srv__RegisterValues_Event__Sequence__init(interbotix_xs_msgs__srv__RegisterValues_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_xs_msgs__srv__RegisterValues_Event * data = NULL;

  if (size) {
    data = (interbotix_xs_msgs__srv__RegisterValues_Event *)allocator.zero_allocate(size, sizeof(interbotix_xs_msgs__srv__RegisterValues_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_xs_msgs__srv__RegisterValues_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_xs_msgs__srv__RegisterValues_Event__fini(&data[i - 1]);
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
interbotix_xs_msgs__srv__RegisterValues_Event__Sequence__fini(interbotix_xs_msgs__srv__RegisterValues_Event__Sequence * array)
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
      interbotix_xs_msgs__srv__RegisterValues_Event__fini(&array->data[i]);
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

interbotix_xs_msgs__srv__RegisterValues_Event__Sequence *
interbotix_xs_msgs__srv__RegisterValues_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_xs_msgs__srv__RegisterValues_Event__Sequence * array = (interbotix_xs_msgs__srv__RegisterValues_Event__Sequence *)allocator.allocate(sizeof(interbotix_xs_msgs__srv__RegisterValues_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interbotix_xs_msgs__srv__RegisterValues_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interbotix_xs_msgs__srv__RegisterValues_Event__Sequence__destroy(interbotix_xs_msgs__srv__RegisterValues_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interbotix_xs_msgs__srv__RegisterValues_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interbotix_xs_msgs__srv__RegisterValues_Event__Sequence__are_equal(const interbotix_xs_msgs__srv__RegisterValues_Event__Sequence * lhs, const interbotix_xs_msgs__srv__RegisterValues_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_xs_msgs__srv__RegisterValues_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_xs_msgs__srv__RegisterValues_Event__Sequence__copy(
  const interbotix_xs_msgs__srv__RegisterValues_Event__Sequence * input,
  interbotix_xs_msgs__srv__RegisterValues_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_xs_msgs__srv__RegisterValues_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interbotix_xs_msgs__srv__RegisterValues_Event * data =
      (interbotix_xs_msgs__srv__RegisterValues_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_xs_msgs__srv__RegisterValues_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interbotix_xs_msgs__srv__RegisterValues_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interbotix_xs_msgs__srv__RegisterValues_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
