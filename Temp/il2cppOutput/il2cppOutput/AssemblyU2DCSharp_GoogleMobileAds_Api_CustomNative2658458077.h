#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoogleMobileAds.Api.CustomNativeTemplateAd
struct CustomNativeTemplateAd_t2034144705;

#include "mscorlib_System_EventArgs3289624707.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.CustomNativeEventArgs
struct  CustomNativeEventArgs_t2658458077  : public EventArgs_t3289624707
{
public:
	// GoogleMobileAds.Api.CustomNativeTemplateAd GoogleMobileAds.Api.CustomNativeEventArgs::<nativeAd>k__BackingField
	CustomNativeTemplateAd_t2034144705 * ___U3CnativeAdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CnativeAdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CustomNativeEventArgs_t2658458077, ___U3CnativeAdU3Ek__BackingField_1)); }
	inline CustomNativeTemplateAd_t2034144705 * get_U3CnativeAdU3Ek__BackingField_1() const { return ___U3CnativeAdU3Ek__BackingField_1; }
	inline CustomNativeTemplateAd_t2034144705 ** get_address_of_U3CnativeAdU3Ek__BackingField_1() { return &___U3CnativeAdU3Ek__BackingField_1; }
	inline void set_U3CnativeAdU3Ek__BackingField_1(CustomNativeTemplateAd_t2034144705 * value)
	{
		___U3CnativeAdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CnativeAdU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
