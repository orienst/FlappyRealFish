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

// GoogleMobileAds.iOS.InterstitialClient
struct InterstitialClient_t2538051773;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t347919082;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3179524098;
// GoogleMobileAds.Api.IDefaultInAppPurchaseProcessor
struct IDefaultInAppPurchaseProcessor_t115417181;
// GoogleMobileAds.Api.ICustomInAppPurchaseProcessor
struct ICustomInAppPurchaseProcessor_t3097491683;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdRequest3179524098.h"

// System.Void GoogleMobileAds.iOS.InterstitialClient::.ctor()
extern "C"  void InterstitialClient__ctor_m4141611540 (InterstitialClient_t2538051773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_add_OnAdLoaded_m631394883 (InterstitialClient_t2538051773 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_remove_OnAdLoaded_m1869180572 (InterstitialClient_t2538051773 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void InterstitialClient_add_OnAdFailedToLoad_m1376709973 (InterstitialClient_t2538051773 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void InterstitialClient_remove_OnAdFailedToLoad_m1985877226 (InterstitialClient_t2538051773 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_add_OnAdOpening_m1357959240 (InterstitialClient_t2538051773 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_remove_OnAdOpening_m1833940947 (InterstitialClient_t2538051773 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::add_OnAdClosing(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_add_OnAdClosing_m486193971 (InterstitialClient_t2538051773 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::remove_OnAdClosing(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_remove_OnAdClosing_m2667936178 (InterstitialClient_t2538051773 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_add_OnAdClosed_m3895045478 (InterstitialClient_t2538051773 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_remove_OnAdClosed_m3744333453 (InterstitialClient_t2538051773 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_add_OnAdLeavingApplication_m3826891516 (InterstitialClient_t2538051773 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::remove_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_remove_OnAdLeavingApplication_m1514718523 (InterstitialClient_t2538051773 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.InterstitialClient::get_InterstitialPtr()
extern "C"  IntPtr_t InterstitialClient_get_InterstitialPtr_m3125509604 (InterstitialClient_t2538051773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::set_InterstitialPtr(System.IntPtr)
extern "C"  void InterstitialClient_set_InterstitialPtr_m3593137013 (InterstitialClient_t2538051773 * __this, IntPtr_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::CreateInterstitialAd(System.String)
extern "C"  void InterstitialClient_CreateInterstitialAd_m1810278359 (InterstitialClient_t2538051773 * __this, String_t* ___adUnitId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void InterstitialClient_LoadAd_m96394834 (InterstitialClient_t2538051773 * __this, AdRequest_t3179524098 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.iOS.InterstitialClient::IsLoaded()
extern "C"  bool InterstitialClient_IsLoaded_m1162014535 (InterstitialClient_t2538051773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::ShowInterstitial()
extern "C"  void InterstitialClient_ShowInterstitial_m3284638935 (InterstitialClient_t2538051773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::DestroyInterstitial()
extern "C"  void InterstitialClient_DestroyInterstitial_m1558491072 (InterstitialClient_t2538051773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::Dispose()
extern "C"  void InterstitialClient_Dispose_m2863893085 (InterstitialClient_t2538051773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::Finalize()
extern "C"  void InterstitialClient_Finalize_m2261911360 (InterstitialClient_t2538051773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::SetDefaultInAppPurchaseProcessor(GoogleMobileAds.Api.IDefaultInAppPurchaseProcessor)
extern "C"  void InterstitialClient_SetDefaultInAppPurchaseProcessor_m2755426796 (InterstitialClient_t2538051773 * __this, Il2CppObject * ___processor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::SetCustomInAppPurchaseProcessor(GoogleMobileAds.Api.ICustomInAppPurchaseProcessor)
extern "C"  void InterstitialClient_SetCustomInAppPurchaseProcessor_m1364026692 (InterstitialClient_t2538051773 * __this, Il2CppObject * ___processor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::InterstitialDidReceiveAdCallback(System.IntPtr)
extern "C"  void InterstitialClient_InterstitialDidReceiveAdCallback_m1671135702 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitialClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InterstitialClient_InterstitialDidReceiveAdCallback_m1671135702(intptr_t ___interstitialClient0);
// System.Void GoogleMobileAds.iOS.InterstitialClient::InterstitialDidFailToReceiveAdWithErrorCallback(System.IntPtr,System.String)
extern "C"  void InterstitialClient_InterstitialDidFailToReceiveAdWithErrorCallback_m3650722577 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitialClient0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InterstitialClient_InterstitialDidFailToReceiveAdWithErrorCallback_m3650722577(intptr_t ___interstitialClient0, char* ___error1);
// System.Void GoogleMobileAds.iOS.InterstitialClient::InterstitialWillPresentScreenCallback(System.IntPtr)
extern "C"  void InterstitialClient_InterstitialWillPresentScreenCallback_m2670814420 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitialClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InterstitialClient_InterstitialWillPresentScreenCallback_m2670814420(intptr_t ___interstitialClient0);
// System.Void GoogleMobileAds.iOS.InterstitialClient::InterstitialDidDismissScreenCallback(System.IntPtr)
extern "C"  void InterstitialClient_InterstitialDidDismissScreenCallback_m966792742 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitialClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InterstitialClient_InterstitialDidDismissScreenCallback_m966792742(intptr_t ___interstitialClient0);
// System.Void GoogleMobileAds.iOS.InterstitialClient::InterstitialWillLeaveApplicationCallback(System.IntPtr)
extern "C"  void InterstitialClient_InterstitialWillLeaveApplicationCallback_m3418315950 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitialClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InterstitialClient_InterstitialWillLeaveApplicationCallback_m3418315950(intptr_t ___interstitialClient0);
// GoogleMobileAds.iOS.InterstitialClient GoogleMobileAds.iOS.InterstitialClient::IntPtrToInterstitialClient(System.IntPtr)
extern "C"  InterstitialClient_t2538051773 * InterstitialClient_IntPtrToInterstitialClient_m1962818031 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitialClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
