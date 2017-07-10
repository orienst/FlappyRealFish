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

// iTween/ApplyTween
struct ApplyTween_t747394300;
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

// System.Void iTween/ApplyTween::.ctor(System.Object,System.IntPtr)
extern "C"  void ApplyTween__ctor_m3027905099 (ApplyTween_t747394300 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween/ApplyTween::Invoke()
extern "C"  void ApplyTween_Invoke_m1380511543 (ApplyTween_t747394300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult iTween/ApplyTween::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ApplyTween_BeginInvoke_m721832448 (ApplyTween_t747394300 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween/ApplyTween::EndInvoke(System.IAsyncResult)
extern "C"  void ApplyTween_EndInvoke_m3983111513 (ApplyTween_t747394300 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
