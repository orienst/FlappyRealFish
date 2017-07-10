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

// System.Text.RegularExpressions.BaseMachine
struct BaseMachine_t4008011478;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;
// System.Text.RegularExpressions.Match
struct Match_t3164245899;
// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t1618777330;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t710107290;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Regex1803876613.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Text_RegularExpressions_BaseMachine_1618777330.h"
#include "System_System_Text_RegularExpressions_MatchEvaluato710107290.h"

// System.Void System.Text.RegularExpressions.BaseMachine::.ctor()
extern "C"  void BaseMachine__ctor_m2327544039 (BaseMachine_t4008011478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::Replace(System.Text.RegularExpressions.Regex,System.String,System.String,System.Int32,System.Int32)
extern "C"  String_t* BaseMachine_Replace_m2446015132 (BaseMachine_t4008011478 * __this, Regex_t1803876613 * ___regex0, String_t* ___input1, String_t* ___replacement2, int32_t ___count3, int32_t ___startat4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.BaseMachine::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C"  Match_t3164245899 * BaseMachine_Scan_m122450399 (BaseMachine_t4008011478 * __this, Regex_t1803876613 * ___regex0, String_t* ___text1, int32_t ___start2, int32_t ___end3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::LTRReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator,System.Int32,System.Int32,System.Boolean)
extern "C"  String_t* BaseMachine_LTRReplace_m1094774497 (BaseMachine_t4008011478 * __this, Regex_t1803876613 * ___regex0, String_t* ___input1, MatchAppendEvaluator_t1618777330 * ___evaluator2, int32_t ___count3, int32_t ___startat4, bool ___needs_groups_or_captures5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::RTLReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.MatchEvaluator,System.Int32,System.Int32)
extern "C"  String_t* BaseMachine_RTLReplace_m25431723 (BaseMachine_t4008011478 * __this, Regex_t1803876613 * ___regex0, String_t* ___input1, MatchEvaluator_t710107290 * ___evaluator2, int32_t ___count3, int32_t ___startat4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
