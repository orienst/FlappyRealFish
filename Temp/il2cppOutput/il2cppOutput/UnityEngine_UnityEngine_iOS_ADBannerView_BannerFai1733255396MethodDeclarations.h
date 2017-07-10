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

// UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate
struct BannerFailedToLoadDelegate_t1733255396;
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

// System.Void UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void BannerFailedToLoadDelegate__ctor_m3082594514 (BannerFailedToLoadDelegate_t1733255396 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate::Invoke()
extern "C"  void BannerFailedToLoadDelegate_Invoke_m3564763944 (BannerFailedToLoadDelegate_t1733255396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * BannerFailedToLoadDelegate_BeginInvoke_m4025821291 (BannerFailedToLoadDelegate_t1733255396 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void BannerFailedToLoadDelegate_EndInvoke_m2271317768 (BannerFailedToLoadDelegate_t1733255396 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
