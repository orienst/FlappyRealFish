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

// GoogleMobileAds.iOS.AdLoaderClient
struct AdLoaderClient_t506419447;
// GoogleMobileAds.Api.AdLoader
struct AdLoader_t554394170;
// System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>
struct EventHandler_1_t1249765249;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t347919082;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3179524098;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdLoader554394170.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdRequest3179524098.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GoogleMobileAds.iOS.AdLoaderClient::.ctor(GoogleMobileAds.Api.AdLoader)
extern "C"  void AdLoaderClient__ctor_m3732593287 (AdLoaderClient_t506419447 * __this, AdLoader_t554394170 * ___unityAdLoader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::add_OnCustomNativeTemplateAdLoaded(System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>)
extern "C"  void AdLoaderClient_add_OnCustomNativeTemplateAdLoaded_m1647593717 (AdLoaderClient_t506419447 * __this, EventHandler_1_t1249765249 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::remove_OnCustomNativeTemplateAdLoaded(System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>)
extern "C"  void AdLoaderClient_remove_OnCustomNativeTemplateAdLoaded_m2762961822 (AdLoaderClient_t506419447 * __this, EventHandler_1_t1249765249 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void AdLoaderClient_add_OnAdFailedToLoad_m2309853215 (AdLoaderClient_t506419447 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void AdLoaderClient_remove_OnAdFailedToLoad_m2611496210 (AdLoaderClient_t506419447 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.AdLoaderClient::get_AdLoaderPtr()
extern "C"  IntPtr_t AdLoaderClient_get_AdLoaderPtr_m3735936420 (AdLoaderClient_t506419447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::set_AdLoaderPtr(System.IntPtr)
extern "C"  void AdLoaderClient_set_AdLoaderPtr_m1850192949 (AdLoaderClient_t506419447 * __this, IntPtr_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void AdLoaderClient_LoadAd_m2540264058 (AdLoaderClient_t506419447 * __this, AdRequest_t3179524098 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::DestroyAdLoader()
extern "C"  void AdLoaderClient_DestroyAdLoader_m3353890016 (AdLoaderClient_t506419447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::Dispose()
extern "C"  void AdLoaderClient_Dispose_m2885490435 (AdLoaderClient_t506419447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::Finalize()
extern "C"  void AdLoaderClient_Finalize_m1291371140 (AdLoaderClient_t506419447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::AdLoaderDidReceiveNativeCustomTemplateAdCallback(System.IntPtr,System.IntPtr,System.String)
extern "C"  void AdLoaderClient_AdLoaderDidReceiveNativeCustomTemplateAdCallback_m4289841704 (Il2CppObject * __this /* static, unused */, IntPtr_t ___adLoader0, IntPtr_t ___nativeCustomTemplateAd1, String_t* ___templateID2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AdLoaderClient_AdLoaderDidReceiveNativeCustomTemplateAdCallback_m4289841704(intptr_t ___adLoader0, intptr_t ___nativeCustomTemplateAd1, char* ___templateID2);
// System.Void GoogleMobileAds.iOS.AdLoaderClient::AdLoaderDidFailToReceiveAdWithErrorCallback(System.IntPtr,System.String)
extern "C"  void AdLoaderClient_AdLoaderDidFailToReceiveAdWithErrorCallback_m2549443409 (Il2CppObject * __this /* static, unused */, IntPtr_t ___adLoader0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AdLoaderClient_AdLoaderDidFailToReceiveAdWithErrorCallback_m2549443409(intptr_t ___AdLoader0, char* ___error1);
// GoogleMobileAds.iOS.AdLoaderClient GoogleMobileAds.iOS.AdLoaderClient::IntPtrToAdLoaderClient(System.IntPtr)
extern "C"  AdLoaderClient_t506419447 * AdLoaderClient_IntPtrToAdLoaderClient_m3584232373 (Il2CppObject * __this /* static, unused */, IntPtr_t ___adLoader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
