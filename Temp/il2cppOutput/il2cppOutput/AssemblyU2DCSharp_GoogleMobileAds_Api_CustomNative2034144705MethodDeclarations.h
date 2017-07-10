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

// GoogleMobileAds.Api.CustomNativeTemplateAd
struct CustomNativeTemplateAd_t2034144705;
// GoogleMobileAds.Common.ICustomNativeTemplateClient
struct ICustomNativeTemplateClient_t2219516540;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GoogleMobileAds.Api.CustomNativeTemplateAd::.ctor(GoogleMobileAds.Common.ICustomNativeTemplateClient)
extern "C"  void CustomNativeTemplateAd__ctor_m2726896179 (CustomNativeTemplateAd_t2034144705 * __this, Il2CppObject * ___client0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.CustomNativeTemplateAd::GetAvailableAssetNames()
extern "C"  List_1_t1398341365 * CustomNativeTemplateAd_GetAvailableAssetNames_m469018179 (CustomNativeTemplateAd_t2034144705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAds.Api.CustomNativeTemplateAd::GetCustomTemplateId()
extern "C"  String_t* CustomNativeTemplateAd_GetCustomTemplateId_m1032345016 (CustomNativeTemplateAd_t2034144705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GoogleMobileAds.Api.CustomNativeTemplateAd::GetTexture2D(System.String)
extern "C"  Texture2D_t3542995729 * CustomNativeTemplateAd_GetTexture2D_m2692576775 (CustomNativeTemplateAd_t2034144705 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAds.Api.CustomNativeTemplateAd::GetText(System.String)
extern "C"  String_t* CustomNativeTemplateAd_GetText_m2583392535 (CustomNativeTemplateAd_t2034144705 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.CustomNativeTemplateAd::PerformClick(System.String)
extern "C"  void CustomNativeTemplateAd_PerformClick_m2955304034 (CustomNativeTemplateAd_t2034144705 * __this, String_t* ___assetName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.CustomNativeTemplateAd::RecordImpression()
extern "C"  void CustomNativeTemplateAd_RecordImpression_m3705781253 (CustomNativeTemplateAd_t2034144705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
