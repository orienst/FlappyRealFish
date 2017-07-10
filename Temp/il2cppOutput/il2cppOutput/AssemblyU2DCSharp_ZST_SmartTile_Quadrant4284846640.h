#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Sprite
struct Sprite_t309593783;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ZST_SmartTile_CardinalDirection2226844457.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZST_SmartTile/Quadrant
struct  Quadrant_t4284846640  : public Il2CppObject
{
public:
	// ZST_SmartTile/CardinalDirection ZST_SmartTile/Quadrant::dir
	int32_t ___dir_0;
	// System.Single ZST_SmartTile/Quadrant::startRot
	float ___startRot_1;
	// UnityEngine.Vector2 ZST_SmartTile/Quadrant::offset
	Vector2_t2243707579  ___offset_2;
	// UnityEngine.SpriteRenderer ZST_SmartTile/Quadrant::sr
	SpriteRenderer_t1209076198 * ___sr_3;
	// UnityEngine.Sprite ZST_SmartTile/Quadrant::rolledSprite_center
	Sprite_t309593783 * ___rolledSprite_center_4;
	// UnityEngine.Sprite ZST_SmartTile/Quadrant::rolledSprite_side
	Sprite_t309593783 * ___rolledSprite_side_5;
	// UnityEngine.Sprite ZST_SmartTile/Quadrant::rolledSprite_cornerConvex
	Sprite_t309593783 * ___rolledSprite_cornerConvex_6;
	// UnityEngine.Sprite ZST_SmartTile/Quadrant::rolledSprite_cornerConcave
	Sprite_t309593783 * ___rolledSprite_cornerConcave_7;

public:
	inline static int32_t get_offset_of_dir_0() { return static_cast<int32_t>(offsetof(Quadrant_t4284846640, ___dir_0)); }
	inline int32_t get_dir_0() const { return ___dir_0; }
	inline int32_t* get_address_of_dir_0() { return &___dir_0; }
	inline void set_dir_0(int32_t value)
	{
		___dir_0 = value;
	}

	inline static int32_t get_offset_of_startRot_1() { return static_cast<int32_t>(offsetof(Quadrant_t4284846640, ___startRot_1)); }
	inline float get_startRot_1() const { return ___startRot_1; }
	inline float* get_address_of_startRot_1() { return &___startRot_1; }
	inline void set_startRot_1(float value)
	{
		___startRot_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(Quadrant_t4284846640, ___offset_2)); }
	inline Vector2_t2243707579  get_offset_2() const { return ___offset_2; }
	inline Vector2_t2243707579 * get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(Vector2_t2243707579  value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_sr_3() { return static_cast<int32_t>(offsetof(Quadrant_t4284846640, ___sr_3)); }
	inline SpriteRenderer_t1209076198 * get_sr_3() const { return ___sr_3; }
	inline SpriteRenderer_t1209076198 ** get_address_of_sr_3() { return &___sr_3; }
	inline void set_sr_3(SpriteRenderer_t1209076198 * value)
	{
		___sr_3 = value;
		Il2CppCodeGenWriteBarrier(&___sr_3, value);
	}

	inline static int32_t get_offset_of_rolledSprite_center_4() { return static_cast<int32_t>(offsetof(Quadrant_t4284846640, ___rolledSprite_center_4)); }
	inline Sprite_t309593783 * get_rolledSprite_center_4() const { return ___rolledSprite_center_4; }
	inline Sprite_t309593783 ** get_address_of_rolledSprite_center_4() { return &___rolledSprite_center_4; }
	inline void set_rolledSprite_center_4(Sprite_t309593783 * value)
	{
		___rolledSprite_center_4 = value;
		Il2CppCodeGenWriteBarrier(&___rolledSprite_center_4, value);
	}

	inline static int32_t get_offset_of_rolledSprite_side_5() { return static_cast<int32_t>(offsetof(Quadrant_t4284846640, ___rolledSprite_side_5)); }
	inline Sprite_t309593783 * get_rolledSprite_side_5() const { return ___rolledSprite_side_5; }
	inline Sprite_t309593783 ** get_address_of_rolledSprite_side_5() { return &___rolledSprite_side_5; }
	inline void set_rolledSprite_side_5(Sprite_t309593783 * value)
	{
		___rolledSprite_side_5 = value;
		Il2CppCodeGenWriteBarrier(&___rolledSprite_side_5, value);
	}

	inline static int32_t get_offset_of_rolledSprite_cornerConvex_6() { return static_cast<int32_t>(offsetof(Quadrant_t4284846640, ___rolledSprite_cornerConvex_6)); }
	inline Sprite_t309593783 * get_rolledSprite_cornerConvex_6() const { return ___rolledSprite_cornerConvex_6; }
	inline Sprite_t309593783 ** get_address_of_rolledSprite_cornerConvex_6() { return &___rolledSprite_cornerConvex_6; }
	inline void set_rolledSprite_cornerConvex_6(Sprite_t309593783 * value)
	{
		___rolledSprite_cornerConvex_6 = value;
		Il2CppCodeGenWriteBarrier(&___rolledSprite_cornerConvex_6, value);
	}

	inline static int32_t get_offset_of_rolledSprite_cornerConcave_7() { return static_cast<int32_t>(offsetof(Quadrant_t4284846640, ___rolledSprite_cornerConcave_7)); }
	inline Sprite_t309593783 * get_rolledSprite_cornerConcave_7() const { return ___rolledSprite_cornerConcave_7; }
	inline Sprite_t309593783 ** get_address_of_rolledSprite_cornerConcave_7() { return &___rolledSprite_cornerConcave_7; }
	inline void set_rolledSprite_cornerConcave_7(Sprite_t309593783 * value)
	{
		___rolledSprite_cornerConcave_7 = value;
		Il2CppCodeGenWriteBarrier(&___rolledSprite_cornerConcave_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
