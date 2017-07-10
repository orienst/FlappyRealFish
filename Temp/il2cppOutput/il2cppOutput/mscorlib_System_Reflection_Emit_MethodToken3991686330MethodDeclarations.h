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

// System.Object
struct Il2CppObject;
// System.Reflection.Emit.MethodToken
struct MethodToken_t3991686330;
struct MethodToken_t3991686330_marshaled_pinvoke;
struct MethodToken_t3991686330_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_MethodToken3991686330.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Reflection.Emit.MethodToken::.ctor(System.Int32)
extern "C"  void MethodToken__ctor_m3671357474 (MethodToken_t3991686330 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodToken::.cctor()
extern "C"  void MethodToken__cctor_m2172944774 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodToken::Equals(System.Object)
extern "C"  bool MethodToken_Equals_m533761838 (MethodToken_t3991686330 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodToken::GetHashCode()
extern "C"  int32_t MethodToken_GetHashCode_m1405492030 (MethodToken_t3991686330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodToken::get_Token()
extern "C"  int32_t MethodToken_get_Token_m3846227497 (MethodToken_t3991686330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct MethodToken_t3991686330;
struct MethodToken_t3991686330_marshaled_pinvoke;

extern "C" void MethodToken_t3991686330_marshal_pinvoke(const MethodToken_t3991686330& unmarshaled, MethodToken_t3991686330_marshaled_pinvoke& marshaled);
extern "C" void MethodToken_t3991686330_marshal_pinvoke_back(const MethodToken_t3991686330_marshaled_pinvoke& marshaled, MethodToken_t3991686330& unmarshaled);
extern "C" void MethodToken_t3991686330_marshal_pinvoke_cleanup(MethodToken_t3991686330_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct MethodToken_t3991686330;
struct MethodToken_t3991686330_marshaled_com;

extern "C" void MethodToken_t3991686330_marshal_com(const MethodToken_t3991686330& unmarshaled, MethodToken_t3991686330_marshaled_com& marshaled);
extern "C" void MethodToken_t3991686330_marshal_com_back(const MethodToken_t3991686330_marshaled_com& marshaled, MethodToken_t3991686330& unmarshaled);
extern "C" void MethodToken_t3991686330_marshal_com_cleanup(MethodToken_t3991686330_marshaled_com& marshaled);
