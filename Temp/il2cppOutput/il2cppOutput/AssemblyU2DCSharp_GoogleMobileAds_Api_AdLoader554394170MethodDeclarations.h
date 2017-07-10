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

// GoogleMobileAds.Api.AdLoader
struct AdLoader_t554394170;
// GoogleMobileAds.Api.AdLoader/Builder
struct Builder_t54889671;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t347919082;
// System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>
struct EventHandler_1_t1249765249;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>
struct Dictionary_2_t3127549387;
// System.String
struct String_t;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>
struct HashSet_1_t3722552280;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t362681087;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3179524098;
// System.Object
struct Il2CppObject;
// GoogleMobileAds.Api.CustomNativeEventArgs
struct CustomNativeEventArgs_t2658458077;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t1756611910;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdLoader_Build54889671.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdRequest3179524098.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_CustomNative2658458077.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdFailedToLo1756611910.h"

// System.Void GoogleMobileAds.Api.AdLoader::.ctor(GoogleMobileAds.Api.AdLoader/Builder)
extern "C"  void AdLoader__ctor_m169349673 (AdLoader_t554394170 * __this, Builder_t54889671 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void AdLoader_add_OnAdFailedToLoad_m2791282459 (AdLoader_t554394170 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void AdLoader_remove_OnAdFailedToLoad_m2712241714 (AdLoader_t554394170 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::add_OnCustomNativeTemplateAdLoaded(System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>)
extern "C"  void AdLoader_add_OnCustomNativeTemplateAdLoaded_m1361788253 (AdLoader_t554394170 * __this, EventHandler_1_t1249765249 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::remove_OnCustomNativeTemplateAdLoaded(System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>)
extern "C"  void AdLoader_remove_OnCustomNativeTemplateAdLoaded_m3831193242 (AdLoader_t554394170 * __this, EventHandler_1_t1249765249 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>> GoogleMobileAds.Api.AdLoader::get_CustomNativeTemplateClickHandlers()
extern "C"  Dictionary_2_t3127549387 * AdLoader_get_CustomNativeTemplateClickHandlers_m321816099 (AdLoader_t554394170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::set_CustomNativeTemplateClickHandlers(System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>)
extern "C"  void AdLoader_set_CustomNativeTemplateClickHandlers_m2573068714 (AdLoader_t554394170 * __this, Dictionary_2_t3127549387 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAds.Api.AdLoader::get_AdUnitId()
extern "C"  String_t* AdLoader_get_AdUnitId_m1583605364 (AdLoader_t554394170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::set_AdUnitId(System.String)
extern "C"  void AdLoader_set_AdUnitId_m3775194653 (AdLoader_t554394170 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType> GoogleMobileAds.Api.AdLoader::get_AdTypes()
extern "C"  HashSet_1_t3722552280 * AdLoader_get_AdTypes_m704822171 (AdLoader_t554394170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::set_AdTypes(System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>)
extern "C"  void AdLoader_set_AdTypes_m1469440922 (AdLoader_t554394170 * __this, HashSet_1_t3722552280 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdLoader::get_TemplateIds()
extern "C"  HashSet_1_t362681087 * AdLoader_get_TemplateIds_m1235228650 (AdLoader_t554394170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::set_TemplateIds(System.Collections.Generic.HashSet`1<System.String>)
extern "C"  void AdLoader_set_TemplateIds_m3082514565 (AdLoader_t554394170 * __this, HashSet_1_t362681087 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void AdLoader_LoadAd_m823609754 (AdLoader_t554394170 * __this, AdRequest_t3179524098 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::<AdLoader>m__0(System.Object,GoogleMobileAds.Api.CustomNativeEventArgs)
extern "C"  void AdLoader_U3CAdLoaderU3Em__0_m3328535755 (AdLoader_t554394170 * __this, Il2CppObject * ___sender0, CustomNativeEventArgs_t2658458077 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::<AdLoader>m__1(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void AdLoader_U3CAdLoaderU3Em__1_m2365681587 (AdLoader_t554394170 * __this, Il2CppObject * ___sender0, AdFailedToLoadEventArgs_t1756611910 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
