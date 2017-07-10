#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// ZST_SnapToGrid
struct ZST_SnapToGrid_t3820998803;
// System.Collections.Generic.Dictionary`2<ZST_SmartTile/CardinalDirection,ZST_SmartTile/Coord>
struct Dictionary_2_t2599033213;
// ZST_SmartTile/CardinalDirection[]
struct CardinalDirectionU5BU5D_t3419928084;
// ZST_SmartTile/Quadrant[]
struct QuadrantU5BU5D_t3309727505;
// System.Collections.Generic.Dictionary`2<ZST_SmartTile/CardinalDirection,System.Boolean>
struct Dictionary_2_t3222928796;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZST_SmartTile
struct  ZST_SmartTile_t3295116049  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Color ZST_SmartTile::color
	Color_t2020392075  ___color_2;
	// System.Int32 ZST_SmartTile::orderInLayer
	int32_t ___orderInLayer_3;
	// System.String ZST_SmartTile::tileTag
	String_t* ___tileTag_4;
	// UnityEngine.Sprite[] ZST_SmartTile::sprites_center
	SpriteU5BU5D_t3359083662* ___sprites_center_5;
	// UnityEngine.Sprite[] ZST_SmartTile::sprites_side
	SpriteU5BU5D_t3359083662* ___sprites_side_6;
	// UnityEngine.Sprite[] ZST_SmartTile::sprites_cornerConvex
	SpriteU5BU5D_t3359083662* ___sprites_cornerConvex_7;
	// UnityEngine.Sprite[] ZST_SmartTile::sprites_cornerConcave
	SpriteU5BU5D_t3359083662* ___sprites_cornerConcave_8;
	// UnityEngine.Sprite[] ZST_SmartTile::sprites_center_Prev
	SpriteU5BU5D_t3359083662* ___sprites_center_Prev_9;
	// UnityEngine.Sprite[] ZST_SmartTile::sprites_side_Prev
	SpriteU5BU5D_t3359083662* ___sprites_side_Prev_10;
	// UnityEngine.Sprite[] ZST_SmartTile::sprites_cornerConvex_Prev
	SpriteU5BU5D_t3359083662* ___sprites_cornerConvex_Prev_11;
	// UnityEngine.Sprite[] ZST_SmartTile::sprites_cornerConcave_Prev
	SpriteU5BU5D_t3359083662* ___sprites_cornerConcave_Prev_12;
	// System.Boolean ZST_SmartTile::doReroll
	bool ___doReroll_13;
	// System.Boolean ZST_SmartTile::midUpdate
	bool ___midUpdate_14;
	// System.Boolean ZST_SmartTile::areChildrenHidden
	bool ___areChildrenHidden_15;
	// ZST_SnapToGrid ZST_SmartTile::snap
	ZST_SnapToGrid_t3820998803 * ___snap_16;
	// UnityEngine.Vector2 ZST_SmartTile::positionPrev
	Vector2_t2243707579  ___positionPrev_17;
	// ZST_SmartTile/Quadrant[] ZST_SmartTile::quadrants
	QuadrantU5BU5D_t3309727505* ___quadrants_20;
	// System.Collections.Generic.Dictionary`2<ZST_SmartTile/CardinalDirection,System.Boolean> ZST_SmartTile::hasNeighbor
	Dictionary_2_t3222928796 * ___hasNeighbor_21;

public:
	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049, ___color_2)); }
	inline Color_t2020392075  get_color_2() const { return ___color_2; }
	inline Color_t2020392075 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_t2020392075  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_orderInLayer_3() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049, ___orderInLayer_3)); }
	inline int32_t get_orderInLayer_3() const { return ___orderInLayer_3; }
	inline int32_t* get_address_of_orderInLayer_3() { return &___orderInLayer_3; }
	inline void set_orderInLayer_3(int32_t value)
	{
		___orderInLayer_3 = value;
	}

	inline static int32_t get_offset_of_tileTag_4() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049, ___tileTag_4)); }
	inline String_t* get_tileTag_4() const { return ___tileTag_4; }
	inline String_t** get_address_of_tileTag_4() { return &___tileTag_4; }
	inline void set_tileTag_4(String_t* value)
	{
		___tileTag_4 = value;
		Il2CppCodeGenWriteBarrier(&___tileTag_4, value);
	}

	inline static int32_t get_offset_of_sprites_center_5() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049, ___sprites_center_5)); }
	inline SpriteU5BU5D_t3359083662* get_sprites_center_5() const { return ___sprites_center_5; }
	inline SpriteU5BU5D_t3359083662** get_address_of_sprites_center_5() { return &___sprites_center_5; }
	inline void set_sprites_center_5(SpriteU5BU5D_t3359083662* value)
	{
		___sprites_center_5 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_center_5, value);
	}

	inline static int32_t get_offset_of_sprites_side_6() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049, ___sprites_side_6)); }
	inline SpriteU5BU5D_t3359083662* get_sprites_side_6() const { return ___sprites_side_6; }
	inline SpriteU5BU5D_t3359083662** get_address_of_sprites_side_6() { return &___sprites_side_6; }
	inline void set_sprites_side_6(SpriteU5BU5D_t3359083662* value)
	{
		___sprites_side_6 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_side_6, value);
	}

	inline static int32_t get_offset_of_sprites_cornerConvex_7() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049, ___sprites_cornerConvex_7)); }
	inline SpriteU5BU5D_t3359083662* get_sprites_cornerConvex_7() const { return ___sprites_cornerConvex_7; }
	inline SpriteU5BU5D_t3359083662** get_address_of_sprites_cornerConvex_7() { return &___sprites_cornerConvex_7; }
	inline void set_sprites_cornerConvex_7(SpriteU5BU5D_t3359083662* value)
	{
		___sprites_cornerConvex_7 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_cornerConvex_7, value);
	}

	inline static int32_t get_offset_of_sprites_cornerConcave_8() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049, ___sprites_cornerConcave_8)); }
	inline SpriteU5BU5D_t3359083662* get_sprites_cornerConcave_8() const { return ___sprites_cornerConcave_8; }
	inline SpriteU5BU5D_t3359083662** get_address_of_sprites_cornerConcave_8() { return &___sprites_cornerConcave_8; }
	inline void set_sprites_cornerConcave_8(SpriteU5BU5D_t3359083662* value)
	{
		___sprites_cornerConcave_8 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_cornerConcave_8, value);
	}

	inline static int32_t get_offset_of_sprites_center_Prev_9() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049, ___sprites_center_Prev_9)); }
	inline SpriteU5BU5D_t3359083662* get_sprites_center_Prev_9() const { return ___sprites_center_Prev_9; }
	inline SpriteU5BU5D_t3359083662** get_address_of_sprites_center_Prev_9() { return &___sprites_center_Prev_9; }
	inline void set_sprites_center_Prev_9(SpriteU5BU5D_t3359083662* value)
	{
		___sprites_center_Prev_9 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_center_Prev_9, value);
	}

	inline static int32_t get_offset_of_sprites_side_Prev_10() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049, ___sprites_side_Prev_10)); }
	inline SpriteU5BU5D_t3359083662* get_sprites_side_Prev_10() const { return ___sprites_side_Prev_10; }
	inline SpriteU5BU5D_t3359083662** get_address_of_sprites_side_Prev_10() { return &___sprites_side_Prev_10; }
	inline void set_sprites_side_Prev_10(SpriteU5BU5D_t3359083662* value)
	{
		___sprites_side_Prev_10 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_side_Prev_10, value);
	}

	inline static int32_t get_offset_of_sprites_cornerConvex_Prev_11() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049, ___sprites_cornerConvex_Prev_11)); }
	inline SpriteU5BU5D_t3359083662* get_sprites_cornerConvex_Prev_11() const { return ___sprites_cornerConvex_Prev_11; }
	inline SpriteU5BU5D_t3359083662** get_address_of_sprites_cornerConvex_Prev_11() { return &___sprites_cornerConvex_Prev_11; }
	inline void set_sprites_cornerConvex_Prev_11(SpriteU5BU5D_t3359083662* value)
	{
		___sprites_cornerConvex_Prev_11 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_cornerConvex_Prev_11, value);
	}

	inline static int32_t get_offset_of_sprites_cornerConcave_Prev_12() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049, ___sprites_cornerConcave_Prev_12)); }
	inline SpriteU5BU5D_t3359083662* get_sprites_cornerConcave_Prev_12() const { return ___sprites_cornerConcave_Prev_12; }
	inline SpriteU5BU5D_t3359083662** get_address_of_sprites_cornerConcave_Prev_12() { return &___sprites_cornerConcave_Prev_12; }
	inline void set_sprites_cornerConcave_Prev_12(SpriteU5BU5D_t3359083662* value)
	{
		___sprites_cornerConcave_Prev_12 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_cornerConcave_Prev_12, value);
	}

	inline static int32_t get_offset_of_doReroll_13() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049, ___doReroll_13)); }
	inline bool get_doReroll_13() const { return ___doReroll_13; }
	inline bool* get_address_of_doReroll_13() { return &___doReroll_13; }
	inline void set_doReroll_13(bool value)
	{
		___doReroll_13 = value;
	}

	inline static int32_t get_offset_of_midUpdate_14() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049, ___midUpdate_14)); }
	inline bool get_midUpdate_14() const { return ___midUpdate_14; }
	inline bool* get_address_of_midUpdate_14() { return &___midUpdate_14; }
	inline void set_midUpdate_14(bool value)
	{
		___midUpdate_14 = value;
	}

	inline static int32_t get_offset_of_areChildrenHidden_15() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049, ___areChildrenHidden_15)); }
	inline bool get_areChildrenHidden_15() const { return ___areChildrenHidden_15; }
	inline bool* get_address_of_areChildrenHidden_15() { return &___areChildrenHidden_15; }
	inline void set_areChildrenHidden_15(bool value)
	{
		___areChildrenHidden_15 = value;
	}

	inline static int32_t get_offset_of_snap_16() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049, ___snap_16)); }
	inline ZST_SnapToGrid_t3820998803 * get_snap_16() const { return ___snap_16; }
	inline ZST_SnapToGrid_t3820998803 ** get_address_of_snap_16() { return &___snap_16; }
	inline void set_snap_16(ZST_SnapToGrid_t3820998803 * value)
	{
		___snap_16 = value;
		Il2CppCodeGenWriteBarrier(&___snap_16, value);
	}

	inline static int32_t get_offset_of_positionPrev_17() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049, ___positionPrev_17)); }
	inline Vector2_t2243707579  get_positionPrev_17() const { return ___positionPrev_17; }
	inline Vector2_t2243707579 * get_address_of_positionPrev_17() { return &___positionPrev_17; }
	inline void set_positionPrev_17(Vector2_t2243707579  value)
	{
		___positionPrev_17 = value;
	}

	inline static int32_t get_offset_of_quadrants_20() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049, ___quadrants_20)); }
	inline QuadrantU5BU5D_t3309727505* get_quadrants_20() const { return ___quadrants_20; }
	inline QuadrantU5BU5D_t3309727505** get_address_of_quadrants_20() { return &___quadrants_20; }
	inline void set_quadrants_20(QuadrantU5BU5D_t3309727505* value)
	{
		___quadrants_20 = value;
		Il2CppCodeGenWriteBarrier(&___quadrants_20, value);
	}

	inline static int32_t get_offset_of_hasNeighbor_21() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049, ___hasNeighbor_21)); }
	inline Dictionary_2_t3222928796 * get_hasNeighbor_21() const { return ___hasNeighbor_21; }
	inline Dictionary_2_t3222928796 ** get_address_of_hasNeighbor_21() { return &___hasNeighbor_21; }
	inline void set_hasNeighbor_21(Dictionary_2_t3222928796 * value)
	{
		___hasNeighbor_21 = value;
		Il2CppCodeGenWriteBarrier(&___hasNeighbor_21, value);
	}
};

struct ZST_SmartTile_t3295116049_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ZST_SmartTile/CardinalDirection,ZST_SmartTile/Coord> ZST_SmartTile::dirsToCoordOffsets
	Dictionary_2_t2599033213 * ___dirsToCoordOffsets_18;
	// ZST_SmartTile/CardinalDirection[] ZST_SmartTile::spriteDirections
	CardinalDirectionU5BU5D_t3419928084* ___spriteDirections_19;

public:
	inline static int32_t get_offset_of_dirsToCoordOffsets_18() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049_StaticFields, ___dirsToCoordOffsets_18)); }
	inline Dictionary_2_t2599033213 * get_dirsToCoordOffsets_18() const { return ___dirsToCoordOffsets_18; }
	inline Dictionary_2_t2599033213 ** get_address_of_dirsToCoordOffsets_18() { return &___dirsToCoordOffsets_18; }
	inline void set_dirsToCoordOffsets_18(Dictionary_2_t2599033213 * value)
	{
		___dirsToCoordOffsets_18 = value;
		Il2CppCodeGenWriteBarrier(&___dirsToCoordOffsets_18, value);
	}

	inline static int32_t get_offset_of_spriteDirections_19() { return static_cast<int32_t>(offsetof(ZST_SmartTile_t3295116049_StaticFields, ___spriteDirections_19)); }
	inline CardinalDirectionU5BU5D_t3419928084* get_spriteDirections_19() const { return ___spriteDirections_19; }
	inline CardinalDirectionU5BU5D_t3419928084** get_address_of_spriteDirections_19() { return &___spriteDirections_19; }
	inline void set_spriteDirections_19(CardinalDirectionU5BU5D_t3419928084* value)
	{
		___spriteDirections_19 = value;
		Il2CppCodeGenWriteBarrier(&___spriteDirections_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
