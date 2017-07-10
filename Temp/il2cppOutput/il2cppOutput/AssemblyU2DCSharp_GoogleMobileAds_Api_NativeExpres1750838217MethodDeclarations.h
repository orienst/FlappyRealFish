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

// GoogleMobileAds.Api.NativeExpressAdView
struct NativeExpressAdView_t1750838217;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdSize
struct AdSize_t3231673570;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t347919082;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3179524098;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t3289624707;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t1756611910;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdSize3231673570.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdPosition2595513602.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdRequest3179524098.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_EventArgs3289624707.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdFailedToLo1756611910.h"

// System.Void GoogleMobileAds.Api.NativeExpressAdView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
extern "C"  void NativeExpressAdView__ctor_m2985724045 (NativeExpressAdView_t1750838217 * __this, String_t* ___adUnitId0, AdSize_t3231673570 * ___adSize1, int32_t ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdView_add_OnAdLoaded_m681678654 (NativeExpressAdView_t1750838217 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdView_remove_OnAdLoaded_m4186764681 (NativeExpressAdView_t1750838217 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void NativeExpressAdView_add_OnAdFailedToLoad_m1394953004 (NativeExpressAdView_t1750838217 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void NativeExpressAdView_remove_OnAdFailedToLoad_m2972087715 (NativeExpressAdView_t1750838217 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdView_add_OnAdOpening_m1932335477 (NativeExpressAdView_t1750838217 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdView_remove_OnAdOpening_m3301026256 (NativeExpressAdView_t1750838217 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdView_add_OnAdClosed_m3053385391 (NativeExpressAdView_t1750838217 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdView_remove_OnAdClosed_m2298429286 (NativeExpressAdView_t1750838217 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdView_add_OnAdLeavingApplication_m931414521 (NativeExpressAdView_t1750838217 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::remove_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdView_remove_OnAdLeavingApplication_m553460640 (NativeExpressAdView_t1750838217 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void NativeExpressAdView_LoadAd_m750568763 (NativeExpressAdView_t1750838217 * __this, AdRequest_t3179524098 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::Hide()
extern "C"  void NativeExpressAdView_Hide_m1634725371 (NativeExpressAdView_t1750838217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::Show()
extern "C"  void NativeExpressAdView_Show_m3855365338 (NativeExpressAdView_t1750838217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::Destroy()
extern "C"  void NativeExpressAdView_Destroy_m1245669941 (NativeExpressAdView_t1750838217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::<NativeExpressAdView>m__16(System.Object,System.EventArgs)
extern "C"  void NativeExpressAdView_U3CNativeExpressAdViewU3Em__16_m1855301982 (NativeExpressAdView_t1750838217 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::<NativeExpressAdView>m__17(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void NativeExpressAdView_U3CNativeExpressAdViewU3Em__17_m2858588622 (NativeExpressAdView_t1750838217 * __this, Il2CppObject * ___sender0, AdFailedToLoadEventArgs_t1756611910 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::<NativeExpressAdView>m__18(System.Object,System.EventArgs)
extern "C"  void NativeExpressAdView_U3CNativeExpressAdViewU3Em__18_m3354142432 (NativeExpressAdView_t1750838217 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::<NativeExpressAdView>m__19(System.Object,System.EventArgs)
extern "C"  void NativeExpressAdView_U3CNativeExpressAdViewU3Em__19_m4038573729 (NativeExpressAdView_t1750838217 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::<NativeExpressAdView>m__1A(System.Object,System.EventArgs)
extern "C"  void NativeExpressAdView_U3CNativeExpressAdViewU3Em__1A_m2675355305 (NativeExpressAdView_t1750838217 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
