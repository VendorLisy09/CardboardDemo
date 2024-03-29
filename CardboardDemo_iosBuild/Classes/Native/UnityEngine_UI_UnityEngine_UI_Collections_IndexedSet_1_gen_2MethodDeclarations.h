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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1940;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1878;
// System.Object[]
struct ObjectU5BU5D_t127;
// System.Predicate`1<System.Object>
struct Predicate_1_t1817;
// System.Comparison`1<System.Object>
struct Comparison_1_t1823;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m12702_gshared (IndexedSet_1_t1940 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m12702(__this, method) (( void (*) (IndexedSet_1_t1940 *, const MethodInfo*))IndexedSet_1__ctor_m12702_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12704_gshared (IndexedSet_1_t1940 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12704(__this, method) (( Object_t * (*) (IndexedSet_1_t1940 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12704_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m12706_gshared (IndexedSet_1_t1940 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m12706(__this, ___item, method) (( void (*) (IndexedSet_1_t1940 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m12706_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m12708_gshared (IndexedSet_1_t1940 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m12708(__this, ___item, method) (( bool (*) (IndexedSet_1_t1940 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m12708_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m12710_gshared (IndexedSet_1_t1940 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m12710(__this, method) (( Object_t* (*) (IndexedSet_1_t1940 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m12710_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m12712_gshared (IndexedSet_1_t1940 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m12712(__this, method) (( void (*) (IndexedSet_1_t1940 *, const MethodInfo*))IndexedSet_1_Clear_m12712_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m12714_gshared (IndexedSet_1_t1940 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m12714(__this, ___item, method) (( bool (*) (IndexedSet_1_t1940 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m12714_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m12716_gshared (IndexedSet_1_t1940 * __this, ObjectU5BU5D_t127* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m12716(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1940 *, ObjectU5BU5D_t127*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m12716_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m12718_gshared (IndexedSet_1_t1940 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m12718(__this, method) (( int32_t (*) (IndexedSet_1_t1940 *, const MethodInfo*))IndexedSet_1_get_Count_m12718_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m12720_gshared (IndexedSet_1_t1940 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m12720(__this, method) (( bool (*) (IndexedSet_1_t1940 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m12720_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m12722_gshared (IndexedSet_1_t1940 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m12722(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1940 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m12722_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m12724_gshared (IndexedSet_1_t1940 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m12724(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1940 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m12724_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m12726_gshared (IndexedSet_1_t1940 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m12726(__this, ___index, method) (( void (*) (IndexedSet_1_t1940 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m12726_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m12728_gshared (IndexedSet_1_t1940 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m12728(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1940 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m12728_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m12730_gshared (IndexedSet_1_t1940 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m12730(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1940 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m12730_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m12732_gshared (IndexedSet_1_t1940 * __this, Predicate_1_t1817 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m12732(__this, ___match, method) (( void (*) (IndexedSet_1_t1940 *, Predicate_1_t1817 *, const MethodInfo*))IndexedSet_1_RemoveAll_m12732_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m12733_gshared (IndexedSet_1_t1940 * __this, Comparison_1_t1823 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m12733(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1940 *, Comparison_1_t1823 *, const MethodInfo*))IndexedSet_1_Sort_m12733_gshared)(__this, ___sortLayoutFunction, method)
