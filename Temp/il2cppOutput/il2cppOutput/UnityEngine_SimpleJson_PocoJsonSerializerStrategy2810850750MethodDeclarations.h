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

// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t2810850750;
// System.String
struct String_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t3084043859;
// System.Type
struct Type_t;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct IDictionary_2_t266144316;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct IDictionary_2_t3814930911;
// System.Object
struct Il2CppObject;
// System.Enum
struct Enum_t2459695545;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Enum2459695545.h"

// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern "C"  void PocoJsonSerializerStrategy__ctor_m679193024 (PocoJsonSerializerStrategy_t2810850750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern "C"  void PocoJsonSerializerStrategy__cctor_m3858986209 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern "C"  String_t* PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m1498630973 (PocoJsonSerializerStrategy_t2810850750 * __this, String_t* ___clrPropertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern "C"  ConstructorDelegate_t3084043859 * PocoJsonSerializerStrategy_ContructorDelegateFactory_m2249307191 (PocoJsonSerializerStrategy_t2810850750 * __this, Type_t * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate> SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern "C"  Il2CppObject* PocoJsonSerializerStrategy_GetterValueFactory_m3591081731 (PocoJsonSerializerStrategy_t2810850750 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>> SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern "C"  Il2CppObject* PocoJsonSerializerStrategy_SetterValueFactory_m4054347921 (PocoJsonSerializerStrategy_t2810850750 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern "C"  bool PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m741807998 (PocoJsonSerializerStrategy_t2810850750 * __this, Il2CppObject * ___input0, Il2CppObject ** ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern "C"  Il2CppObject * PocoJsonSerializerStrategy_SerializeEnum_m387099298 (PocoJsonSerializerStrategy_t2810850750 * __this, Enum_t2459695545 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern "C"  bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1354296985 (PocoJsonSerializerStrategy_t2810850750 * __this, Il2CppObject * ___input0, Il2CppObject ** ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern "C"  bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m4062772870 (PocoJsonSerializerStrategy_t2810850750 * __this, Il2CppObject * ___input0, Il2CppObject ** ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
