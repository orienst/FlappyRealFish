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

// UnityEngine.Advertisements.UnityAdsDelegate
struct UnityAdsDelegate_t3613839672;
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

// System.Void UnityEngine.Advertisements.UnityAdsDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAdsDelegate__ctor_m583892427 (UnityAdsDelegate_t3613839672 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::Invoke()
extern "C"  void UnityAdsDelegate_Invoke_m3968753935 (UnityAdsDelegate_t3613839672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAdsDelegate_BeginInvoke_m1012566798 (UnityAdsDelegate_t3613839672 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAdsDelegate_EndInvoke_m246878933 (UnityAdsDelegate_t3613839672 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
