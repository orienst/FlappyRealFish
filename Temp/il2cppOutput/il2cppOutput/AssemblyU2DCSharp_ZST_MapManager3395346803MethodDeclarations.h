#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ZST_MapManager
struct ZST_MapManager_t3395346803;
// System.String
struct String_t;
// ZST_SmartTile
struct ZST_SmartTile_t3295116049;
// System.Collections.Generic.HashSet`1<ZST_SmartTile/Coord>
struct HashSet_1_t1535139989;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_ZST_SmartTile3295116049.h"

// System.Void ZST_MapManager::.ctor()
extern "C"  void ZST_MapManager__ctor_m3647583850 (ZST_MapManager_t3395346803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZST_MapManager::.cctor()
extern "C"  void ZST_MapManager__cctor_m4148775053 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZST_MapManager::AddUpdateTag(System.String)
extern "C"  void ZST_MapManager_AddUpdateTag_m1137820984 (ZST_MapManager_t3395346803 * __this, String_t* ___updateTag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZST_MapManager::AddTile(ZST_SmartTile)
extern "C"  void ZST_MapManager_AddTile_m2922630244 (ZST_MapManager_t3395346803 * __this, ZST_SmartTile_t3295116049 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZST_MapManager::RemoveTile(ZST_SmartTile)
extern "C"  void ZST_MapManager_RemoveTile_m1004861327 (ZST_MapManager_t3395346803 * __this, ZST_SmartTile_t3295116049 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZST_MapManager::HardReloadTiles()
extern "C"  void ZST_MapManager_HardReloadTiles_m2943776715 (ZST_MapManager_t3395346803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZST_MapManager::Update()
extern "C"  void ZST_MapManager_Update_m1359692859 (ZST_MapManager_t3395346803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZST_MapManager::HasNeighbor(System.Int32,System.Int32,System.Collections.Generic.HashSet`1<ZST_SmartTile/Coord>)
extern "C"  bool ZST_MapManager_HasNeighbor_m4028595231 (ZST_MapManager_t3395346803 * __this, int32_t ___row0, int32_t ___col1, HashSet_1_t1535139989 * ___occupiedCoords2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
