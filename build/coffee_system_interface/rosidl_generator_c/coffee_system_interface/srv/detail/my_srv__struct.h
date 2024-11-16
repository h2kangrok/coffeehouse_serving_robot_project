// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from coffee_system_interface:srv/MySrv.idl
// generated code does not contain a copyright notice

#ifndef COFFEE_SYSTEM_INTERFACE__SRV__DETAIL__MY_SRV__STRUCT_H_
#define COFFEE_SYSTEM_INTERFACE__SRV__DETAIL__MY_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'items'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MySrv in the package coffee_system_interface.
typedef struct coffee_system_interface__srv__MySrv_Request
{
  /// 테이블 번호
  int32_t table_num;
  /// 주문 내역
  rosidl_runtime_c__String__Sequence items;
} coffee_system_interface__srv__MySrv_Request;

// Struct for a sequence of coffee_system_interface__srv__MySrv_Request.
typedef struct coffee_system_interface__srv__MySrv_Request__Sequence
{
  coffee_system_interface__srv__MySrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} coffee_system_interface__srv__MySrv_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MySrv in the package coffee_system_interface.
typedef struct coffee_system_interface__srv__MySrv_Response
{
  /// 주문 성공 여부
  bool success;
  /// 주문 상태 메시지
  rosidl_runtime_c__String message;
} coffee_system_interface__srv__MySrv_Response;

// Struct for a sequence of coffee_system_interface__srv__MySrv_Response.
typedef struct coffee_system_interface__srv__MySrv_Response__Sequence
{
  coffee_system_interface__srv__MySrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} coffee_system_interface__srv__MySrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COFFEE_SYSTEM_INTERFACE__SRV__DETAIL__MY_SRV__STRUCT_H_
