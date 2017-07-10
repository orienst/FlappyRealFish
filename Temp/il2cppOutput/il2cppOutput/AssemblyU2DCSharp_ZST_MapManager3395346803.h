#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ZST_MapManager
struct ZST_MapManager_t3395346803;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t362681087;
// System.Collections.Generic.HashSet`1<ZST_SmartTile>
struct HashSet_1_t1628576903;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZST_MapManager
struct  ZST_MapManager_t3395346803  : public Il2CppObject
{
public:
	// System.Boolean ZST_MapManager::isMidUpdate
	bool ___isMidUpdate_1;
	// System.Collections.Generic.HashSet`1<System.String> ZST_MapManager::updateTags
	HashSet_1_t362681087 * ___updateTags_2;
	// System.Collections.Generic.HashSet`1<ZST_SmartTile> ZST_MapManager::tiles
	HashSet_1_t1628576903 * ___tiles_3;

public:
	inline static int32_t get_offset_of_isMidUpdate_1() { return static_cast<int32_t>(offsetof(ZST_MapManager_t3395346803, ___isMidUpdate_1)); }
	inline bool get_isMidUpdate_1() const { return ___isMidUpdate_1; }
	inline bool* get_address_of_isMidUpdate_1() { return &___isMidUpdate_1; }
	inline void set_isMidUpdate_1(bool value)
	{
		___isMidUpdate_1 = value;
	}

	inline static int32_t get_offset_of_updateTags_2() { return static_cast<int32_t>(offsetof(ZST_MapManager_t3395346803, ___updateTags_2)); }
	inline HashSet_1_t362681087 * get_updateTags_2() const { return ___updateTags_2; }
	inline HashSet_1_t362681087 ** get_address_of_updateTags_2() { return &___updateTags_2; }
	inline void set_updateTags_2(HashSet_1_t362681087 * value)
	{
		___updateTags_2 = value;
		Il2CppCodeGenWriteBarrier(&___updateTags_2, value);
	}

	inline static int32_t get_offset_of_tiles_3() { return static_cast<int32_t>(offsetof(ZST_MapManager_t3395346803, ___tiles_3)); }
	inline HashSet_1_t1628576903 * get_tiles_3() const { return ___tiles_3; }
	inline HashSet_1_t1628576903 ** get_address_of_tiles_3() { return &___tiles_3; }
	inline void set_tiles_3(HashSet_1_t1628576903 * value)
	{
		___tiles_3 = value;
		Il2CppCodeGenWriteBarrier(&___tiles_3, value);
	}
};

struct ZST_MapManager_t3395346803_StaticFields
{
public:
	// ZST_MapManager ZST_MapManager::SharedInstance
	ZST_MapManager_t3395346803 * ___SharedInstance_0;

public:
	inline static int32_t get_offset_of_SharedInstance_0() { return static_cast<int32_t>(offsetof(ZST_MapManager_t3395346803_StaticFields, ___SharedInstance_0)); }
	inline ZST_MapManager_t3395346803 * get_SharedInstance_0() const { return ___SharedInstance_0; }
	inline ZST_MapManager_t3395346803 ** get_address_of_SharedInstance_0() { return &___SharedInstance_0; }
	inline void set_SharedInstance_0(ZST_MapManager_t3395346803 * value)
	{
		___SharedInstance_0 = value;
		Il2CppCodeGenWriteBarrier(&___SharedInstance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
