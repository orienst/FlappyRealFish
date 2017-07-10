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

// System.String
struct String_t;
// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_t1358843767;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertiseme1591511100.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertiseme1358843767.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisemen456670012.h"

// System.Void UnityEngine.Advertisements.Advertisement::.cctor()
extern "C"  void Advertisement__cctor_m1138733083 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::LoadRuntime()
extern "C"  void Advertisement_LoadRuntime_m3443607128 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::LoadEditor(System.String,System.Boolean)
extern "C"  void Advertisement_LoadEditor_m194636370 (Il2CppObject * __this /* static, unused */, String_t* ___extensionPath0, bool ___supportedPlatform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Load()
extern "C"  void Advertisement_Load_m2226383838 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_initializeOnStartup()
extern "C"  bool Advertisement_get_initializeOnStartup_m2175852553 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::RegisterNative()
extern "C"  void Advertisement_RegisterNative_m2478110156 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Advertisements.Advertisement/DebugLevel UnityEngine.Advertisements.Advertisement::get_debugLevel()
extern "C"  int32_t Advertisement_get_debugLevel_m1094088667 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::set_debugLevel(UnityEngine.Advertisements.Advertisement/DebugLevel)
extern "C"  void Advertisement_set_debugLevel_m2904975526 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isSupported()
extern "C"  bool Advertisement_get_isSupported_m1183881609 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsEnabled()
extern "C"  bool Advertisement_IsEnabled_m1631237063 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
extern "C"  bool Advertisement_get_isInitialized_m167127575 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String)
extern "C"  void Advertisement_Initialize_m1497874238 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean)
extern "C"  void Advertisement_Initialize_m2995186509 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, bool ___testMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Show()
extern "C"  void Advertisement_Show_m2036493855 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String)
extern "C"  void Advertisement_Show_m994665589 (Il2CppObject * __this /* static, unused */, String_t* ___zoneId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions)
extern "C"  void Advertisement_Show_m3789622005 (Il2CppObject * __this /* static, unused */, String_t* ___zoneId0, ShowOptions_t1358843767 * ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady()
extern "C"  bool Advertisement_IsReady_m876308337 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady(System.String)
extern "C"  bool Advertisement_IsReady_m1389121855 (Il2CppObject * __this /* static, unused */, String_t* ___zoneId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isShowing()
extern "C"  bool Advertisement_get_isShowing_m2678672924 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::SetCampaignDataURL(System.String)
extern "C"  void Advertisement_SetCampaignDataURL_m1645869985 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::OnHide()
extern "C"  void Advertisement_OnHide_m2012390653 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::OnShow()
extern "C"  void Advertisement_OnShow_m530994074 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::OnVideoCompleted(System.String,System.Boolean)
extern "C"  void Advertisement_OnVideoCompleted_m3089778134 (Il2CppObject * __this /* static, unused */, String_t* ___rewardItemKey0, bool ___skipped1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_testMode()
extern "C"  bool Advertisement_get_testMode_m1240196736 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.Advertisement::get_gameId()
extern "C"  String_t* Advertisement_get_gameId_m3262742795 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::DeliverResult(UnityEngine.Advertisements.ShowResult)
extern "C"  void Advertisement_DeliverResult_m1285565465 (Il2CppObject * __this /* static, unused */, int32_t ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
