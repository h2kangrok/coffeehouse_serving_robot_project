// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from coffee_system_interface:action/MyAction.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "coffee_system_interface/action/detail/my_action__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace coffee_system_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MyAction_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_Goal_type_support_ids_t;

static const _MyAction_Goal_type_support_ids_t _MyAction_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyAction_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_Goal_type_support_symbol_names_t _MyAction_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coffee_system_interface, action, MyAction_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coffee_system_interface, action, MyAction_Goal)),
  }
};

typedef struct _MyAction_Goal_type_support_data_t
{
  void * data[2];
} _MyAction_Goal_type_support_data_t;

static _MyAction_Goal_type_support_data_t _MyAction_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_Goal_message_typesupport_map = {
  2,
  "coffee_system_interface",
  &_MyAction_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MyAction_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MyAction_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyAction_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coffee_system_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<coffee_system_interface::action::MyAction_Goal>()
{
  return &::coffee_system_interface::action::rosidl_typesupport_cpp::MyAction_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, coffee_system_interface, action, MyAction_Goal)() {
  return get_message_type_support_handle<coffee_system_interface::action::MyAction_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coffee_system_interface/action/detail/my_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coffee_system_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MyAction_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_Result_type_support_ids_t;

static const _MyAction_Result_type_support_ids_t _MyAction_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyAction_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_Result_type_support_symbol_names_t _MyAction_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coffee_system_interface, action, MyAction_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coffee_system_interface, action, MyAction_Result)),
  }
};

typedef struct _MyAction_Result_type_support_data_t
{
  void * data[2];
} _MyAction_Result_type_support_data_t;

static _MyAction_Result_type_support_data_t _MyAction_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_Result_message_typesupport_map = {
  2,
  "coffee_system_interface",
  &_MyAction_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MyAction_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MyAction_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyAction_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coffee_system_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<coffee_system_interface::action::MyAction_Result>()
{
  return &::coffee_system_interface::action::rosidl_typesupport_cpp::MyAction_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, coffee_system_interface, action, MyAction_Result)() {
  return get_message_type_support_handle<coffee_system_interface::action::MyAction_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coffee_system_interface/action/detail/my_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coffee_system_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MyAction_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_Feedback_type_support_ids_t;

static const _MyAction_Feedback_type_support_ids_t _MyAction_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyAction_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_Feedback_type_support_symbol_names_t _MyAction_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coffee_system_interface, action, MyAction_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coffee_system_interface, action, MyAction_Feedback)),
  }
};

typedef struct _MyAction_Feedback_type_support_data_t
{
  void * data[2];
} _MyAction_Feedback_type_support_data_t;

static _MyAction_Feedback_type_support_data_t _MyAction_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_Feedback_message_typesupport_map = {
  2,
  "coffee_system_interface",
  &_MyAction_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MyAction_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MyAction_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyAction_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coffee_system_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<coffee_system_interface::action::MyAction_Feedback>()
{
  return &::coffee_system_interface::action::rosidl_typesupport_cpp::MyAction_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, coffee_system_interface, action, MyAction_Feedback)() {
  return get_message_type_support_handle<coffee_system_interface::action::MyAction_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coffee_system_interface/action/detail/my_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coffee_system_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MyAction_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_SendGoal_Request_type_support_ids_t;

static const _MyAction_SendGoal_Request_type_support_ids_t _MyAction_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyAction_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_SendGoal_Request_type_support_symbol_names_t _MyAction_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coffee_system_interface, action, MyAction_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coffee_system_interface, action, MyAction_SendGoal_Request)),
  }
};

typedef struct _MyAction_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MyAction_SendGoal_Request_type_support_data_t;

static _MyAction_SendGoal_Request_type_support_data_t _MyAction_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_SendGoal_Request_message_typesupport_map = {
  2,
  "coffee_system_interface",
  &_MyAction_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MyAction_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MyAction_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyAction_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coffee_system_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<coffee_system_interface::action::MyAction_SendGoal_Request>()
{
  return &::coffee_system_interface::action::rosidl_typesupport_cpp::MyAction_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, coffee_system_interface, action, MyAction_SendGoal_Request)() {
  return get_message_type_support_handle<coffee_system_interface::action::MyAction_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coffee_system_interface/action/detail/my_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coffee_system_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MyAction_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_SendGoal_Response_type_support_ids_t;

static const _MyAction_SendGoal_Response_type_support_ids_t _MyAction_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyAction_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_SendGoal_Response_type_support_symbol_names_t _MyAction_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coffee_system_interface, action, MyAction_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coffee_system_interface, action, MyAction_SendGoal_Response)),
  }
};

typedef struct _MyAction_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MyAction_SendGoal_Response_type_support_data_t;

static _MyAction_SendGoal_Response_type_support_data_t _MyAction_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_SendGoal_Response_message_typesupport_map = {
  2,
  "coffee_system_interface",
  &_MyAction_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MyAction_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MyAction_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyAction_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coffee_system_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<coffee_system_interface::action::MyAction_SendGoal_Response>()
{
  return &::coffee_system_interface::action::rosidl_typesupport_cpp::MyAction_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, coffee_system_interface, action, MyAction_SendGoal_Response)() {
  return get_message_type_support_handle<coffee_system_interface::action::MyAction_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "coffee_system_interface/action/detail/my_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coffee_system_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MyAction_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_SendGoal_type_support_ids_t;

static const _MyAction_SendGoal_type_support_ids_t _MyAction_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyAction_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_SendGoal_type_support_symbol_names_t _MyAction_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coffee_system_interface, action, MyAction_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coffee_system_interface, action, MyAction_SendGoal)),
  }
};

typedef struct _MyAction_SendGoal_type_support_data_t
{
  void * data[2];
} _MyAction_SendGoal_type_support_data_t;

static _MyAction_SendGoal_type_support_data_t _MyAction_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_SendGoal_service_typesupport_map = {
  2,
  "coffee_system_interface",
  &_MyAction_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MyAction_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MyAction_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MyAction_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coffee_system_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<coffee_system_interface::action::MyAction_SendGoal>()
{
  return &::coffee_system_interface::action::rosidl_typesupport_cpp::MyAction_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coffee_system_interface/action/detail/my_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coffee_system_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MyAction_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_GetResult_Request_type_support_ids_t;

static const _MyAction_GetResult_Request_type_support_ids_t _MyAction_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyAction_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_GetResult_Request_type_support_symbol_names_t _MyAction_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coffee_system_interface, action, MyAction_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coffee_system_interface, action, MyAction_GetResult_Request)),
  }
};

typedef struct _MyAction_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MyAction_GetResult_Request_type_support_data_t;

static _MyAction_GetResult_Request_type_support_data_t _MyAction_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_GetResult_Request_message_typesupport_map = {
  2,
  "coffee_system_interface",
  &_MyAction_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MyAction_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MyAction_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyAction_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coffee_system_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<coffee_system_interface::action::MyAction_GetResult_Request>()
{
  return &::coffee_system_interface::action::rosidl_typesupport_cpp::MyAction_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, coffee_system_interface, action, MyAction_GetResult_Request)() {
  return get_message_type_support_handle<coffee_system_interface::action::MyAction_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coffee_system_interface/action/detail/my_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coffee_system_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MyAction_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_GetResult_Response_type_support_ids_t;

static const _MyAction_GetResult_Response_type_support_ids_t _MyAction_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyAction_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_GetResult_Response_type_support_symbol_names_t _MyAction_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coffee_system_interface, action, MyAction_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coffee_system_interface, action, MyAction_GetResult_Response)),
  }
};

typedef struct _MyAction_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MyAction_GetResult_Response_type_support_data_t;

static _MyAction_GetResult_Response_type_support_data_t _MyAction_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_GetResult_Response_message_typesupport_map = {
  2,
  "coffee_system_interface",
  &_MyAction_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MyAction_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MyAction_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyAction_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coffee_system_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<coffee_system_interface::action::MyAction_GetResult_Response>()
{
  return &::coffee_system_interface::action::rosidl_typesupport_cpp::MyAction_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, coffee_system_interface, action, MyAction_GetResult_Response)() {
  return get_message_type_support_handle<coffee_system_interface::action::MyAction_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "coffee_system_interface/action/detail/my_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coffee_system_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MyAction_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_GetResult_type_support_ids_t;

static const _MyAction_GetResult_type_support_ids_t _MyAction_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyAction_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_GetResult_type_support_symbol_names_t _MyAction_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coffee_system_interface, action, MyAction_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coffee_system_interface, action, MyAction_GetResult)),
  }
};

typedef struct _MyAction_GetResult_type_support_data_t
{
  void * data[2];
} _MyAction_GetResult_type_support_data_t;

static _MyAction_GetResult_type_support_data_t _MyAction_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_GetResult_service_typesupport_map = {
  2,
  "coffee_system_interface",
  &_MyAction_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MyAction_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MyAction_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MyAction_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coffee_system_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<coffee_system_interface::action::MyAction_GetResult>()
{
  return &::coffee_system_interface::action::rosidl_typesupport_cpp::MyAction_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coffee_system_interface/action/detail/my_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coffee_system_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MyAction_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyAction_FeedbackMessage_type_support_ids_t;

static const _MyAction_FeedbackMessage_type_support_ids_t _MyAction_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyAction_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyAction_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyAction_FeedbackMessage_type_support_symbol_names_t _MyAction_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coffee_system_interface, action, MyAction_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coffee_system_interface, action, MyAction_FeedbackMessage)),
  }
};

typedef struct _MyAction_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MyAction_FeedbackMessage_type_support_data_t;

static _MyAction_FeedbackMessage_type_support_data_t _MyAction_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyAction_FeedbackMessage_message_typesupport_map = {
  2,
  "coffee_system_interface",
  &_MyAction_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MyAction_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MyAction_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyAction_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyAction_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coffee_system_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<coffee_system_interface::action::MyAction_FeedbackMessage>()
{
  return &::coffee_system_interface::action::rosidl_typesupport_cpp::MyAction_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, coffee_system_interface, action, MyAction_FeedbackMessage)() {
  return get_message_type_support_handle<coffee_system_interface::action::MyAction_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "coffee_system_interface/action/detail/my_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace coffee_system_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t MyAction_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coffee_system_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<coffee_system_interface::action::MyAction>()
{
  using ::coffee_system_interface::action::rosidl_typesupport_cpp::MyAction_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  MyAction_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::coffee_system_interface::action::MyAction::Impl::SendGoalService>();
  MyAction_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::coffee_system_interface::action::MyAction::Impl::GetResultService>();
  MyAction_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::coffee_system_interface::action::MyAction::Impl::CancelGoalService>();
  MyAction_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::coffee_system_interface::action::MyAction::Impl::FeedbackMessage>();
  MyAction_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::coffee_system_interface::action::MyAction::Impl::GoalStatusMessage>();
  return &MyAction_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
