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

// GoogleMobileAds.iOS.CustomNativeTemplateClient
struct CustomNativeTemplateClient_t3776928493;
// System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>
struct Action_2_t1212770125;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient::.ctor(System.IntPtr,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>)
extern "C"  void CustomNativeTemplateClient__ctor_m1931242563 (CustomNativeTemplateClient_t3776928493 * __this, IntPtr_t ___customNativeAd0, Action_2_t1212770125 * ___clickHandler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.CustomNativeTemplateClient::get_CustomNativeAdPtr()
extern "C"  IntPtr_t CustomNativeTemplateClient_get_CustomNativeAdPtr_m2160872003 (CustomNativeTemplateClient_t3776928493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient::set_CustomNativeAdPtr(System.IntPtr)
extern "C"  void CustomNativeTemplateClient_set_CustomNativeAdPtr_m1037977484 (CustomNativeTemplateClient_t3776928493 * __this, IntPtr_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.iOS.CustomNativeTemplateClient::GetAvailableAssetNames()
extern "C"  List_1_t1398341365 * CustomNativeTemplateClient_GetAvailableAssetNames_m1487356182 (CustomNativeTemplateClient_t3776928493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAds.iOS.CustomNativeTemplateClient::GetTemplateId()
extern "C"  String_t* CustomNativeTemplateClient_GetTemplateId_m688104400 (CustomNativeTemplateClient_t3776928493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GoogleMobileAds.iOS.CustomNativeTemplateClient::GetImageByteArray(System.String)
extern "C"  ByteU5BU5D_t3397334013* CustomNativeTemplateClient_GetImageByteArray_m3944743694 (CustomNativeTemplateClient_t3776928493 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAds.iOS.CustomNativeTemplateClient::GetText(System.String)
extern "C"  String_t* CustomNativeTemplateClient_GetText_m2620344286 (CustomNativeTemplateClient_t3776928493 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient::PerformClick(System.String)
extern "C"  void CustomNativeTemplateClient_PerformClick_m3845775571 (CustomNativeTemplateClient_t3776928493 * __this, String_t* ___assetName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient::RecordImpression()
extern "C"  void CustomNativeTemplateClient_RecordImpression_m1301006522 (CustomNativeTemplateClient_t3776928493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient::DestroyCustomNativeTemplateAd()
extern "C"  void CustomNativeTemplateClient_DestroyCustomNativeTemplateAd_m155692295 (CustomNativeTemplateClient_t3776928493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient::Dispose()
extern "C"  void CustomNativeTemplateClient_Dispose_m4115002677 (CustomNativeTemplateClient_t3776928493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient::Finalize()
extern "C"  void CustomNativeTemplateClient_Finalize_m3513270656 (CustomNativeTemplateClient_t3776928493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient::NativeCustomTemplateDidReceiveClickCallback(System.IntPtr,System.String)
extern "C"  void CustomNativeTemplateClient_NativeCustomTemplateDidReceiveClickCallback_m1064910481 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeCustomAd0, String_t* ___assetName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_CustomNativeTemplateClient_NativeCustomTemplateDidReceiveClickCallback_m1064910481(intptr_t ___nativeCustomTemplateAd0, char* ___error1);
// GoogleMobileAds.iOS.CustomNativeTemplateClient GoogleMobileAds.iOS.CustomNativeTemplateClient::IntPtrToAdLoaderClient(System.IntPtr)
extern "C"  CustomNativeTemplateClient_t3776928493 * CustomNativeTemplateClient_IntPtrToAdLoaderClient_m1042499929 (Il2CppObject * __this /* static, unused */, IntPtr_t ___customNativeTemplateAd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
