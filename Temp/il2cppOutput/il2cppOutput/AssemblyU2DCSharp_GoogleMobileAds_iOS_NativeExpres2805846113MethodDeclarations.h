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

// GoogleMobileAds.iOS.NativeExpressAdClient
struct NativeExpressAdClient_t2805846113;
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

// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::.ctor()
extern "C"  void NativeExpressAdClient__ctor_m2955111042 (NativeExpressAdClient_t2805846113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdClient_add_OnAdLoaded_m3793323943 (NativeExpressAdClient_t2805846113 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdClient_remove_OnAdLoaded_m3821570082 (NativeExpressAdClient_t2805846113 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void NativeExpressAdClient_add_OnAdFailedToLoad_m2261316181 (NativeExpressAdClient_t2805846113 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void NativeExpressAdClient_remove_OnAdFailedToLoad_m445111692 (NativeExpressAdClient_t2805846113 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdClient_add_OnAdOpening_m2896945118 (NativeExpressAdClient_t2805846113 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdClient_remove_OnAdOpening_m304557927 (NativeExpressAdClient_t2805846113 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdClient_add_OnAdClosed_m525380152 (NativeExpressAdClient_t2805846113 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdClient_remove_OnAdClosed_m3625142077 (NativeExpressAdClient_t2805846113 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdClient_add_OnAdLeavingApplication_m1039689394 (NativeExpressAdClient_t2805846113 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::remove_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdClient_remove_OnAdLeavingApplication_m270175975 (NativeExpressAdClient_t2805846113 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.NativeExpressAdClient::get_NativeExpressAdViewPtr()
extern "C"  IntPtr_t NativeExpressAdClient_get_NativeExpressAdViewPtr_m1449784151 (NativeExpressAdClient_t2805846113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::set_NativeExpressAdViewPtr(System.IntPtr)
extern "C"  void NativeExpressAdClient_set_NativeExpressAdViewPtr_m994252298 (NativeExpressAdClient_t2805846113 * __this, IntPtr_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::CreateNativeExpressAdView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
extern "C"  void NativeExpressAdClient_CreateNativeExpressAdView_m801002359 (NativeExpressAdClient_t2805846113 * __this, String_t* ___adUnitId0, AdSize_t3231673570 * ___adSize1, int32_t ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void NativeExpressAdClient_LoadAd_m3031748564 (NativeExpressAdClient_t2805846113 * __this, AdRequest_t3179524098 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::ShowNativeExpressAdView()
extern "C"  void NativeExpressAdClient_ShowNativeExpressAdView_m44611252 (NativeExpressAdClient_t2805846113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::HideNativeExpressAdView()
extern "C"  void NativeExpressAdClient_HideNativeExpressAdView_m3214717297 (NativeExpressAdClient_t2805846113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::DestroyNativeExpressAdView()
extern "C"  void NativeExpressAdClient_DestroyNativeExpressAdView_m2501896923 (NativeExpressAdClient_t2805846113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::Dispose()
extern "C"  void NativeExpressAdClient_Dispose_m271447645 (NativeExpressAdClient_t2805846113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::Finalize()
extern "C"  void NativeExpressAdClient_Finalize_m2969245014 (NativeExpressAdClient_t2805846113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::NativeExpressAdViewDidReceiveAdCallback(System.IntPtr)
extern "C"  void NativeExpressAdClient_NativeExpressAdViewDidReceiveAdCallback_m1811396413 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeExpressClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_NativeExpressAdClient_NativeExpressAdViewDidReceiveAdCallback_m1811396413(intptr_t ___nativeExpressAdClient0);
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::NativeExpressAdViewDidFailToReceiveAdWithErrorCallback(System.IntPtr,System.String)
extern "C"  void NativeExpressAdClient_NativeExpressAdViewDidFailToReceiveAdWithErrorCallback_m1808687096 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeExpressClient0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_NativeExpressAdClient_NativeExpressAdViewDidFailToReceiveAdWithErrorCallback_m1808687096(intptr_t ___nativeExpressAdClient0, char* ___error1);
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::NativeExpressAdViewWillPresentScreenCallback(System.IntPtr)
extern "C"  void NativeExpressAdClient_NativeExpressAdViewWillPresentScreenCallback_m2751821027 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeExpressClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_NativeExpressAdClient_NativeExpressAdViewWillPresentScreenCallback_m2751821027(intptr_t ___nativeExpressAdClient0);
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::NativeExpressAdViewDidDismissScreenCallback(System.IntPtr)
extern "C"  void NativeExpressAdClient_NativeExpressAdViewDidDismissScreenCallback_m774555477 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeExpressClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_NativeExpressAdClient_NativeExpressAdViewDidDismissScreenCallback_m774555477(intptr_t ___nativeExpressAdClient0);
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::NativeExpressAdViewWillLeaveApplicationCallback(System.IntPtr)
extern "C"  void NativeExpressAdClient_NativeExpressAdViewWillLeaveApplicationCallback_m484701157 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeExpressClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_NativeExpressAdClient_NativeExpressAdViewWillLeaveApplicationCallback_m484701157(intptr_t ___nativeExpressAdClient0);
// GoogleMobileAds.iOS.NativeExpressAdClient GoogleMobileAds.iOS.NativeExpressAdClient::IntPtrToNativeExpressAdClient(System.IntPtr)
extern "C"  NativeExpressAdClient_t2805846113 * NativeExpressAdClient_IntPtrToNativeExpressAdClient_m462057843 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeExpressAdClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
