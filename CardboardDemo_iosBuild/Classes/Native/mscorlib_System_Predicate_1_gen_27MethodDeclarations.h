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

// System.Predicate`1<System.Int32>
struct Predicate_1_t2113;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t9;
// System.AsyncCallback
struct AsyncCallback_t10;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15253_gshared (Predicate_1_t2113 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15253(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2113 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15253_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15254_gshared (Predicate_1_t2113 * __this, int32_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15254(__this, ___obj, method) (( bool (*) (Predicate_1_t2113 *, int32_t, const MethodInfo*))Predicate_1_Invoke_m15254_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15255_gshared (Predicate_1_t2113 * __this, int32_t ___obj, AsyncCallback_t10 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15255(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2113 *, int32_t, AsyncCallback_t10 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15255_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15256_gshared (Predicate_1_t2113 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15256(__this, ___result, method) (( bool (*) (Predicate_1_t2113 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15256_gshared)(__this, ___result, method)
