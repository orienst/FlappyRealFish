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

// ZST_SmartTile
struct ZST_SmartTile_t3295116049;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZST_SmartTile_CardinalDirection2226844457.h"
#include "AssemblyU2DCSharp_ZST_SmartTile_Coord3201679135.h"

// System.Void ZST_SmartTile::.ctor()
extern "C"  void ZST_SmartTile__ctor_m2465932410 (ZST_SmartTile_t3295116049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZST_SmartTile::.cctor()
extern "C"  void ZST_SmartTile__cctor_m3664989131 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZST_SmartTile::Start()
extern "C"  void ZST_SmartTile_Start_m254610562 (ZST_SmartTile_t3295116049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZST_SmartTile::Update()
extern "C"  void ZST_SmartTile_Update_m362092157 (ZST_SmartTile_t3295116049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZST_SmartTile::OnDrawGizmos()
extern "C"  void ZST_SmartTile_OnDrawGizmos_m2656569364 (ZST_SmartTile_t3295116049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZST_SmartTile::OnDestroy()
extern "C"  void ZST_SmartTile_OnDestroy_m3018826063 (ZST_SmartTile_t3295116049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZST_SmartTile::IsUnrolled()
extern "C"  bool ZST_SmartTile_IsUnrolled_m1020414473 (ZST_SmartTile_t3295116049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite ZST_SmartTile::RolledSprite(UnityEngine.Sprite[])
extern "C"  Sprite_t309593783 * ZST_SmartTile_RolledSprite_m1521200270 (ZST_SmartTile_t3295116049 * __this, SpriteU5BU5D_t3359083662* ___sprites0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZST_SmartTile::HasNeighbor(ZST_SmartTile/CardinalDirection)
extern "C"  bool ZST_SmartTile_HasNeighbor_m3005075119 (ZST_SmartTile_t3295116049 * __this, int32_t ___dir0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZST_SmartTile::UpdateSprite()
extern "C"  void ZST_SmartTile_UpdateSprite_m4289168752 (ZST_SmartTile_t3295116049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZST_SmartTile/Coord ZST_SmartTile::GetCoord()
extern "C"  Coord_t3201679135  ZST_SmartTile_GetCoord_m73316369 (ZST_SmartTile_t3295116049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZST_SmartTile::MarkAsMidUpdate()
extern "C"  void ZST_SmartTile_MarkAsMidUpdate_m507259290 (ZST_SmartTile_t3295116049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZST_SmartTile::RerollSprite()
extern "C"  void ZST_SmartTile_RerollSprite_m2578982139 (ZST_SmartTile_t3295116049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZST_SmartTile::HideOrShowChildren()
extern "C"  void ZST_SmartTile_HideOrShowChildren_m1521224469 (ZST_SmartTile_t3295116049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZST_SmartTile::HideChildren()
extern "C"  void ZST_SmartTile_HideChildren_m3557646163 (ZST_SmartTile_t3295116049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZST_SmartTile::HideOrShowChildrenHelper()
extern "C"  void ZST_SmartTile_HideOrShowChildrenHelper_m356023635 (ZST_SmartTile_t3295116049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZST_SmartTile::AreChildrenHidden()
extern "C"  bool ZST_SmartTile_AreChildrenHidden_m73106267 (ZST_SmartTile_t3295116049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
