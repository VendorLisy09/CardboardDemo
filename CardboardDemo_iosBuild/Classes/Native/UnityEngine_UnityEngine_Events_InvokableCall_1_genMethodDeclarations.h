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

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t1902;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1854;
// System.Object[]
struct ObjectU5BU5D_t127;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m12243_gshared (InvokableCall_1_t1902 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m12243(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1902 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m12243_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m12244_gshared (InvokableCall_1_t1902 * __this, UnityAction_1_t1854 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m12244(__this, ___action, method) (( void (*) (InvokableCall_1_t1902 *, UnityAction_1_t1854 *, const MethodInfo*))InvokableCall_1__ctor_m12244_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m12245_gshared (InvokableCall_1_t1902 * __this, ObjectU5BU5D_t127* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m12245(__this, ___args, method) (( void (*) (InvokableCall_1_t1902 *, ObjectU5BU5D_t127*, const MethodInfo*))InvokableCall_1_Invoke_m12245_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m12246_gshared (InvokableCall_1_t1902 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m12246(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1902 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m12246_gshared)(__this, ___targetObj, ___method, method)
