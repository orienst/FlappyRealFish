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

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t254341728;
// System.String
struct String_t;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1216180266;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t3552561393;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// UnityEngine.WWWForm
struct WWWForm_t3950226929;
// System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>
struct List_1_t603865270;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;
// System.String[]
struct StringU5BU5D_t1642385972;
struct UnityWebRequest_t254341728_marshaled_pinvoke;
struct UnityWebRequest_t254341728_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Networking_DownloadHandler1216180266.h"
#include "UnityEngine_UnityEngine_Networking_UploadHandler3552561393.h"
#include "UnityEngine_UnityEngine_AudioType4076847944.h"
#include "UnityEngine_UnityEngine_Hash1282836532937.h"
#include "UnityEngine_UnityEngine_WWWForm3950226929.h"
#include "UnityEngine_UnityEngine_Networking_UnityWebRequest2654069489.h"
#include "UnityEngine_UnityEngine_Networking_UnityWebRequest3177762630.h"

// System.Void UnityEngine.Networking.UnityWebRequest::.ctor()
extern "C"  void UnityWebRequest__ctor_m432596795 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String)
extern "C"  void UnityWebRequest__ctor_m2424401853 (UnityWebRequest_t254341728 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
extern "C"  void UnityWebRequest__ctor_m1187779891 (UnityWebRequest_t254341728 * __this, String_t* ___url0, String_t* ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
extern "C"  void UnityWebRequest__ctor_m2378599348 (UnityWebRequest_t254341728 * __this, String_t* ___url0, String_t* ___method1, DownloadHandler_t1216180266 * ___downloadHandler2, UploadHandler_t3552561393 * ___uploadHandler3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::.cctor()
extern "C"  void UnityWebRequest__cctor_m126744318 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_Get_m3762133581 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Delete(System.String)
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_Delete_m943504872 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Head(System.String)
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_Head_m1698896027 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::GetTexture(System.String)
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_GetTexture_m3150653648 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::GetTexture(System.String,System.Boolean)
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_GetTexture_m333882849 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, bool ___nonReadable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::GetAudioClip(System.String,UnityEngine.AudioType)
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_GetAudioClip_m3990624924 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, int32_t ___audioType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::GetAssetBundle(System.String)
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_GetAssetBundle_m2918223789 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::GetAssetBundle(System.String,System.UInt32)
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_GetAssetBundle_m4116539413 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, uint32_t ___crc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::GetAssetBundle(System.String,System.UInt32,System.UInt32)
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_GetAssetBundle_m4072853997 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, uint32_t ___version1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::GetAssetBundle(System.String,UnityEngine.Hash128,System.UInt32)
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_GetAssetBundle_m361877199 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, Hash128_t2836532937  ___hash1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.Byte[])
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_Put_m1139563229 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, ByteU5BU5D_t3397334013* ___bodyData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.String)
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_Put_m1681506174 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, String_t* ___bodyData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,System.String)
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_Post_m3438227921 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, String_t* ___postData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,UnityEngine.WWWForm)
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_Post_m1002780585 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, WWWForm_t3950226929 * ___formData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>)
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_Post_m2105097678 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, List_1_t603865270 * ___multipartFormSections1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>,System.Byte[])
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_Post_m2626544445 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, List_1_t603865270 * ___multipartFormSections1, ByteU5BU5D_t3397334013* ___boundary2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_Post_m2879499414 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, Dictionary_2_t3943999495 * ___formFields1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.UnityWebRequest::SerializeFormSections(System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* UnityWebRequest_SerializeFormSections_m616620563 (Il2CppObject * __this /* static, unused */, List_1_t603865270 * ___multipartFormSections0, ByteU5BU5D_t3397334013* ___boundary1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.UnityWebRequest::GenerateBoundary()
extern "C"  ByteU5BU5D_t3397334013* UnityWebRequest_GenerateBoundary_m1443103734 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.UnityWebRequest::SerializeSimpleForm(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  ByteU5BU5D_t3397334013* UnityWebRequest_SerializeSimpleForm_m1079282452 (Il2CppObject * __this /* static, unused */, Dictionary_2_t3943999495 * ___formFields0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
extern "C"  bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m977096671 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeDownloadHandlerOnDispose(System.Boolean)
extern "C"  void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m1872424902 (UnityWebRequest_t254341728 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
extern "C"  bool UnityWebRequest_get_disposeUploadHandlerOnDispose_m573074478 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeUploadHandlerOnDispose(System.Boolean)
extern "C"  void UnityWebRequest_set_disposeUploadHandlerOnDispose_m11086527 (UnityWebRequest_t254341728 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalCreate()
extern "C"  void UnityWebRequest_InternalCreate_m2618341326 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
extern "C"  void UnityWebRequest_InternalDestroy_m1188536142 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetDefaults()
extern "C"  void UnityWebRequest_InternalSetDefaults_m1411946726 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::Finalize()
extern "C"  void UnityWebRequest_Finalize_m1113857405 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
extern "C"  void UnityWebRequest_Dispose_m437623634 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Networking.UnityWebRequest::InternalBegin()
extern "C"  AsyncOperation_t3814632279 * UnityWebRequest_InternalBegin_m987291664 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalAbort()
extern "C"  void UnityWebRequest_InternalAbort_m1744334222 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Networking.UnityWebRequest::Send()
extern "C"  AsyncOperation_t3814632279 * UnityWebRequest_Send_m4070133578 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
extern "C"  void UnityWebRequest_Abort_m3433435881 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
extern "C"  void UnityWebRequest_InternalSetMethod_m969165462 (UnityWebRequest_t254341728 * __this, int32_t ___methodType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetCustomMethod(System.String)
extern "C"  void UnityWebRequest_InternalSetCustomMethod_m1107638252 (UnityWebRequest_t254341728 * __this, String_t* ___customMethodName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UnityWebRequest::InternalGetMethod()
extern "C"  int32_t UnityWebRequest_InternalGetMethod_m1439155887 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::InternalGetCustomMethod()
extern "C"  String_t* UnityWebRequest_InternalGetCustomMethod_m2293739551 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::get_method()
extern "C"  String_t* UnityWebRequest_get_method_m1735183858 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
extern "C"  void UnityWebRequest_set_method_m4118764027 (UnityWebRequest_t254341728 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UnityWebRequest::InternalGetError()
extern "C"  int32_t UnityWebRequest_InternalGetError_m3993195296 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
extern "C"  String_t* UnityWebRequest_get_error_m1819765147 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_useHttpContinue()
extern "C"  bool UnityWebRequest_get_useHttpContinue_m25605422 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_useHttpContinue(System.Boolean)
extern "C"  void UnityWebRequest_set_useHttpContinue_m3212280575 (UnityWebRequest_t254341728 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::get_url()
extern "C"  String_t* UnityWebRequest_get_url_m798565458 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_url(System.String)
extern "C"  void UnityWebRequest_set_url_m2494687159 (UnityWebRequest_t254341728 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::InternalGetUrl()
extern "C"  String_t* UnityWebRequest_InternalGetUrl_m1739605410 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetUrl(System.String)
extern "C"  void UnityWebRequest_InternalSetUrl_m1669953255 (UnityWebRequest_t254341728 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
extern "C"  int64_t UnityWebRequest_get_responseCode_m1590258701 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.UnityWebRequest::get_uploadProgress()
extern "C"  float UnityWebRequest_get_uploadProgress_m29797802 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
extern "C"  bool UnityWebRequest_get_isModifiable_m865629448 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
extern "C"  bool UnityWebRequest_get_isDone_m3929051890 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isError()
extern "C"  bool UnityWebRequest_get_isError_m2487408374 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.UnityWebRequest::get_downloadProgress()
extern "C"  float UnityWebRequest_get_downloadProgress_m3197899461 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 UnityEngine.Networking.UnityWebRequest::get_uploadedBytes()
extern "C"  uint64_t UnityWebRequest_get_uploadedBytes_m2170144001 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 UnityEngine.Networking.UnityWebRequest::get_downloadedBytes()
extern "C"  uint64_t UnityWebRequest_get_downloadedBytes_m1777838196 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UnityWebRequest::get_redirectLimit()
extern "C"  int32_t UnityWebRequest_get_redirectLimit_m259403435 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_redirectLimit(System.Int32)
extern "C"  void UnityWebRequest_set_redirectLimit_m1226497466 (UnityWebRequest_t254341728 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_chunkedTransfer()
extern "C"  bool UnityWebRequest_get_chunkedTransfer_m3818596779 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_chunkedTransfer(System.Boolean)
extern "C"  void UnityWebRequest_set_chunkedTransfer_m299823738 (UnityWebRequest_t254341728 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::GetRequestHeader(System.String)
extern "C"  String_t* UnityWebRequest_GetRequestHeader_m2981224728 (UnityWebRequest_t254341728 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)
extern "C"  void UnityWebRequest_InternalSetRequestHeader_m2536447480 (UnityWebRequest_t254341728 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
extern "C"  void UnityWebRequest_SetRequestHeader_m466367223 (UnityWebRequest_t254341728 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::GetResponseHeader(System.String)
extern "C"  String_t* UnityWebRequest_GetResponseHeader_m1822960276 (UnityWebRequest_t254341728 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Networking.UnityWebRequest::InternalGetResponseHeaderKeys()
extern "C"  StringU5BU5D_t1642385972* UnityWebRequest_InternalGetResponseHeaderKeys_m1297904277 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Networking.UnityWebRequest::GetResponseHeaders()
extern "C"  Dictionary_2_t3943999495 * UnityWebRequest_GetResponseHeaders_m3806990876 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
extern "C"  UploadHandler_t3552561393 * UnityWebRequest_get_uploadHandler_m1968885984 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
extern "C"  void UnityWebRequest_set_uploadHandler_m2033861625 (UnityWebRequest_t254341728 * __this, UploadHandler_t3552561393 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
extern "C"  DownloadHandler_t1216180266 * UnityWebRequest_get_downloadHandler_m2794451840 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
extern "C"  void UnityWebRequest_set_downloadHandler_m1587492897 (UnityWebRequest_t254341728 * __this, DownloadHandler_t1216180266 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::ContainsForbiddenCharacters(System.String,System.Int32)
extern "C"  bool UnityWebRequest_ContainsForbiddenCharacters_m2308554832 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___firstAllowedCharCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::IsHeaderNameLegal(System.String)
extern "C"  bool UnityWebRequest_IsHeaderNameLegal_m453693478 (Il2CppObject * __this /* static, unused */, String_t* ___headerName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::IsHeaderValueLegal(System.String)
extern "C"  bool UnityWebRequest_IsHeaderValueLegal_m925827794 (Il2CppObject * __this /* static, unused */, String_t* ___headerValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::GetErrorDescription(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
extern "C"  String_t* UnityWebRequest_GetErrorDescription_m3167852288 (Il2CppObject * __this /* static, unused */, int32_t ___errorCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct UnityWebRequest_t254341728;
struct UnityWebRequest_t254341728_marshaled_pinvoke;

extern "C" void UnityWebRequest_t254341728_marshal_pinvoke(const UnityWebRequest_t254341728& unmarshaled, UnityWebRequest_t254341728_marshaled_pinvoke& marshaled);
extern "C" void UnityWebRequest_t254341728_marshal_pinvoke_back(const UnityWebRequest_t254341728_marshaled_pinvoke& marshaled, UnityWebRequest_t254341728& unmarshaled);
extern "C" void UnityWebRequest_t254341728_marshal_pinvoke_cleanup(UnityWebRequest_t254341728_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct UnityWebRequest_t254341728;
struct UnityWebRequest_t254341728_marshaled_com;

extern "C" void UnityWebRequest_t254341728_marshal_com(const UnityWebRequest_t254341728& unmarshaled, UnityWebRequest_t254341728_marshaled_com& marshaled);
extern "C" void UnityWebRequest_t254341728_marshal_com_back(const UnityWebRequest_t254341728_marshaled_com& marshaled, UnityWebRequest_t254341728& unmarshaled);
extern "C" void UnityWebRequest_t254341728_marshal_com_cleanup(UnityWebRequest_t254341728_marshaled_com& marshaled);
