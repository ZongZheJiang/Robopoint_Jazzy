// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interbotix_xs_msgs:msg/ArmJoy.idl
// generated code does not contain a copyright notice
#include "interbotix_xs_msgs/msg/detail/arm_joy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
interbotix_xs_msgs__msg__ArmJoy__init(interbotix_xs_msgs__msg__ArmJoy * msg)
{
  if (!msg) {
    return false;
  }
  // ee_x_cmd
  // ee_y_cmd
  // ee_z_cmd
  // ee_roll_cmd
  // ee_pitch_cmd
  // waist_cmd
  // gripper_cmd
  // pose_cmd
  // speed_cmd
  // speed_toggle_cmd
  // gripper_pwm_cmd
  // torque_cmd
  return true;
}

void
interbotix_xs_msgs__msg__ArmJoy__fini(interbotix_xs_msgs__msg__ArmJoy * msg)
{
  if (!msg) {
    return;
  }
  // ee_x_cmd
  // ee_y_cmd
  // ee_z_cmd
  // ee_roll_cmd
  // ee_pitch_cmd
  // waist_cmd
  // gripper_cmd
  // pose_cmd
  // speed_cmd
  // speed_toggle_cmd
  // gripper_pwm_cmd
  // torque_cmd
}

bool
interbotix_xs_msgs__msg__ArmJoy__are_equal(const interbotix_xs_msgs__msg__ArmJoy * lhs, const interbotix_xs_msgs__msg__ArmJoy * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ee_x_cmd
  if (lhs->ee_x_cmd != rhs->ee_x_cmd) {
    return false;
  }
  // ee_y_cmd
  if (lhs->ee_y_cmd != rhs->ee_y_cmd) {
    return false;
  }
  // ee_z_cmd
  if (lhs->ee_z_cmd != rhs->ee_z_cmd) {
    return false;
  }
  // ee_roll_cmd
  if (lhs->ee_roll_cmd != rhs->ee_roll_cmd) {
    return false;
  }
  // ee_pitch_cmd
  if (lhs->ee_pitch_cmd != rhs->ee_pitch_cmd) {
    return false;
  }
  // waist_cmd
  if (lhs->waist_cmd != rhs->waist_cmd) {
    return false;
  }
  // gripper_cmd
  if (lhs->gripper_cmd != rhs->gripper_cmd) {
    return false;
  }
  // pose_cmd
  if (lhs->pose_cmd != rhs->pose_cmd) {
    return false;
  }
  // speed_cmd
  if (lhs->speed_cmd != rhs->speed_cmd) {
    return false;
  }
  // speed_toggle_cmd
  if (lhs->speed_toggle_cmd != rhs->speed_toggle_cmd) {
    return false;
  }
  // gripper_pwm_cmd
  if (lhs->gripper_pwm_cmd != rhs->gripper_pwm_cmd) {
    return false;
  }
  // torque_cmd
  if (lhs->torque_cmd != rhs->torque_cmd) {
    return false;
  }
  return true;
}

bool
interbotix_xs_msgs__msg__ArmJoy__copy(
  const interbotix_xs_msgs__msg__ArmJoy * input,
  interbotix_xs_msgs__msg__ArmJoy * output)
{
  if (!input || !output) {
    return false;
  }
  // ee_x_cmd
  output->ee_x_cmd = input->ee_x_cmd;
  // ee_y_cmd
  output->ee_y_cmd = input->ee_y_cmd;
  // ee_z_cmd
  output->ee_z_cmd = input->ee_z_cmd;
  // ee_roll_cmd
  output->ee_roll_cmd = input->ee_roll_cmd;
  // ee_pitch_cmd
  output->ee_pitch_cmd = input->ee_pitch_cmd;
  // waist_cmd
  output->waist_cmd = input->waist_cmd;
  // gripper_cmd
  output->gripper_cmd = input->gripper_cmd;
  // pose_cmd
  output->pose_cmd = input->pose_cmd;
  // speed_cmd
  output->speed_cmd = input->speed_cmd;
  // speed_toggle_cmd
  output->speed_toggle_cmd = input->speed_toggle_cmd;
  // gripper_pwm_cmd
  output->gripper_pwm_cmd = input->gripper_pwm_cmd;
  // torque_cmd
  output->torque_cmd = input->torque_cmd;
  return true;
}

interbotix_xs_msgs__msg__ArmJoy *
interbotix_xs_msgs__msg__ArmJoy__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_xs_msgs__msg__ArmJoy * msg = (interbotix_xs_msgs__msg__ArmJoy *)allocator.allocate(sizeof(interbotix_xs_msgs__msg__ArmJoy), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_xs_msgs__msg__ArmJoy));
  bool success = interbotix_xs_msgs__msg__ArmJoy__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interbotix_xs_msgs__msg__ArmJoy__destroy(interbotix_xs_msgs__msg__ArmJoy * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interbotix_xs_msgs__msg__ArmJoy__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interbotix_xs_msgs__msg__ArmJoy__Sequence__init(interbotix_xs_msgs__msg__ArmJoy__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_xs_msgs__msg__ArmJoy * data = NULL;

  if (size) {
    data = (interbotix_xs_msgs__msg__ArmJoy *)allocator.zero_allocate(size, sizeof(interbotix_xs_msgs__msg__ArmJoy), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_xs_msgs__msg__ArmJoy__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_xs_msgs__msg__ArmJoy__fini(&data[i - 1]);
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
interbotix_xs_msgs__msg__ArmJoy__Sequence__fini(interbotix_xs_msgs__msg__ArmJoy__Sequence * array)
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
      interbotix_xs_msgs__msg__ArmJoy__fini(&array->data[i]);
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

interbotix_xs_msgs__msg__ArmJoy__Sequence *
interbotix_xs_msgs__msg__ArmJoy__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_xs_msgs__msg__ArmJoy__Sequence * array = (interbotix_xs_msgs__msg__ArmJoy__Sequence *)allocator.allocate(sizeof(interbotix_xs_msgs__msg__ArmJoy__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interbotix_xs_msgs__msg__ArmJoy__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interbotix_xs_msgs__msg__ArmJoy__Sequence__destroy(interbotix_xs_msgs__msg__ArmJoy__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interbotix_xs_msgs__msg__ArmJoy__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interbotix_xs_msgs__msg__ArmJoy__Sequence__are_equal(const interbotix_xs_msgs__msg__ArmJoy__Sequence * lhs, const interbotix_xs_msgs__msg__ArmJoy__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_xs_msgs__msg__ArmJoy__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_xs_msgs__msg__ArmJoy__Sequence__copy(
  const interbotix_xs_msgs__msg__ArmJoy__Sequence * input,
  interbotix_xs_msgs__msg__ArmJoy__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_xs_msgs__msg__ArmJoy);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interbotix_xs_msgs__msg__ArmJoy * data =
      (interbotix_xs_msgs__msg__ArmJoy *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_xs_msgs__msg__ArmJoy__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interbotix_xs_msgs__msg__ArmJoy__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interbotix_xs_msgs__msg__ArmJoy__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
