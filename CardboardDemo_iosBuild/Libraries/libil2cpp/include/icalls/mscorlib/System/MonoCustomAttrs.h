#pragma once

#include <stdint.h>

struct Il2CppArray;
struct Il2CppObject;
struct Il2CppReflectionType;

namespace il2cpp
{
namespace icalls
{
namespace mscorlib
{
namespace System
{

class MonoCustomAttrs
{
public:
	static Il2CppArray* GetCustomAttributesDataInternal (Il2CppObject* obj);
	static Il2CppArray * GetCustomAttributesInternal(Il2CppObject* obj, Il2CppReflectionType* type, bool pseudoAttrs);
	static bool IsDefinedInternal(Il2CppObject *obj, Il2CppReflectionType *attr_type);
};

} /* namespace System */
} /* namespace mscorlib */
} /* namespace icalls */
} /* namespace il2cpp */
