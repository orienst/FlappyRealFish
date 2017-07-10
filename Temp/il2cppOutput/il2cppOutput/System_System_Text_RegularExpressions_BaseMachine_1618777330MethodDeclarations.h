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

// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t1618777330;
// System.Object
struct Il2CppObject;
// System.Text.RegularExpressions.Match
struct Match_t3164245899;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Text_RegularExpressions_Match3164245899.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::.ctor(System.Object,System.IntPtr)
extern "C"  void MatchAppendEvaluator__ctor_m3486625178 (MatchAppendEvaluator_t1618777330 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::Invoke(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern "C"  void MatchAppendEvaluator_Invoke_m3703737128 (MatchAppendEvaluator_t1618777330 * __this, Match_t3164245899 * ___match0, StringBuilder_t1221177846 * ___sb1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.Text.StringBuilder,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MatchAppendEvaluator_BeginInvoke_m3482977851 (MatchAppendEvaluator_t1618777330 * __this, Match_t3164245899 * ___match0, StringBuilder_t1221177846 * ___sb1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::EndInvoke(System.IAsyncResult)
extern "C"  void MatchAppendEvaluator_EndInvoke_m269118460 (MatchAppendEvaluator_t1618777330 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
