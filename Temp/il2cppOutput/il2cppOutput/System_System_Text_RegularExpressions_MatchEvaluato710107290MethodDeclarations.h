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

// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t710107290;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t3164245899;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Text_RegularExpressions_Match3164245899.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
extern "C"  void MatchEvaluator__ctor_m3633185959 (MatchEvaluator_t710107290 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
extern "C"  String_t* MatchEvaluator_Invoke_m3037466252 (MatchEvaluator_t710107290 * __this, Match_t3164245899 * ___match0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MatchEvaluator_BeginInvoke_m503772792 (MatchEvaluator_t710107290 * __this, Match_t3164245899 * ___match0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
extern "C"  String_t* MatchEvaluator_EndInvoke_m3902136768 (MatchEvaluator_t710107290 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
