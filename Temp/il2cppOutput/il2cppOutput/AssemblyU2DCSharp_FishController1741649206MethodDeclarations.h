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

// FishController
struct FishController_t1741649206;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// UnityEngine.Collider2D
struct Collider2D_t646061738;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"

// System.Void FishController::.ctor()
extern "C"  void FishController__ctor_m1952507527 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FishController::Awake()
extern "C"  void FishController_Awake_m62467954 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FishController::Start()
extern "C"  void FishController_Start_m85761091 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FishController::Update()
extern "C"  void FishController_Update_m1253097728 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FishController::Move()
extern "C"  void FishController_Move_m1788223648 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FishController::MovementRestriction(System.Single)
extern "C"  void FishController_MovementRestriction_m1481925401 (FishController_t1741649206 * __this, float ___moveSpeed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FishController::SetSpeed()
extern "C"  void FishController_SetSpeed_m631324862 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FishController::SetSpeed2(System.Single)
extern "C"  void FishController_SetSpeed2_m960161697 (FishController_t1741649206 * __this, float ___tmpSpeed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FishController::GetSpeed2()
extern "C"  float FishController_GetSpeed2_m3051711380 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FishController::UpPushDown()
extern "C"  void FishController_UpPushDown_m1016508520 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FishController::UpPushUp()
extern "C"  void FishController_UpPushUp_m1587158129 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FishController::DownPushDown()
extern "C"  void FishController_DownPushDown_m3272806737 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FishController::DownPushUp()
extern "C"  void FishController_DownPushUp_m2052200040 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FishController::LeftPushDown()
extern "C"  void FishController_LeftPushDown_m1043470584 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FishController::LeftPushUp()
extern "C"  void FishController_LeftPushUp_m3535320655 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FishController::RightPushDown()
extern "C"  void FishController_RightPushDown_m1906412835 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FishController::RightPushUp()
extern "C"  void FishController_RightPushUp_m209581982 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 FishController::GetScreenTopLeft()
extern "C"  Vector3_t2243707580  FishController_GetScreenTopLeft_m531587383 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 FishController::GetScreenBottomRight()
extern "C"  Vector3_t2243707580  FishController_GetScreenBottomRight_m4134372432 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FishController::GetIsDead()
extern "C"  bool FishController_GetIsDead_m3137849327 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FishController::GetIsClear()
extern "C"  bool FishController_GetIsClear_m2138559142 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FishController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void FishController_OnCollisionEnter2D_m1931559833 (FishController_t1741649206 * __this, Collision2D_t1539500754 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FishController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void FishController_OnTriggerEnter2D_m345003627 (FishController_t1741649206 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FishController::InitParam(System.Boolean)
extern "C"  void FishController_InitParam_m1815972053 (FishController_t1741649206 * __this, bool ___active0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FishController::GetDefaultSpeed()
extern "C"  float FishController_GetDefaultSpeed_m3232618235 (FishController_t1741649206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
