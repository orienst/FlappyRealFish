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

// SimpleJson.Reflection.ReflectionUtils/SetDelegate
struct SetDelegate_t4206365109;
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

// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SetDelegate__ctor_m3526263997 (SetDelegate_t4206365109 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern "C"  void SetDelegate_Invoke_m1756397093 (SetDelegate_t4206365109 * __this, Il2CppObject * ___source0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SetDelegate_BeginInvoke_m2186054362 (SetDelegate_t4206365109 * __this, Il2CppObject * ___source0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void SetDelegate_EndInvoke_m382620167 (SetDelegate_t4206365109 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
