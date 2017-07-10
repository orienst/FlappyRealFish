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

// UnityEngine.Touch
struct Touch_t407273883;
struct Touch_t407273883_marshaled_pinvoke;
struct Touch_t407273883_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Touch407273883.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_TouchPhase2458120420.h"
#include "UnityEngine_UnityEngine_TouchType2732027771.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C"  int32_t Touch_get_fingerId_m4109475843 (Touch_t407273883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C"  Vector2_t2243707579  Touch_get_position_m2079703643 (Touch_t407273883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C"  int32_t Touch_get_phase_m196706494 (Touch_t407273883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchType UnityEngine.Touch::get_type()
extern "C"  int32_t Touch_get_type_m3264731406 (Touch_t407273883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Touch_t407273883;
struct Touch_t407273883_marshaled_pinvoke;

extern "C" void Touch_t407273883_marshal_pinvoke(const Touch_t407273883& unmarshaled, Touch_t407273883_marshaled_pinvoke& marshaled);
extern "C" void Touch_t407273883_marshal_pinvoke_back(const Touch_t407273883_marshaled_pinvoke& marshaled, Touch_t407273883& unmarshaled);
extern "C" void Touch_t407273883_marshal_pinvoke_cleanup(Touch_t407273883_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Touch_t407273883;
struct Touch_t407273883_marshaled_com;

extern "C" void Touch_t407273883_marshal_com(const Touch_t407273883& unmarshaled, Touch_t407273883_marshaled_com& marshaled);
extern "C" void Touch_t407273883_marshal_com_back(const Touch_t407273883_marshaled_com& marshaled, Touch_t407273883& unmarshaled);
extern "C" void Touch_t407273883_marshal_com_cleanup(Touch_t407273883_marshaled_com& marshaled);
