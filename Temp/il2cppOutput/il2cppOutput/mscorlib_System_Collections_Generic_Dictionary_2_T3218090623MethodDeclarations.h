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

// System.Collections.Generic.Dictionary`2/Transform`1<ZST_SmartTile/CardinalDirection,ZST_SmartTile/Coord,System.Collections.Generic.KeyValuePair`2<ZST_SmartTile/CardinalDirection,ZST_SmartTile/Coord>>
struct Transform_1_t3218090623;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_356378435.h"
#include "AssemblyU2DCSharp_ZST_SmartTile_CardinalDirection2226844457.h"
#include "AssemblyU2DCSharp_ZST_SmartTile_Coord3201679135.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ZST_SmartTile/CardinalDirection,ZST_SmartTile/Coord,System.Collections.Generic.KeyValuePair`2<ZST_SmartTile/CardinalDirection,ZST_SmartTile/Coord>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1718248982_gshared (Transform_1_t3218090623 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1718248982(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3218090623 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1718248982_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ZST_SmartTile/CardinalDirection,ZST_SmartTile/Coord,System.Collections.Generic.KeyValuePair`2<ZST_SmartTile/CardinalDirection,ZST_SmartTile/Coord>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t356378435  Transform_1_Invoke_m920224022_gshared (Transform_1_t3218090623 * __this, int32_t ___key0, Coord_t3201679135  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m920224022(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t356378435  (*) (Transform_1_t3218090623 *, int32_t, Coord_t3201679135 , const MethodInfo*))Transform_1_Invoke_m920224022_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ZST_SmartTile/CardinalDirection,ZST_SmartTile/Coord,System.Collections.Generic.KeyValuePair`2<ZST_SmartTile/CardinalDirection,ZST_SmartTile/Coord>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2752797823_gshared (Transform_1_t3218090623 * __this, int32_t ___key0, Coord_t3201679135  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2752797823(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3218090623 *, int32_t, Coord_t3201679135 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2752797823_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ZST_SmartTile/CardinalDirection,ZST_SmartTile/Coord,System.Collections.Generic.KeyValuePair`2<ZST_SmartTile/CardinalDirection,ZST_SmartTile/Coord>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t356378435  Transform_1_EndInvoke_m2053341100_gshared (Transform_1_t3218090623 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2053341100(__this, ___result0, method) ((  KeyValuePair_2_t356378435  (*) (Transform_1_t3218090623 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2053341100_gshared)(__this, ___result0, method)
