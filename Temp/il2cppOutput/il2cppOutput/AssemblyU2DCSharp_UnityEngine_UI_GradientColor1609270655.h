#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UI_UnityEngine_UI_BaseMeshEffect1728560551.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GradientColor
struct  GradientColor_t1609270655  : public BaseMeshEffect_t1728560551
{
public:
	// System.Single UnityEngine.UI.GradientColor::Offset
	float ___Offset_3;
	// UnityEngine.Color32 UnityEngine.UI.GradientColor::TopColor
	Color32_t874517518  ___TopColor_4;
	// UnityEngine.Color32 UnityEngine.UI.GradientColor::BottomColor
	Color32_t874517518  ___BottomColor_5;

public:
	inline static int32_t get_offset_of_Offset_3() { return static_cast<int32_t>(offsetof(GradientColor_t1609270655, ___Offset_3)); }
	inline float get_Offset_3() const { return ___Offset_3; }
	inline float* get_address_of_Offset_3() { return &___Offset_3; }
	inline void set_Offset_3(float value)
	{
		___Offset_3 = value;
	}

	inline static int32_t get_offset_of_TopColor_4() { return static_cast<int32_t>(offsetof(GradientColor_t1609270655, ___TopColor_4)); }
	inline Color32_t874517518  get_TopColor_4() const { return ___TopColor_4; }
	inline Color32_t874517518 * get_address_of_TopColor_4() { return &___TopColor_4; }
	inline void set_TopColor_4(Color32_t874517518  value)
	{
		___TopColor_4 = value;
	}

	inline static int32_t get_offset_of_BottomColor_5() { return static_cast<int32_t>(offsetof(GradientColor_t1609270655, ___BottomColor_5)); }
	inline Color32_t874517518  get_BottomColor_5() const { return ___BottomColor_5; }
	inline Color32_t874517518 * get_address_of_BottomColor_5() { return &___BottomColor_5; }
	inline void set_BottomColor_5(Color32_t874517518  value)
	{
		___BottomColor_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
