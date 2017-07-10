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

// System.Collections.Generic.Dictionary`2/Transform`1<ZST_SmartTile/CardinalDirection,ZST_SmartTile/Coord,System.Collections.DictionaryEntry>
struct Transform_1_t1615620290;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"
#include "AssemblyU2DCSharp_ZST_SmartTile_CardinalDirection2226844457.h"
#include "AssemblyU2DCSharp_ZST_SmartTile_Coord3201679135.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ZST_SmartTile/CardinalDirection,ZST_SmartTile/Coord,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3991914475_gshared (Transform_1_t1615620290 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3991914475(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1615620290 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3991914475_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ZST_SmartTile/CardinalDirection,ZST_SmartTile/Coord,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Transform_1_Invoke_m3665095871_gshared (Transform_1_t1615620290 * __this, int32_t ___key0, Coord_t3201679135  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3665095871(__this, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Transform_1_t1615620290 *, int32_t, Coord_t3201679135 , const MethodInfo*))Transform_1_Invoke_m3665095871_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ZST_SmartTile/CardinalDirection,ZST_SmartTile/Coord,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1991019680_gshared (Transform_1_t1615620290 * __this, int32_t ___key0, Coord_t3201679135  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1991019680(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1615620290 *, int32_t, Coord_t3201679135 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1991019680_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ZST_SmartTile/CardinalDirection,ZST_SmartTile/Coord,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t3048875398  Transform_1_EndInvoke_m2130625569_gshared (Transform_1_t1615620290 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2130625569(__this, ___result0, method) ((  DictionaryEntry_t3048875398  (*) (Transform_1_t1615620290 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2130625569_gshared)(__this, ___result0, method)
