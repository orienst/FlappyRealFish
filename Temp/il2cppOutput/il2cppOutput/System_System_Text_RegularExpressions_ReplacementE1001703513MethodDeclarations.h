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

// System.Text.RegularExpressions.ReplacementEvaluator
struct ReplacementEvaluator_t1001703513;
// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t3164245899;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Regex1803876613.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Text_RegularExpressions_Match3164245899.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void System.Text.RegularExpressions.ReplacementEvaluator::.ctor(System.Text.RegularExpressions.Regex,System.String)
extern "C"  void ReplacementEvaluator__ctor_m3746900384 (ReplacementEvaluator_t1001703513 * __this, Regex_t1803876613 * ___regex0, String_t* ___replacement1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.ReplacementEvaluator::Evaluate(System.Text.RegularExpressions.Match)
extern "C"  String_t* ReplacementEvaluator_Evaluate_m197194936 (ReplacementEvaluator_t1001703513 * __this, Match_t3164245899 * ___match0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::EvaluateAppend(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern "C"  void ReplacementEvaluator_EvaluateAppend_m4165611689 (ReplacementEvaluator_t1001703513 * __this, Match_t3164245899 * ___match0, StringBuilder_t1221177846 * ___sb1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.ReplacementEvaluator::get_NeedsGroupsOrCaptures()
extern "C"  bool ReplacementEvaluator_get_NeedsGroupsOrCaptures_m3532058782 (ReplacementEvaluator_t1001703513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Ensure(System.Int32)
extern "C"  void ReplacementEvaluator_Ensure_m2025598273 (ReplacementEvaluator_t1001703513 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddFromReplacement(System.Int32,System.Int32)
extern "C"  void ReplacementEvaluator_AddFromReplacement_m3891576415 (ReplacementEvaluator_t1001703513 * __this, int32_t ___start0, int32_t ___end1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddInt(System.Int32)
extern "C"  void ReplacementEvaluator_AddInt_m2149831105 (ReplacementEvaluator_t1001703513 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Compile()
extern "C"  void ReplacementEvaluator_Compile_m1875719451 (ReplacementEvaluator_t1001703513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.ReplacementEvaluator::CompileTerm(System.Int32&)
extern "C"  int32_t ReplacementEvaluator_CompileTerm_m1895109616 (ReplacementEvaluator_t1001703513 * __this, int32_t* ___ptr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
