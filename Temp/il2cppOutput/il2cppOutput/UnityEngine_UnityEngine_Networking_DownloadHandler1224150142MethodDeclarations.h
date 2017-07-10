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

// UnityEngine.Networking.DownloadHandlerAssetBundle
struct DownloadHandlerAssetBundle_t1224150142;
// System.String
struct String_t;
struct DownloadHandlerAssetBundle_t1224150142_marshaled_pinvoke;
struct DownloadHandlerAssetBundle_t1224150142_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Hash1282836532937.h"

// System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,System.UInt32)
extern "C"  void DownloadHandlerAssetBundle__ctor_m2066903751 (DownloadHandlerAssetBundle_t1224150142 * __this, String_t* ___url0, uint32_t ___crc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,System.UInt32,System.UInt32)
extern "C"  void DownloadHandlerAssetBundle__ctor_m626379351 (DownloadHandlerAssetBundle_t1224150142 * __this, String_t* ___url0, uint32_t ___version1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,UnityEngine.Hash128,System.UInt32)
extern "C"  void DownloadHandlerAssetBundle__ctor_m3244180881 (DownloadHandlerAssetBundle_t1224150142 * __this, String_t* ___url0, Hash128_t2836532937  ___hash1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct DownloadHandlerAssetBundle_t1224150142;
struct DownloadHandlerAssetBundle_t1224150142_marshaled_pinvoke;

extern "C" void DownloadHandlerAssetBundle_t1224150142_marshal_pinvoke(const DownloadHandlerAssetBundle_t1224150142& unmarshaled, DownloadHandlerAssetBundle_t1224150142_marshaled_pinvoke& marshaled);
extern "C" void DownloadHandlerAssetBundle_t1224150142_marshal_pinvoke_back(const DownloadHandlerAssetBundle_t1224150142_marshaled_pinvoke& marshaled, DownloadHandlerAssetBundle_t1224150142& unmarshaled);
extern "C" void DownloadHandlerAssetBundle_t1224150142_marshal_pinvoke_cleanup(DownloadHandlerAssetBundle_t1224150142_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct DownloadHandlerAssetBundle_t1224150142;
struct DownloadHandlerAssetBundle_t1224150142_marshaled_com;

extern "C" void DownloadHandlerAssetBundle_t1224150142_marshal_com(const DownloadHandlerAssetBundle_t1224150142& unmarshaled, DownloadHandlerAssetBundle_t1224150142_marshaled_com& marshaled);
extern "C" void DownloadHandlerAssetBundle_t1224150142_marshal_com_back(const DownloadHandlerAssetBundle_t1224150142_marshaled_com& marshaled, DownloadHandlerAssetBundle_t1224150142& unmarshaled);
extern "C" void DownloadHandlerAssetBundle_t1224150142_marshal_com_cleanup(DownloadHandlerAssetBundle_t1224150142_marshaled_com& marshaled);
