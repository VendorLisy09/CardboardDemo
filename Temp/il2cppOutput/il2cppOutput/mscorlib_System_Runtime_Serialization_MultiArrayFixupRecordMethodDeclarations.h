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

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t1514;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1511;
// System.Int32[]
struct Int32U5BU5D_t68;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1505;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m9293 (MultiArrayFixupRecord_t1514 * __this, ObjectRecord_t1511 * ___objectToBeFixed, Int32U5BU5D_t68* ___indices, ObjectRecord_t1511 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m9294 (MultiArrayFixupRecord_t1514 * __this, ObjectManager_t1505 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
