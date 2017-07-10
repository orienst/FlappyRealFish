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

// UnityEngine.Advertisements.UnityAdsNative
struct UnityAdsNative_t3929010778;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertiseme1591511100.h"

// System.Void UnityEngine.Advertisements.UnityAdsNative::.ctor()
extern "C"  void UnityAdsNative__ctor_m1896064941 (UnityAdsNative_t3929010778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsNative::RegisterNative(System.String)
extern "C"  void UnityAdsNative_RegisterNative_m1442116391 (UnityAdsNative_t3929010778 * __this, String_t* ___extensionPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsNative::Init(System.String,System.Boolean)
extern "C"  void UnityAdsNative_Init_m503966922 (UnityAdsNative_t3929010778 * __this, String_t* ___gameId0, bool ___testModeEnabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsNative::CanShowAds(System.String)
extern "C"  bool UnityAdsNative_CanShowAds_m819958408 (UnityAdsNative_t3929010778 * __this, String_t* ___zoneId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsNative::SetLogLevel(UnityEngine.Advertisements.Advertisement/DebugLevel)
extern "C"  void UnityAdsNative_SetLogLevel_m382806635 (UnityAdsNative_t3929010778 * __this, int32_t ___logLevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsNative::SetCampaignDataURL(System.String)
extern "C"  void UnityAdsNative_SetCampaignDataURL_m2763296484 (UnityAdsNative_t3929010778 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsNative::Show(System.String,System.String)
extern "C"  bool UnityAdsNative_Show_m2987710586 (UnityAdsNative_t3929010778 * __this, String_t* ___zoneId0, String_t* ___gamerSid1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsNative::OnFetchCompleted()
extern "C"  void UnityAdsNative_OnFetchCompleted_m1509886233 (UnityAdsNative_t3929010778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsNative::OnFetchFailed()
extern "C"  void UnityAdsNative_OnFetchFailed_m2294113143 (UnityAdsNative_t3929010778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
