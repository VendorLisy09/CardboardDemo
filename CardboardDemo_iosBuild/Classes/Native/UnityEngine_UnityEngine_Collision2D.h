﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t511;
// UnityEngine.Collider2D
struct Collider2D_t375;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t514;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// UnityEngine.Collision2D
struct  Collision2D_t513  : public Object_t
{
	// UnityEngine.Rigidbody2D UnityEngine.Collision2D::m_Rigidbody
	Rigidbody2D_t511 * ___m_Rigidbody_0;
	// UnityEngine.Collider2D UnityEngine.Collision2D::m_Collider
	Collider2D_t375 * ___m_Collider_1;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_Contacts
	ContactPoint2DU5BU5D_t514* ___m_Contacts_2;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t16  ___m_RelativeVelocity_3;
	// System.Boolean UnityEngine.Collision2D::m_Enabled
	bool ___m_Enabled_4;
};
