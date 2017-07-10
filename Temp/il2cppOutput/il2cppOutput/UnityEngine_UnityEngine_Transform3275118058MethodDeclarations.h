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

// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Space4278750806.h"

// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2469242620 (Transform_t3275118058 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_get_position_m1881704498 (Transform_t3275118058 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_set_position_m101633598 (Transform_t3275118058 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C"  Vector3_t2243707580  Transform_get_localPosition_m2533925116 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m1026930133 (Transform_t3275118058 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_get_localPosition_m94028171 (Transform_t3275118058 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_set_localPosition_m432504087 (Transform_t3275118058 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C"  Vector3_t2243707580  Transform_get_eulerAngles_m4066505159 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
extern "C"  void Transform_set_eulerAngles_m2881310872 (Transform_t3275118058 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
extern "C"  Vector3_t2243707580  Transform_get_localEulerAngles_m4231787854 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
extern "C"  void Transform_set_localEulerAngles_m2927195985 (Transform_t3275118058 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C"  Vector3_t2243707580  Transform_get_forward_m1833488937 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t4030073918  Transform_get_rotation_m1033555130 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3411284563 (Transform_t3275118058 * __this, Quaternion_t4030073918  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C"  void Transform_INTERNAL_get_rotation_m2427701365 (Transform_t3275118058 * __this, Quaternion_t4030073918 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C"  void Transform_INTERNAL_set_rotation_m3703763817 (Transform_t3275118058 * __this, Quaternion_t4030073918 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C"  Quaternion_t4030073918  Transform_get_localRotation_m4001487205 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_localRotation_m2055111962 (Transform_t3275118058 * __this, Quaternion_t4030073918  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C"  void Transform_INTERNAL_get_localRotation_m2064954684 (Transform_t3275118058 * __this, Quaternion_t4030073918 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C"  void Transform_INTERNAL_set_localRotation_m37206568 (Transform_t3275118058 * __this, Quaternion_t4030073918 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C"  Vector3_t2243707580  Transform_get_localScale_m3074381503 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m2325460848 (Transform_t3275118058 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_get_localScale_m2568549910 (Transform_t3275118058 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_set_localScale_m3680777866 (Transform_t3275118058 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C"  Transform_t3275118058 * Transform_get_parent_m147407266 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C"  void Transform_set_parent_m3281327839 (Transform_t3275118058 * __this, Transform_t3275118058 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C"  Transform_t3275118058 * Transform_get_parentInternal_m927919099 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C"  void Transform_set_parentInternal_m4124721022 (Transform_t3275118058 * __this, Transform_t3275118058 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C"  void Transform_SetParent_m4124909910 (Transform_t3275118058 * __this, Transform_t3275118058 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C"  void Transform_SetParent_m1963830867 (Transform_t3275118058 * __this, Transform_t3275118058 * ___parent0, bool ___worldPositionStays1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern "C"  Matrix4x4_t2933234003  Transform_get_worldToLocalMatrix_m3299477436 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C"  void Transform_INTERNAL_get_worldToLocalMatrix_m3394773201 (Transform_t3275118058 * __this, Matrix4x4_t2933234003 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
extern "C"  void Transform_Translate_m423862381 (Transform_t3275118058 * __this, Vector3_t2243707580  ___translation0, int32_t ___relativeTo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Translate_m3577349508 (Transform_t3275118058 * __this, float ___x0, float ___y1, float ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single,UnityEngine.Space)
extern "C"  void Transform_Translate_m1198703821 (Transform_t3275118058 * __this, float ___x0, float ___y1, float ___z2, int32_t ___relativeTo3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C"  void Transform_Rotate_m2612876682 (Transform_t3275118058 * __this, Vector3_t2243707580  ___eulerAngles0, int32_t ___relativeTo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Rotate_m4255273365 (Transform_t3275118058 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
extern "C"  void Transform_Rotate_m2449860094 (Transform_t3275118058 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void Transform_LookAt_m335101033 (Transform_t3275118058 * __this, Transform_t3275118058 * ___target0, Vector3_t2243707580  ___worldUp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Transform_LookAt_m3392147815 (Transform_t3275118058 * __this, Vector3_t2243707580  ___worldPosition0, Vector3_t2243707580  ___worldUp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_CALL_LookAt_m1443061981 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___self0, Vector3_t2243707580 * ___worldPosition1, Vector3_t2243707580 * ___worldUp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Transform_TransformDirection_m1639585047 (Transform_t3275118058 * __this, Vector3_t2243707580  ___direction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_CALL_TransformDirection_m2899991790 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___self0, Vector3_t2243707580 * ___direction1, Vector3_t2243707580 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Transform_TransformPoint_m3272254198 (Transform_t3275118058 * __this, Vector3_t2243707580  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_CALL_TransformPoint_m4114689647 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___self0, Vector3_t2243707580 * ___position1, Vector3_t2243707580 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Transform_InverseTransformPoint_m2648491174 (Transform_t3275118058 * __this, Vector3_t2243707580  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_CALL_InverseTransformPoint_m69330567 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___self0, Vector3_t2243707580 * ___position1, Vector3_t2243707580 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m881385315 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::DetachChildren()
extern "C"  void Transform_DetachChildren_m2873894053 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C"  void Transform_SetAsFirstSibling_m3606528771 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
extern "C"  bool Transform_IsChildOf_m10844547 (Transform_t3275118058 * __this, Transform_t3275118058 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C"  Il2CppObject * Transform_GetEnumerator_m3479720613 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t3275118058 * Transform_GetChild_m3838588184 (Transform_t3275118058 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
