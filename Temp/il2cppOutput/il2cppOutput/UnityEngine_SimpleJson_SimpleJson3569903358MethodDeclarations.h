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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// SimpleJson.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t209712766;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// System.Char[]
struct CharU5BU5D_t1328083999;
// SimpleJson.JsonArray
struct JsonArray_t1679500587;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t2810850750;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Object SimpleJson.SimpleJson::DeserializeObject(System.String)
extern "C"  Il2CppObject * SimpleJson_DeserializeObject_m4008938349 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern "C"  bool SimpleJson_TryDeserializeObject_m2024713247 (Il2CppObject * __this /* static, unused */, String_t* ___json0, Il2CppObject ** ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern "C"  String_t* SimpleJson_SerializeObject_m3389162840 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___json0, Il2CppObject * ___jsonSerializerStrategy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C"  String_t* SimpleJson_SerializeObject_m478839316 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Il2CppObject* SimpleJson_ParseObject_m2464058880 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern "C"  JsonArray_t1679500587 * SimpleJson_ParseArray_m3513734753 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Il2CppObject * SimpleJson_ParseValue_m1002395532 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern "C"  String_t* SimpleJson_ParseString_m1134805156 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern "C"  String_t* SimpleJson_ConvertFromUtf32_m799444971 (Il2CppObject * __this /* static, unused */, int32_t ___utf320, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Il2CppObject * SimpleJson_ParseNumber_m2704962974 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C"  int32_t SimpleJson_GetLastIndexOfNumber_m3446027218 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern "C"  void SimpleJson_EatWhitespace_m481181633 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C"  int32_t SimpleJson_LookAhead_m2426341548 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C"  int32_t SimpleJson_NextToken_m3906376762 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern "C"  bool SimpleJson_SerializeValue_m2700795577 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___jsonSerializerStrategy0, Il2CppObject * ___value1, StringBuilder_t1221177846 * ___builder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C"  bool SimpleJson_SerializeObject_m3504199269 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___jsonSerializerStrategy0, Il2CppObject * ___keys1, Il2CppObject * ___values2, StringBuilder_t1221177846 * ___builder3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C"  bool SimpleJson_SerializeArray_m779157756 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___jsonSerializerStrategy0, Il2CppObject * ___anArray1, StringBuilder_t1221177846 * ___builder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C"  bool SimpleJson_SerializeString_m1750369917 (Il2CppObject * __this /* static, unused */, String_t* ___aString0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern "C"  bool SimpleJson_SerializeNumber_m1195210771 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___number0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern "C"  bool SimpleJson_IsNumeric_m810085359 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern "C"  Il2CppObject * SimpleJson_get_CurrentJsonSerializerStrategy_m3073481146 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern "C"  PocoJsonSerializerStrategy_t2810850750 * SimpleJson_get_PocoJsonSerializerStrategy_m3655250970 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
