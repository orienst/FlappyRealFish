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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1216180266;
// System.String
struct String_t;
struct DownloadHandler_t1216180266_marshaled_pinvoke;
struct DownloadHandler_t1216180266_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Hash1282836532937.h"
#include "UnityEngine_UnityEngine_Networking_DownloadHandler1216180266.h"
#include "UnityEngine_UnityEngine_AudioType4076847944.h"

// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
extern "C"  void DownloadHandler__ctor_m328121149 (DownloadHandler_t1216180266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::InternalCreateBuffer()
extern "C"  void DownloadHandler_InternalCreateBuffer_m3933395410 (DownloadHandler_t1216180266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::InternalCreateTexture(System.Boolean)
extern "C"  void DownloadHandler_InternalCreateTexture_m491895728 (DownloadHandler_t1216180266 * __this, bool ___readable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::InternalCreateAssetBundle(System.String,System.UInt32)
extern "C"  void DownloadHandler_InternalCreateAssetBundle_m2686838992 (DownloadHandler_t1216180266 * __this, String_t* ___url0, uint32_t ___crc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::InternalCreateAssetBundle(System.String,UnityEngine.Hash128,System.UInt32)
extern "C"  void DownloadHandler_InternalCreateAssetBundle_m2870018240 (DownloadHandler_t1216180266 * __this, String_t* ___url0, Hash128_t2836532937  ___hash1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::INTERNAL_CALL_InternalCreateAssetBundle(UnityEngine.Networking.DownloadHandler,System.String,UnityEngine.Hash128&,System.UInt32)
extern "C"  void DownloadHandler_INTERNAL_CALL_InternalCreateAssetBundle_m2741800430 (Il2CppObject * __this /* static, unused */, DownloadHandler_t1216180266 * ___self0, String_t* ___url1, Hash128_t2836532937 * ___hash2, uint32_t ___crc3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::InternalCreateAudioClip(System.String,UnityEngine.AudioType)
extern "C"  void DownloadHandler_InternalCreateAudioClip_m86520921 (DownloadHandler_t1216180266 * __this, String_t* ___url0, int32_t ___audioType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::InternalDestroy()
extern "C"  void DownloadHandler_InternalDestroy_m761762988 (DownloadHandler_t1216180266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::Finalize()
extern "C"  void DownloadHandler_Finalize_m3781185347 (DownloadHandler_t1216180266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
extern "C"  void DownloadHandler_Dispose_m2043077428 (DownloadHandler_t1216180266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct DownloadHandler_t1216180266;
struct DownloadHandler_t1216180266_marshaled_pinvoke;

extern "C" void DownloadHandler_t1216180266_marshal_pinvoke(const DownloadHandler_t1216180266& unmarshaled, DownloadHandler_t1216180266_marshaled_pinvoke& marshaled);
extern "C" void DownloadHandler_t1216180266_marshal_pinvoke_back(const DownloadHandler_t1216180266_marshaled_pinvoke& marshaled, DownloadHandler_t1216180266& unmarshaled);
extern "C" void DownloadHandler_t1216180266_marshal_pinvoke_cleanup(DownloadHandler_t1216180266_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct DownloadHandler_t1216180266;
struct DownloadHandler_t1216180266_marshaled_com;

extern "C" void DownloadHandler_t1216180266_marshal_com(const DownloadHandler_t1216180266& unmarshaled, DownloadHandler_t1216180266_marshaled_com& marshaled);
extern "C" void DownloadHandler_t1216180266_marshal_com_back(const DownloadHandler_t1216180266_marshaled_com& marshaled, DownloadHandler_t1216180266& unmarshaled);
extern "C" void DownloadHandler_t1216180266_marshal_com_cleanup(DownloadHandler_t1216180266_marshaled_com& marshaled);
