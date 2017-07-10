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

// GoogleMobileAds.Api.AdLoader/Builder
struct Builder_t54889671;
// System.String
struct String_t;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>
struct HashSet_1_t3722552280;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t362681087;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>
struct Dictionary_2_t3127549387;
// System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>
struct Action_2_t1212770125;
// GoogleMobileAds.Api.AdLoader
struct AdLoader_t554394170;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GoogleMobileAds.Api.AdLoader/Builder::.ctor(System.String)
extern "C"  void Builder__ctor_m1481964650 (Builder_t54889671 * __this, String_t* ___adUnitId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAds.Api.AdLoader/Builder::get_AdUnitId()
extern "C"  String_t* Builder_get_AdUnitId_m1953433636 (Builder_t54889671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader/Builder::set_AdUnitId(System.String)
extern "C"  void Builder_set_AdUnitId_m3544169243 (Builder_t54889671 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType> GoogleMobileAds.Api.AdLoader/Builder::get_AdTypes()
extern "C"  HashSet_1_t3722552280 * Builder_get_AdTypes_m2045627105 (Builder_t54889671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader/Builder::set_AdTypes(System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>)
extern "C"  void Builder_set_AdTypes_m3625012322 (Builder_t54889671 * __this, HashSet_1_t3722552280 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdLoader/Builder::get_TemplateIds()
extern "C"  HashSet_1_t362681087 * Builder_get_TemplateIds_m3744847114 (Builder_t54889671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader/Builder::set_TemplateIds(System.Collections.Generic.HashSet`1<System.String>)
extern "C"  void Builder_set_TemplateIds_m2131900443 (Builder_t54889671 * __this, HashSet_1_t362681087 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>> GoogleMobileAds.Api.AdLoader/Builder::get_CustomNativeTemplateClickHandlers()
extern "C"  Dictionary_2_t3127549387 * Builder_get_CustomNativeTemplateClickHandlers_m921107309 (Builder_t54889671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader/Builder::set_CustomNativeTemplateClickHandlers(System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>)
extern "C"  void Builder_set_CustomNativeTemplateClickHandlers_m579262094 (Builder_t54889671 * __this, Dictionary_2_t3127549387 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdLoader/Builder GoogleMobileAds.Api.AdLoader/Builder::ForCustomNativeAd(System.String)
extern "C"  Builder_t54889671 * Builder_ForCustomNativeAd_m3006744988 (Builder_t54889671 * __this, String_t* ___templateId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdLoader/Builder GoogleMobileAds.Api.AdLoader/Builder::ForCustomNativeAd(System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>)
extern "C"  Builder_t54889671 * Builder_ForCustomNativeAd_m4081723369 (Builder_t54889671 * __this, String_t* ___templateId0, Action_2_t1212770125 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdLoader GoogleMobileAds.Api.AdLoader/Builder::Build()
extern "C"  AdLoader_t554394170 * Builder_Build_m955117412 (Builder_t54889671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
