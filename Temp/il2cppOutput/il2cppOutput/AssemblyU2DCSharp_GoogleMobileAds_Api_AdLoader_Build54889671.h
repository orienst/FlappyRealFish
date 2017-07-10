#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>
struct HashSet_1_t3722552280;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t362681087;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>
struct Dictionary_2_t3127549387;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.AdLoader/Builder
struct  Builder_t54889671  : public Il2CppObject
{
public:
	// System.String GoogleMobileAds.Api.AdLoader/Builder::<AdUnitId>k__BackingField
	String_t* ___U3CAdUnitIdU3Ek__BackingField_0;
	// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType> GoogleMobileAds.Api.AdLoader/Builder::<AdTypes>k__BackingField
	HashSet_1_t3722552280 * ___U3CAdTypesU3Ek__BackingField_1;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdLoader/Builder::<TemplateIds>k__BackingField
	HashSet_1_t362681087 * ___U3CTemplateIdsU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>> GoogleMobileAds.Api.AdLoader/Builder::<CustomNativeTemplateClickHandlers>k__BackingField
	Dictionary_2_t3127549387 * ___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CAdUnitIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_t54889671, ___U3CAdUnitIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CAdUnitIdU3Ek__BackingField_0() const { return ___U3CAdUnitIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CAdUnitIdU3Ek__BackingField_0() { return &___U3CAdUnitIdU3Ek__BackingField_0; }
	inline void set_U3CAdUnitIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CAdUnitIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAdUnitIdU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CAdTypesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_t54889671, ___U3CAdTypesU3Ek__BackingField_1)); }
	inline HashSet_1_t3722552280 * get_U3CAdTypesU3Ek__BackingField_1() const { return ___U3CAdTypesU3Ek__BackingField_1; }
	inline HashSet_1_t3722552280 ** get_address_of_U3CAdTypesU3Ek__BackingField_1() { return &___U3CAdTypesU3Ek__BackingField_1; }
	inline void set_U3CAdTypesU3Ek__BackingField_1(HashSet_1_t3722552280 * value)
	{
		___U3CAdTypesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAdTypesU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CTemplateIdsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_t54889671, ___U3CTemplateIdsU3Ek__BackingField_2)); }
	inline HashSet_1_t362681087 * get_U3CTemplateIdsU3Ek__BackingField_2() const { return ___U3CTemplateIdsU3Ek__BackingField_2; }
	inline HashSet_1_t362681087 ** get_address_of_U3CTemplateIdsU3Ek__BackingField_2() { return &___U3CTemplateIdsU3Ek__BackingField_2; }
	inline void set_U3CTemplateIdsU3Ek__BackingField_2(HashSet_1_t362681087 * value)
	{
		___U3CTemplateIdsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTemplateIdsU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Builder_t54889671, ___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3)); }
	inline Dictionary_2_t3127549387 * get_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3() const { return ___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3; }
	inline Dictionary_2_t3127549387 ** get_address_of_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3() { return &___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3; }
	inline void set_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3(Dictionary_2_t3127549387 * value)
	{
		___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
