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

// System.Security.Cryptography.RSA
struct RSA_t752;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void System.Security.Cryptography.RSA::.ctor()
extern "C" void RSA__ctor_m4806 (RSA_t752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create()
extern "C" RSA_t752 * RSA_Create_m4801 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create(System.String)
extern "C" RSA_t752 * RSA_Create_m9541 (Object_t * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSA::ZeroizePrivateKey(System.Security.Cryptography.RSAParameters)
extern "C" void RSA_ZeroizePrivateKey_m9542 (RSA_t752 * __this, RSAParameters_t834  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSA::FromXmlString(System.String)
extern "C" void RSA_FromXmlString_m9543 (RSA_t752 * __this, String_t* ___xmlString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSA::ToXmlString(System.Boolean)
extern "C" String_t* RSA_ToXmlString_m9544 (RSA_t752 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
