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

// GoogleMobileAds.Api.BannerView
struct BannerView_t1745853549;
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

// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
extern "C"  void BannerView__ctor_m2575157499 (BannerView_t1745853549 * __this, String_t* ___adUnitId0, AdSize_t3231673570 * ___adSize1, int32_t ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerView_add_OnAdLoaded_m1495173038 (BannerView_t1745853549 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerView_remove_OnAdLoaded_m265172007 (BannerView_t1745853549 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void BannerView_add_OnAdFailedToLoad_m4144524800 (BannerView_t1745853549 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void BannerView_remove_OnAdFailedToLoad_m2940373033 (BannerView_t1745853549 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerView_add_OnAdOpening_m2407715059 (BannerView_t1745853549 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerView_remove_OnAdOpening_m2728564176 (BannerView_t1745853549 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerView_add_OnAdClosed_m2198341577 (BannerView_t1745853549 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerView_remove_OnAdClosed_m1337437838 (BannerView_t1745853549 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerView_add_OnAdLeavingApplication_m1051344763 (BannerView_t1745853549 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerView_remove_OnAdLeavingApplication_m3138075220 (BannerView_t1745853549 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void BannerView_LoadAd_m2875546417 (BannerView_t1745853549 * __this, AdRequest_t3179524098 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::Hide()
extern "C"  void BannerView_Hide_m2783735441 (BannerView_t1745853549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::Show()
extern "C"  void BannerView_Show_m2333686166 (BannerView_t1745853549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::Destroy()
extern "C"  void BannerView_Destroy_m756372983 (BannerView_t1745853549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<OnAdLoaded>m__2(System.Object,System.EventArgs)
extern "C"  void BannerView_U3COnAdLoadedU3Em__2_m1776631829 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t3289624707 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<OnAdFailedToLoad>m__3(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void BannerView_U3COnAdFailedToLoadU3Em__3_m151376180 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, AdFailedToLoadEventArgs_t1756611910 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<OnAdOpening>m__4(System.Object,System.EventArgs)
extern "C"  void BannerView_U3COnAdOpeningU3Em__4_m4160565814 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t3289624707 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<OnAdClosed>m__5(System.Object,System.EventArgs)
extern "C"  void BannerView_U3COnAdClosedU3Em__5_m1356738087 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t3289624707 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<OnAdLeavingApplication>m__6(System.Object,System.EventArgs)
extern "C"  void BannerView_U3COnAdLeavingApplicationU3Em__6_m849567534 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t3289624707 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<BannerView>m__7(System.Object,System.EventArgs)
extern "C"  void BannerView_U3CBannerViewU3Em__7_m958870254 (BannerView_t1745853549 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<BannerView>m__8(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void BannerView_U3CBannerViewU3Em__8_m2816089180 (BannerView_t1745853549 * __this, Il2CppObject * ___sender0, AdFailedToLoadEventArgs_t1756611910 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<BannerView>m__9(System.Object,System.EventArgs)
extern "C"  void BannerView_U3CBannerViewU3Em__9_m2659788708 (BannerView_t1745853549 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<BannerView>m__A(System.Object,System.EventArgs)
extern "C"  void BannerView_U3CBannerViewU3Em__A_m2008290012 (BannerView_t1745853549 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<BannerView>m__B(System.Object,System.EventArgs)
extern "C"  void BannerView_U3CBannerViewU3Em__B_m2503372471 (BannerView_t1745853549 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
