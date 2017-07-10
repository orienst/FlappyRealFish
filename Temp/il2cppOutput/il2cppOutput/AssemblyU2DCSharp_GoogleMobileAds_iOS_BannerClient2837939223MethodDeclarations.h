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

// GoogleMobileAds.iOS.BannerClient
struct BannerClient_t2837939223;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t347919082;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdSize
struct AdSize_t3231673570;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3179524098;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdSize3231673570.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdPosition2595513602.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdRequest3179524098.h"

// System.Void GoogleMobileAds.iOS.BannerClient::.ctor()
extern "C"  void BannerClient__ctor_m2481241616 (BannerClient_t2837939223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerClient_add_OnAdLoaded_m3404890629 (BannerClient_t2837939223 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerClient_remove_OnAdLoaded_m381236424 (BannerClient_t2837939223 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void BannerClient_add_OnAdFailedToLoad_m1574977855 (BannerClient_t2837939223 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void BannerClient_remove_OnAdFailedToLoad_m3475727794 (BannerClient_t2837939223 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerClient_add_OnAdOpening_m882322988 (BannerClient_t2837939223 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerClient_remove_OnAdOpening_m1699502545 (BannerClient_t2837939223 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerClient_add_OnAdClosed_m2958854570 (BannerClient_t2837939223 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerClient_remove_OnAdClosed_m2279163127 (BannerClient_t2837939223 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerClient_add_OnAdLeavingApplication_m1434993668 (BannerClient_t2837939223 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::remove_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerClient_remove_OnAdLeavingApplication_m1767128341 (BannerClient_t2837939223 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.BannerClient::get_BannerViewPtr()
extern "C"  IntPtr_t BannerClient_get_BannerViewPtr_m2438811079 (BannerClient_t2837939223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::set_BannerViewPtr(System.IntPtr)
extern "C"  void BannerClient_set_BannerViewPtr_m2995885214 (BannerClient_t2837939223 * __this, IntPtr_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
extern "C"  void BannerClient_CreateBannerView_m716629851 (BannerClient_t2837939223 * __this, String_t* ___adUnitId0, AdSize_t3231673570 * ___adSize1, int32_t ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void BannerClient_LoadAd_m1131028634 (BannerClient_t2837939223 * __this, AdRequest_t3179524098 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::ShowBannerView()
extern "C"  void BannerClient_ShowBannerView_m101558980 (BannerClient_t2837939223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::HideBannerView()
extern "C"  void BannerClient_HideBannerView_m3038762985 (BannerClient_t2837939223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::DestroyBannerView()
extern "C"  void BannerClient_DestroyBannerView_m2490812799 (BannerClient_t2837939223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::Dispose()
extern "C"  void BannerClient_Dispose_m1738326179 (BannerClient_t2837939223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::Finalize()
extern "C"  void BannerClient_Finalize_m3820144356 (BannerClient_t2837939223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::AdViewDidReceiveAdCallback(System.IntPtr)
extern "C"  void BannerClient_AdViewDidReceiveAdCallback_m113766536 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_BannerClient_AdViewDidReceiveAdCallback_m113766536(intptr_t ___bannerClient0);
// System.Void GoogleMobileAds.iOS.BannerClient::AdViewDidFailToReceiveAdWithErrorCallback(System.IntPtr,System.String)
extern "C"  void BannerClient_AdViewDidFailToReceiveAdWithErrorCallback_m1275455789 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerClient0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_BannerClient_AdViewDidFailToReceiveAdWithErrorCallback_m1275455789(intptr_t ___bannerClient0, char* ___error1);
// System.Void GoogleMobileAds.iOS.BannerClient::AdViewWillPresentScreenCallback(System.IntPtr)
extern "C"  void BannerClient_AdViewWillPresentScreenCallback_m1704807330 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_BannerClient_AdViewWillPresentScreenCallback_m1704807330(intptr_t ___bannerClient0);
// System.Void GoogleMobileAds.iOS.BannerClient::AdViewDidDismissScreenCallback(System.IntPtr)
extern "C"  void BannerClient_AdViewDidDismissScreenCallback_m4276406960 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_BannerClient_AdViewDidDismissScreenCallback_m4276406960(intptr_t ___bannerClient0);
// System.Void GoogleMobileAds.iOS.BannerClient::AdViewWillLeaveApplicationCallback(System.IntPtr)
extern "C"  void BannerClient_AdViewWillLeaveApplicationCallback_m3990662304 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_BannerClient_AdViewWillLeaveApplicationCallback_m3990662304(intptr_t ___bannerClient0);
// GoogleMobileAds.iOS.BannerClient GoogleMobileAds.iOS.BannerClient::IntPtrToBannerClient(System.IntPtr)
extern "C"  BannerClient_t2837939223 * BannerClient_IntPtrToBannerClient_m752213141 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
