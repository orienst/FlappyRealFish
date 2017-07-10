#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoogleMobileAds.Common.IAdLoaderClient
struct IAdLoaderClient_t371501964;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t347919082;
// System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>
struct EventHandler_1_t1249765249;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>
struct Dictionary_2_t3127549387;
// System.String
struct String_t;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>
struct HashSet_1_t3722552280;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t362681087;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.AdLoader
struct  AdLoader_t554394170  : public Il2CppObject
{
public:
	// GoogleMobileAds.Common.IAdLoaderClient GoogleMobileAds.Api.AdLoader::adLoaderClient
	Il2CppObject * ___adLoaderClient_0;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.AdLoader::OnAdFailedToLoad
	EventHandler_1_t347919082 * ___OnAdFailedToLoad_1;
	// System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs> GoogleMobileAds.Api.AdLoader::OnCustomNativeTemplateAdLoaded
	EventHandler_1_t1249765249 * ___OnCustomNativeTemplateAdLoaded_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>> GoogleMobileAds.Api.AdLoader::<CustomNativeTemplateClickHandlers>k__BackingField
	Dictionary_2_t3127549387 * ___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3;
	// System.String GoogleMobileAds.Api.AdLoader::<AdUnitId>k__BackingField
	String_t* ___U3CAdUnitIdU3Ek__BackingField_4;
	// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType> GoogleMobileAds.Api.AdLoader::<AdTypes>k__BackingField
	HashSet_1_t3722552280 * ___U3CAdTypesU3Ek__BackingField_5;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdLoader::<TemplateIds>k__BackingField
	HashSet_1_t362681087 * ___U3CTemplateIdsU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_adLoaderClient_0() { return static_cast<int32_t>(offsetof(AdLoader_t554394170, ___adLoaderClient_0)); }
	inline Il2CppObject * get_adLoaderClient_0() const { return ___adLoaderClient_0; }
	inline Il2CppObject ** get_address_of_adLoaderClient_0() { return &___adLoaderClient_0; }
	inline void set_adLoaderClient_0(Il2CppObject * value)
	{
		___adLoaderClient_0 = value;
		Il2CppCodeGenWriteBarrier(&___adLoaderClient_0, value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_1() { return static_cast<int32_t>(offsetof(AdLoader_t554394170, ___OnAdFailedToLoad_1)); }
	inline EventHandler_1_t347919082 * get_OnAdFailedToLoad_1() const { return ___OnAdFailedToLoad_1; }
	inline EventHandler_1_t347919082 ** get_address_of_OnAdFailedToLoad_1() { return &___OnAdFailedToLoad_1; }
	inline void set_OnAdFailedToLoad_1(EventHandler_1_t347919082 * value)
	{
		___OnAdFailedToLoad_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdFailedToLoad_1, value);
	}

	inline static int32_t get_offset_of_OnCustomNativeTemplateAdLoaded_2() { return static_cast<int32_t>(offsetof(AdLoader_t554394170, ___OnCustomNativeTemplateAdLoaded_2)); }
	inline EventHandler_1_t1249765249 * get_OnCustomNativeTemplateAdLoaded_2() const { return ___OnCustomNativeTemplateAdLoaded_2; }
	inline EventHandler_1_t1249765249 ** get_address_of_OnCustomNativeTemplateAdLoaded_2() { return &___OnCustomNativeTemplateAdLoaded_2; }
	inline void set_OnCustomNativeTemplateAdLoaded_2(EventHandler_1_t1249765249 * value)
	{
		___OnCustomNativeTemplateAdLoaded_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnCustomNativeTemplateAdLoaded_2, value);
	}

	inline static int32_t get_offset_of_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AdLoader_t554394170, ___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3)); }
	inline Dictionary_2_t3127549387 * get_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3() const { return ___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3; }
	inline Dictionary_2_t3127549387 ** get_address_of_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3() { return &___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3; }
	inline void set_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3(Dictionary_2_t3127549387 * value)
	{
		___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CAdUnitIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AdLoader_t554394170, ___U3CAdUnitIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CAdUnitIdU3Ek__BackingField_4() const { return ___U3CAdUnitIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CAdUnitIdU3Ek__BackingField_4() { return &___U3CAdUnitIdU3Ek__BackingField_4; }
	inline void set_U3CAdUnitIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CAdUnitIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAdUnitIdU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CAdTypesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AdLoader_t554394170, ___U3CAdTypesU3Ek__BackingField_5)); }
	inline HashSet_1_t3722552280 * get_U3CAdTypesU3Ek__BackingField_5() const { return ___U3CAdTypesU3Ek__BackingField_5; }
	inline HashSet_1_t3722552280 ** get_address_of_U3CAdTypesU3Ek__BackingField_5() { return &___U3CAdTypesU3Ek__BackingField_5; }
	inline void set_U3CAdTypesU3Ek__BackingField_5(HashSet_1_t3722552280 * value)
	{
		___U3CAdTypesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAdTypesU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CTemplateIdsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AdLoader_t554394170, ___U3CTemplateIdsU3Ek__BackingField_6)); }
	inline HashSet_1_t362681087 * get_U3CTemplateIdsU3Ek__BackingField_6() const { return ___U3CTemplateIdsU3Ek__BackingField_6; }
	inline HashSet_1_t362681087 ** get_address_of_U3CTemplateIdsU3Ek__BackingField_6() { return &___U3CTemplateIdsU3Ek__BackingField_6; }
	inline void set_U3CTemplateIdsU3Ek__BackingField_6(HashSet_1_t362681087 * value)
	{
		___U3CTemplateIdsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTemplateIdsU3Ek__BackingField_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
