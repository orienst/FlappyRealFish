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

// UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>
struct UnityAdsDelegate_2_t3657054456;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAdsDelegate_2__ctor_m1114114262_gshared (UnityAdsDelegate_2_t3657054456 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define UnityAdsDelegate_2__ctor_m1114114262(__this, ___object0, ___method1, method) ((  void (*) (UnityAdsDelegate_2_t3657054456 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAdsDelegate_2__ctor_m1114114262_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::Invoke(T1,T2)
extern "C"  void UnityAdsDelegate_2_Invoke_m342131961_gshared (UnityAdsDelegate_2_t3657054456 * __this, Il2CppObject * ___p10, bool ___p21, const MethodInfo* method);
#define UnityAdsDelegate_2_Invoke_m342131961(__this, ___p10, ___p21, method) ((  void (*) (UnityAdsDelegate_2_t3657054456 *, Il2CppObject *, bool, const MethodInfo*))UnityAdsDelegate_2_Invoke_m342131961_gshared)(__this, ___p10, ___p21, method)
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAdsDelegate_2_BeginInvoke_m673286156_gshared (UnityAdsDelegate_2_t3657054456 * __this, Il2CppObject * ___p10, bool ___p21, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define UnityAdsDelegate_2_BeginInvoke_m673286156(__this, ___p10, ___p21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (UnityAdsDelegate_2_t3657054456 *, Il2CppObject *, bool, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))UnityAdsDelegate_2_BeginInvoke_m673286156_gshared)(__this, ___p10, ___p21, ___callback2, ___object3, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAdsDelegate_2_EndInvoke_m873428936_gshared (UnityAdsDelegate_2_t3657054456 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define UnityAdsDelegate_2_EndInvoke_m873428936(__this, ___result0, method) ((  void (*) (UnityAdsDelegate_2_t3657054456 *, Il2CppObject *, const MethodInfo*))UnityAdsDelegate_2_EndInvoke_m873428936_gshared)(__this, ___result0, method)
