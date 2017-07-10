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

// UnityEngine.Advertisements.UnityAdsEditor
struct UnityAdsEditor_t1440819734;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Action`1<UnityEngine.WWW>
struct Action_1_t2721744421;
// UnityEngine.WWW
struct WWW_t2919945039;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t2981295538;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_WWW2919945039.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertiseme1591511100.h"

// System.Void UnityEngine.Advertisements.UnityAdsEditor::.ctor()
extern "C"  void UnityAdsEditor__ctor_m1232485421 (UnityAdsEditor_t1440819734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::RegisterNative(System.String)
extern "C"  void UnityAdsEditor_RegisterNative_m1539375443 (UnityAdsEditor_t1440819734 * __this, String_t* ___extensionPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::Init(System.String,System.Boolean)
extern "C"  void UnityAdsEditor_Init_m1905247856 (UnityAdsEditor_t1440819734 * __this, String_t* ___gameId0, bool ___testModeEnabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Advertisements.UnityAdsEditor::GetAdPlan(System.String,System.Action`1<UnityEngine.WWW>)
extern "C"  Il2CppObject * UnityAdsEditor_GetAdPlan_m1254245195 (UnityAdsEditor_t1440819734 * __this, String_t* ___URL0, Action_1_t2721744421 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::HandleResponse(UnityEngine.WWW)
extern "C"  void UnityAdsEditor_HandleResponse_m3310519774 (UnityAdsEditor_t1440819734 * __this, WWW_t2919945039 * ___www0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> UnityEngine.Advertisements.UnityAdsEditor::CollectZoneIds(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject* UnityAdsEditor_CollectZoneIds_m2096882927 (UnityAdsEditor_t1440819734 * __this, Il2CppObject* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsEditor::CanShowAds(System.String)
extern "C"  bool UnityAdsEditor_CanShowAds_m1564114482 (UnityAdsEditor_t1440819734 * __this, String_t* ___zoneId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::SetLogLevel(UnityEngine.Advertisements.Advertisement/DebugLevel)
extern "C"  void UnityAdsEditor_SetLogLevel_m2764409263 (UnityAdsEditor_t1440819734 * __this, int32_t ___logLevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::SetCampaignDataURL(System.String)
extern "C"  void UnityAdsEditor_SetCampaignDataURL_m4255293782 (UnityAdsEditor_t1440819734 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsEditor::Show(System.String,System.String)
extern "C"  bool UnityAdsEditor_Show_m32614720 (UnityAdsEditor_t1440819734 * __this, String_t* ___zoneId0, String_t* ___gamerSid1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
