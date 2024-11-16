// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from coffee_system_interface:action/MyAction.idl
// generated code does not contain a copyright notice

#ifndef COFFEE_SYSTEM_INTERFACE__ACTION__DETAIL__MY_ACTION__STRUCT_H_
#define COFFEE_SYSTEM_INTERFACE__ACTION__DETAIL__MY_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MyAction in the package coffee_system_interface.
typedef struct coffee_system_interface__action__MyAction_Goal
{
  /// 로봇이 이동해야 하는 목표 위치의 이름
  int32_t table_num;
  /// 목표 위치에 도착 후 로봇이 대기할 시간 (단위: 초)
  float wait_time;
} coffee_system_interface__action__MyAction_Goal;

// Struct for a sequence of coffee_system_interface__action__MyAction_Goal.
typedef struct coffee_system_interface__action__MyAction_Goal__Sequence
{
  coffee_system_interface__action__MyAction_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} coffee_system_interface__action__MyAction_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'final_location'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MyAction in the package coffee_system_interface.
typedef struct coffee_system_interface__action__MyAction_Result
{
  /// 작업 성공 여부를 나타내는 플래그 (true = 성공, false = 실패)
  bool success;
  /// 작업 결과에 대한 메시지 (예: "성공적으로 목표 위치에 도달하였습니다." 또는 "목표 위치에 도달하지 못했습니다.")
  rosidl_runtime_c__String message;
  /// 작업 완료 시 로봇이 최종적으로 도달한 위치의 이름
  rosidl_runtime_c__String final_location;
  /// 작업 수행에 소요된 총 시간 (단위: 초; 이동 시간 + 대기 시간 포함)
  float total_time;
} coffee_system_interface__action__MyAction_Result;

// Struct for a sequence of coffee_system_interface__action__MyAction_Result.
typedef struct coffee_system_interface__action__MyAction_Result__Sequence
{
  coffee_system_interface__action__MyAction_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} coffee_system_interface__action__MyAction_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_state'
// Member 'current_location'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/MyAction in the package coffee_system_interface.
typedef struct coffee_system_interface__action__MyAction_Feedback
{
  /// 작업의 현재 상태를 나타내는 텍스트 (예: "목표 위치로 이동 중", "위치에서 대기 중", "작업 완료")
  rosidl_runtime_c__String current_state;
  /// 작업 시작 후 경과한 시간 (단위: 초; 현재 상태까지 걸린 시간)
  float time_elapsed;
  /// 로봇의 현재 위치 (이동 중이라면 목표 위치와 다를 수 있음)
  rosidl_runtime_c__String current_location;
} coffee_system_interface__action__MyAction_Feedback;

// Struct for a sequence of coffee_system_interface__action__MyAction_Feedback.
typedef struct coffee_system_interface__action__MyAction_Feedback__Sequence
{
  coffee_system_interface__action__MyAction_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} coffee_system_interface__action__MyAction_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "coffee_system_interface/action/detail/my_action__struct.h"

/// Struct defined in action/MyAction in the package coffee_system_interface.
typedef struct coffee_system_interface__action__MyAction_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  coffee_system_interface__action__MyAction_Goal goal;
} coffee_system_interface__action__MyAction_SendGoal_Request;

// Struct for a sequence of coffee_system_interface__action__MyAction_SendGoal_Request.
typedef struct coffee_system_interface__action__MyAction_SendGoal_Request__Sequence
{
  coffee_system_interface__action__MyAction_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} coffee_system_interface__action__MyAction_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MyAction in the package coffee_system_interface.
typedef struct coffee_system_interface__action__MyAction_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} coffee_system_interface__action__MyAction_SendGoal_Response;

// Struct for a sequence of coffee_system_interface__action__MyAction_SendGoal_Response.
typedef struct coffee_system_interface__action__MyAction_SendGoal_Response__Sequence
{
  coffee_system_interface__action__MyAction_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} coffee_system_interface__action__MyAction_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MyAction in the package coffee_system_interface.
typedef struct coffee_system_interface__action__MyAction_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} coffee_system_interface__action__MyAction_GetResult_Request;

// Struct for a sequence of coffee_system_interface__action__MyAction_GetResult_Request.
typedef struct coffee_system_interface__action__MyAction_GetResult_Request__Sequence
{
  coffee_system_interface__action__MyAction_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} coffee_system_interface__action__MyAction_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "coffee_system_interface/action/detail/my_action__struct.h"

/// Struct defined in action/MyAction in the package coffee_system_interface.
typedef struct coffee_system_interface__action__MyAction_GetResult_Response
{
  int8_t status;
  coffee_system_interface__action__MyAction_Result result;
} coffee_system_interface__action__MyAction_GetResult_Response;

// Struct for a sequence of coffee_system_interface__action__MyAction_GetResult_Response.
typedef struct coffee_system_interface__action__MyAction_GetResult_Response__Sequence
{
  coffee_system_interface__action__MyAction_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} coffee_system_interface__action__MyAction_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "coffee_system_interface/action/detail/my_action__struct.h"

/// Struct defined in action/MyAction in the package coffee_system_interface.
typedef struct coffee_system_interface__action__MyAction_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  coffee_system_interface__action__MyAction_Feedback feedback;
} coffee_system_interface__action__MyAction_FeedbackMessage;

// Struct for a sequence of coffee_system_interface__action__MyAction_FeedbackMessage.
typedef struct coffee_system_interface__action__MyAction_FeedbackMessage__Sequence
{
  coffee_system_interface__action__MyAction_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} coffee_system_interface__action__MyAction_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COFFEE_SYSTEM_INTERFACE__ACTION__DETAIL__MY_ACTION__STRUCT_H_
