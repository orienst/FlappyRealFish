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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t362681087;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"
#include "mscorlib_System_Nullable_1_gen1791139578.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.AdRequest
struct  AdRequest_t3179524098  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest::<TestDevices>k__BackingField
	List_1_t1398341365 * ___U3CTestDevicesU3Ek__BackingField_2;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_t362681087 * ___U3CKeywordsU3Ek__BackingField_3;
	// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest::<Birthday>k__BackingField
	Nullable_1_t3251239280  ___U3CBirthdayU3Ek__BackingField_4;
	// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest::<Gender>k__BackingField
	Nullable_1_t1791139578  ___U3CGenderU3Ek__BackingField_5;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest::<TagForChildDirectedTreatment>k__BackingField
	Nullable_1_t2088641033  ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_t3943999495 * ___U3CExtrasU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CTestDevicesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdRequest_t3179524098, ___U3CTestDevicesU3Ek__BackingField_2)); }
	inline List_1_t1398341365 * get_U3CTestDevicesU3Ek__BackingField_2() const { return ___U3CTestDevicesU3Ek__BackingField_2; }
	inline List_1_t1398341365 ** get_address_of_U3CTestDevicesU3Ek__BackingField_2() { return &___U3CTestDevicesU3Ek__BackingField_2; }
	inline void set_U3CTestDevicesU3Ek__BackingField_2(List_1_t1398341365 * value)
	{
		___U3CTestDevicesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTestDevicesU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AdRequest_t3179524098, ___U3CKeywordsU3Ek__BackingField_3)); }
	inline HashSet_1_t362681087 * get_U3CKeywordsU3Ek__BackingField_3() const { return ___U3CKeywordsU3Ek__BackingField_3; }
	inline HashSet_1_t362681087 ** get_address_of_U3CKeywordsU3Ek__BackingField_3() { return &___U3CKeywordsU3Ek__BackingField_3; }
	inline void set_U3CKeywordsU3Ek__BackingField_3(HashSet_1_t362681087 * value)
	{
		___U3CKeywordsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CKeywordsU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CBirthdayU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AdRequest_t3179524098, ___U3CBirthdayU3Ek__BackingField_4)); }
	inline Nullable_1_t3251239280  get_U3CBirthdayU3Ek__BackingField_4() const { return ___U3CBirthdayU3Ek__BackingField_4; }
	inline Nullable_1_t3251239280 * get_address_of_U3CBirthdayU3Ek__BackingField_4() { return &___U3CBirthdayU3Ek__BackingField_4; }
	inline void set_U3CBirthdayU3Ek__BackingField_4(Nullable_1_t3251239280  value)
	{
		___U3CBirthdayU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CGenderU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AdRequest_t3179524098, ___U3CGenderU3Ek__BackingField_5)); }
	inline Nullable_1_t1791139578  get_U3CGenderU3Ek__BackingField_5() const { return ___U3CGenderU3Ek__BackingField_5; }
	inline Nullable_1_t1791139578 * get_address_of_U3CGenderU3Ek__BackingField_5() { return &___U3CGenderU3Ek__BackingField_5; }
	inline void set_U3CGenderU3Ek__BackingField_5(Nullable_1_t1791139578  value)
	{
		___U3CGenderU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AdRequest_t3179524098, ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6)); }
	inline Nullable_1_t2088641033  get_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6() const { return ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6; }
	inline Nullable_1_t2088641033 * get_address_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6() { return &___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6; }
	inline void set_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6(Nullable_1_t2088641033  value)
	{
		___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AdRequest_t3179524098, ___U3CExtrasU3Ek__BackingField_7)); }
	inline Dictionary_2_t3943999495 * get_U3CExtrasU3Ek__BackingField_7() const { return ___U3CExtrasU3Ek__BackingField_7; }
	inline Dictionary_2_t3943999495 ** get_address_of_U3CExtrasU3Ek__BackingField_7() { return &___U3CExtrasU3Ek__BackingField_7; }
	inline void set_U3CExtrasU3Ek__BackingField_7(Dictionary_2_t3943999495 * value)
	{
		___U3CExtrasU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CExtrasU3Ek__BackingField_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
