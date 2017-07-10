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

// UnityEngine.GUIContent
struct GUIContent_t4210063000;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t2243626319;
struct GUIContent_t4210063000_marshaled_pinvoke;
struct GUIContent_t4210063000_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GUIContent4210063000.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"

// System.Void UnityEngine.GUIContent::.ctor()
extern "C"  void GUIContent__ctor_m3889310883 (GUIContent_t4210063000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(System.String)
extern "C"  void GUIContent__ctor_m845353549 (GUIContent_t4210063000 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(UnityEngine.GUIContent)
extern "C"  void GUIContent__ctor_m3634307516 (GUIContent_t4210063000 * __this, GUIContent_t4210063000 * ___src0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.cctor()
extern "C"  void GUIContent__cctor_m2212772596 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(System.String)
extern "C"  GUIContent_t4210063000 * GUIContent_Temp_m1650198655 (Il2CppObject * __this /* static, unused */, String_t* ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(UnityEngine.Texture)
extern "C"  GUIContent_t4210063000 * GUIContent_Temp_m1937454133 (Il2CppObject * __this /* static, unused */, Texture_t2243626319 * ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::ClearStaticCache()
extern "C"  void GUIContent_ClearStaticCache_m3271816250 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct GUIContent_t4210063000;
struct GUIContent_t4210063000_marshaled_pinvoke;

extern "C" void GUIContent_t4210063000_marshal_pinvoke(const GUIContent_t4210063000& unmarshaled, GUIContent_t4210063000_marshaled_pinvoke& marshaled);
extern "C" void GUIContent_t4210063000_marshal_pinvoke_back(const GUIContent_t4210063000_marshaled_pinvoke& marshaled, GUIContent_t4210063000& unmarshaled);
extern "C" void GUIContent_t4210063000_marshal_pinvoke_cleanup(GUIContent_t4210063000_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct GUIContent_t4210063000;
struct GUIContent_t4210063000_marshaled_com;

extern "C" void GUIContent_t4210063000_marshal_com(const GUIContent_t4210063000& unmarshaled, GUIContent_t4210063000_marshaled_com& marshaled);
extern "C" void GUIContent_t4210063000_marshal_com_back(const GUIContent_t4210063000_marshaled_com& marshaled, GUIContent_t4210063000& unmarshaled);
extern "C" void GUIContent_t4210063000_marshal_com_cleanup(GUIContent_t4210063000_marshaled_com& marshaled);
