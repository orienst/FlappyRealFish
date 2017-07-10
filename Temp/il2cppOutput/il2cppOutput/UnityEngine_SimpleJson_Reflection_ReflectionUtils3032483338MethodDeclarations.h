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

// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
struct IEnumerable_1_t3143943587;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t2545856110;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t547167195;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t3084043859;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct GetDelegate_t352281633;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
struct SetDelegate_t4206365109;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_PropertyInfo2253729065.h"
#include "mscorlib_System_Reflection_ConstructorInfo2851816542.h"
#include "mscorlib_System_Reflection_FieldInfo255040150.h"

// System.Void SimpleJson.Reflection.ReflectionUtils::.cctor()
extern "C"  void ReflectionUtils__cctor_m3529209954 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C"  Il2CppObject* ReflectionUtils_GetConstructors_m2419931237 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern "C"  ConstructorInfo_t2851816542 * ReflectionUtils_GetConstructorInfo_m577110104 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t1664964607* ___argsType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C"  Il2CppObject* ReflectionUtils_GetProperties_m1086308370 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C"  Il2CppObject* ReflectionUtils_GetFields_m771042561 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C"  MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m1539519564 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C"  MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m1933298824 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern "C"  ConstructorDelegate_t3084043859 * ReflectionUtils_GetContructor_m2213599410 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t1664964607* ___argsType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern "C"  ConstructorDelegate_t3084043859 * ReflectionUtils_GetConstructorByReflection_m2214455175 (Il2CppObject * __this /* static, unused */, ConstructorInfo_t2851816542 * ___constructorInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern "C"  ConstructorDelegate_t3084043859 * ReflectionUtils_GetConstructorByReflection_m2587709881 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t1664964607* ___argsType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern "C"  GetDelegate_t352281633 * ReflectionUtils_GetGetMethod_m3146646939 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern "C"  GetDelegate_t352281633 * ReflectionUtils_GetGetMethod_m2453322602 (Il2CppObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern "C"  GetDelegate_t352281633 * ReflectionUtils_GetGetMethodByReflection_m436060527 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern "C"  GetDelegate_t352281633 * ReflectionUtils_GetGetMethodByReflection_m4176955894 (Il2CppObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern "C"  SetDelegate_t4206365109 * ReflectionUtils_GetSetMethod_m2416528667 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern "C"  SetDelegate_t4206365109 * ReflectionUtils_GetSetMethod_m3627950826 (Il2CppObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern "C"  SetDelegate_t4206365109 * ReflectionUtils_GetSetMethodByReflection_m45132015 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern "C"  SetDelegate_t4206365109 * ReflectionUtils_GetSetMethodByReflection_m2697613686 (Il2CppObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
