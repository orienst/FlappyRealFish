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

// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t3805611425;
// System.String
struct String_t;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t347919082;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3179524098;
// GoogleMobileAds.Api.IDefaultInAppPurchaseProcessor
struct IDefaultInAppPurchaseProcessor_t115417181;
// GoogleMobileAds.Api.ICustomInAppPurchaseProcessor
struct ICustomInAppPurchaseProcessor_t3097491683;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t3289624707;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t1756611910;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdRequest3179524098.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_EventArgs3289624707.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdFailedToLo1756611910.h"

// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
extern "C"  void InterstitialAd__ctor_m2702976997 (InterstitialAd_t3805611425 * __this, String_t* ___adUnitId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_add_OnAdLoaded_m1716245826 (InterstitialAd_t3805611425 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_remove_OnAdLoaded_m3884721129 (InterstitialAd_t3805611425 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void InterstitialAd_add_OnAdFailedToLoad_m2604002624 (InterstitialAd_t3805611425 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void InterstitialAd_remove_OnAdFailedToLoad_m1154787083 (InterstitialAd_t3805611425 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_add_OnAdOpening_m1221536285 (InterstitialAd_t3805611425 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_remove_OnAdOpening_m1329458460 (InterstitialAd_t3805611425 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_add_OnAdClosed_m230087679 (InterstitialAd_t3805611425 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_remove_OnAdClosed_m3208324866 (InterstitialAd_t3805611425 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_add_OnAdLeavingApplication_m1199500361 (InterstitialAd_t3805611425 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_remove_OnAdLeavingApplication_m3905181332 (InterstitialAd_t3805611425 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void InterstitialAd_LoadAd_m2734591571 (InterstitialAd_t3805611425 * __this, AdRequest_t3179524098 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
extern "C"  bool InterstitialAd_IsLoaded_m3944774772 (InterstitialAd_t3805611425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
extern "C"  void InterstitialAd_Show_m2770889846 (InterstitialAd_t3805611425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::Destroy()
extern "C"  void InterstitialAd_Destroy_m2420841909 (InterstitialAd_t3805611425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::SetInAppPurchaseProcessor(GoogleMobileAds.Api.IDefaultInAppPurchaseProcessor)
extern "C"  void InterstitialAd_SetInAppPurchaseProcessor_m1650852140 (InterstitialAd_t3805611425 * __this, Il2CppObject * ___processor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::SetInAppPurchaseProcessor(GoogleMobileAds.Api.ICustomInAppPurchaseProcessor)
extern "C"  void InterstitialAd_SetInAppPurchaseProcessor_m2087578768 (InterstitialAd_t3805611425 * __this, Il2CppObject * ___processor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<OnAdLoaded>m__C(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3COnAdLoadedU3Em__C_m4070704628 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t3289624707 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<OnAdFailedToLoad>m__D(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void InterstitialAd_U3COnAdFailedToLoadU3Em__D_m2341299027 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, AdFailedToLoadEventArgs_t1756611910 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<OnAdOpening>m__E(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3COnAdOpeningU3Em__E_m866348731 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t3289624707 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<OnAdClosed>m__F(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3COnAdClosedU3Em__F_m2880598036 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t3289624707 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<OnAdLeavingApplication>m__10(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3COnAdLeavingApplicationU3Em__10_m2750776427 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t3289624707 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__11(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3CInterstitialAdU3Em__11_m1588727145 (InterstitialAd_t3805611425 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__12(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void InterstitialAd_U3CInterstitialAdU3Em__12_m329957337 (InterstitialAd_t3805611425 * __this, Il2CppObject * ___sender0, AdFailedToLoadEventArgs_t1756611910 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__13(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3CInterstitialAdU3Em__13_m629475559 (InterstitialAd_t3805611425 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__14(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3CInterstitialAdU3Em__14_m3865526062 (InterstitialAd_t3805611425 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__15(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3CInterstitialAdU3Em__15_m3533318765 (InterstitialAd_t3805611425 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
