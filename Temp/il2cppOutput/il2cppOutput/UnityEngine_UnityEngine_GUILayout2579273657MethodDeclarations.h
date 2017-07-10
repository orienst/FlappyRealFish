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

// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2108882777;
// UnityEngine.GUIContent
struct GUIContent_t4210063000;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t4183744904;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GUIContent4210063000.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m3466110979 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUILayoutOptionU5BU5D_t2108882777* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_DoLabel_m3790214718 (Il2CppObject * __this /* static, unused */, GUIContent_t4210063000 * ___content0, GUIStyle_t1799908754 * ___style1, GUILayoutOptionU5BU5D_t2108882777* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_Button_m3322709003 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUILayoutOptionU5BU5D_t2108882777* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_DoButton_m1965952312 (Il2CppObject * __this /* static, unused */, GUIContent_t4210063000 * ___content0, GUIStyle_t1799908754 * ___style1, GUILayoutOptionU5BU5D_t2108882777* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Space(System.Single)
extern "C"  void GUILayout_Space_m1087863221 (Il2CppObject * __this /* static, unused */, float ___pixels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m212592284 (Il2CppObject * __this /* static, unused */, GUILayoutOptionU5BU5D_t2108882777* ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m4254247010 (Il2CppObject * __this /* static, unused */, GUIContent_t4210063000 * ___content0, GUIStyle_t1799908754 * ___style1, GUILayoutOptionU5BU5D_t2108882777* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C"  void GUILayout_EndHorizontal_m4258536965 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C"  GUILayoutOption_t4183744904 * GUILayout_Width_m261136689 (Il2CppObject * __this /* static, unused */, float ___width0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C"  GUILayoutOption_t4183744904 * GUILayout_Height_m607115982 (Il2CppObject * __this /* static, unused */, float ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
