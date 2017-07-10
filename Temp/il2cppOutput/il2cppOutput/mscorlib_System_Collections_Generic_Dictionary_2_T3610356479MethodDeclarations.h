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

// System.Collections.Generic.Dictionary`2/Transform`1<ZST_SmartTile/CardinalDirection,System.Boolean,System.Boolean>
struct Transform_1_t3610356479;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_ZST_SmartTile_CardinalDirection2226844457.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ZST_SmartTile/CardinalDirection,System.Boolean,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1505741578_gshared (Transform_1_t3610356479 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1505741578(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3610356479 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1505741578_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ZST_SmartTile/CardinalDirection,System.Boolean,System.Boolean>::Invoke(TKey,TValue)
extern "C"  bool Transform_1_Invoke_m487705626_gshared (Transform_1_t3610356479 * __this, int32_t ___key0, bool ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m487705626(__this, ___key0, ___value1, method) ((  bool (*) (Transform_1_t3610356479 *, int32_t, bool, const MethodInfo*))Transform_1_Invoke_m487705626_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ZST_SmartTile/CardinalDirection,System.Boolean,System.Boolean>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m4251675021_gshared (Transform_1_t3610356479 * __this, int32_t ___key0, bool ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m4251675021(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3610356479 *, int32_t, bool, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m4251675021_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ZST_SmartTile/CardinalDirection,System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Transform_1_EndInvoke_m3057782464_gshared (Transform_1_t3610356479 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3057782464(__this, ___result0, method) ((  bool (*) (Transform_1_t3610356479 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3057782464_gshared)(__this, ___result0, method)
