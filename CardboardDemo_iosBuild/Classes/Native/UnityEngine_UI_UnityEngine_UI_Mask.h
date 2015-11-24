﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t200;
// UnityEngine.UI.Graphic
struct Graphic_t216;
// UnityEngine.Material
struct Material_t43;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"

// UnityEngine.UI.Mask
struct  Mask_t256  : public UIBehaviour_t137
{
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t200 * ___m_RectTransform_2;
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_3;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_t216 * ___m_Graphic_4;
	// UnityEngine.Material UnityEngine.UI.Mask::m_MaskMaterial
	Material_t43 * ___m_MaskMaterial_5;
	// UnityEngine.Material UnityEngine.UI.Mask::m_UnmaskMaterial
	Material_t43 * ___m_UnmaskMaterial_6;
};
