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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transform_1_t2000;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t9;
// System.AsyncCallback
struct AsyncCallback_t10;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13457_gshared (Transform_1_t2000 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m13457(__this, ___object, ___method, method) (( void (*) (Transform_1_t2000 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13457_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t1994  Transform_1_Invoke_m13458_gshared (Transform_1_t2000 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m13458(__this, ___key, ___value, method) (( KeyValuePair_2_t1994  (*) (Transform_1_t2000 *, Object_t *, Object_t *, const MethodInfo*))Transform_1_Invoke_m13458_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13459_gshared (Transform_1_t2000 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t10 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m13459(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2000 *, Object_t *, Object_t *, AsyncCallback_t10 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13459_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1994  Transform_1_EndInvoke_m13460_gshared (Transform_1_t2000 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m13460(__this, ___result, method) (( KeyValuePair_2_t1994  (*) (Transform_1_t2000 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13460_gshared)(__this, ___result, method)
