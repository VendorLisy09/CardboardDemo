﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t161;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t98;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirection.h"

// System.Void UnityEngine.EventSystems.AxisEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" void AxisEventData__ctor_m768 (AxisEventData_t161 * __this, EventSystem_t98 * ___eventSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.AxisEventData::get_moveVector()
extern "C" Vector2_t16  AxisEventData_get_moveVector_m769 (AxisEventData_t161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.AxisEventData::set_moveVector(UnityEngine.Vector2)
extern "C" void AxisEventData_set_moveVector_m770 (AxisEventData_t161 * __this, Vector2_t16  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.AxisEventData::get_moveDir()
extern "C" int32_t AxisEventData_get_moveDir_m771 (AxisEventData_t161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.AxisEventData::set_moveDir(UnityEngine.EventSystems.MoveDirection)
extern "C" void AxisEventData_set_moveDir_m772 (AxisEventData_t161 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
