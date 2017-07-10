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

// SimpleJson.JsonObject
struct JsonObject_t2300545015;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t2981295538;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t3641524600;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t3332939458;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t4132064902;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22361573779.h"

// System.Void SimpleJson.JsonObject::.ctor()
extern "C"  void JsonObject__ctor_m2062444459 (JsonObject_t2300545015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * JsonObject_System_Collections_IEnumerable_GetEnumerator_m763605844 (JsonObject_t2300545015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::Add(System.String,System.Object)
extern "C"  void JsonObject_Add_m3402027904 (JsonObject_t2300545015 * __this, String_t* ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::ContainsKey(System.String)
extern "C"  bool JsonObject_ContainsKey_m567001925 (JsonObject_t2300545015 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> SimpleJson.JsonObject::get_Keys()
extern "C"  Il2CppObject* JsonObject_get_Keys_m98057106 (JsonObject_t2300545015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.Object> SimpleJson.JsonObject::get_Values()
extern "C"  Il2CppObject* JsonObject_get_Values_m3342885038 (JsonObject_t2300545015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.JsonObject::get_Item(System.String)
extern "C"  Il2CppObject * JsonObject_get_Item_m1018841170 (JsonObject_t2300545015 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern "C"  void JsonObject_set_Item_m475151339 (JsonObject_t2300545015 * __this, String_t* ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C"  void JsonObject_Add_m534223875 (JsonObject_t2300545015 * __this, KeyValuePair_2_t2361573779  ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::Clear()
extern "C"  void JsonObject_Clear_m2413527334 (JsonObject_t2300545015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C"  bool JsonObject_Contains_m3389598869 (JsonObject_t2300545015 * __this, KeyValuePair_2_t2361573779  ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern "C"  void JsonObject_CopyTo_m4217013231 (JsonObject_t2300545015 * __this, KeyValuePair_2U5BU5D_t3332939458* ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.JsonObject::get_Count()
extern "C"  int32_t JsonObject_get_Count_m1372513591 (JsonObject_t2300545015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::get_IsReadOnly()
extern "C"  bool JsonObject_get_IsReadOnly_m2070569848 (JsonObject_t2300545015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C"  bool JsonObject_Remove_m968288636 (JsonObject_t2300545015 * __this, KeyValuePair_2_t2361573779  ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern "C"  Il2CppObject* JsonObject_GetEnumerator_m1868414604 (JsonObject_t2300545015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.JsonObject::ToString()
extern "C"  String_t* JsonObject_ToString_m1270529244 (JsonObject_t2300545015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
