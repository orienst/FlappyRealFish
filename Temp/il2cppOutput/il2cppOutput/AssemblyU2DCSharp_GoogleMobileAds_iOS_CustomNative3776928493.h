#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>
struct Action_2_t1212770125;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.CustomNativeTemplateClient
struct  CustomNativeTemplateClient_t3776928493  : public Il2CppObject
{
public:
	// System.IntPtr GoogleMobileAds.iOS.CustomNativeTemplateClient::customNativeAdPtr
	IntPtr_t ___customNativeAdPtr_0;
	// System.IntPtr GoogleMobileAds.iOS.CustomNativeTemplateClient::customNativeTemplateAdClientPtr
	IntPtr_t ___customNativeTemplateAdClientPtr_1;
	// System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String> GoogleMobileAds.iOS.CustomNativeTemplateClient::clickHandler
	Action_2_t1212770125 * ___clickHandler_2;

public:
	inline static int32_t get_offset_of_customNativeAdPtr_0() { return static_cast<int32_t>(offsetof(CustomNativeTemplateClient_t3776928493, ___customNativeAdPtr_0)); }
	inline IntPtr_t get_customNativeAdPtr_0() const { return ___customNativeAdPtr_0; }
	inline IntPtr_t* get_address_of_customNativeAdPtr_0() { return &___customNativeAdPtr_0; }
	inline void set_customNativeAdPtr_0(IntPtr_t value)
	{
		___customNativeAdPtr_0 = value;
	}

	inline static int32_t get_offset_of_customNativeTemplateAdClientPtr_1() { return static_cast<int32_t>(offsetof(CustomNativeTemplateClient_t3776928493, ___customNativeTemplateAdClientPtr_1)); }
	inline IntPtr_t get_customNativeTemplateAdClientPtr_1() const { return ___customNativeTemplateAdClientPtr_1; }
	inline IntPtr_t* get_address_of_customNativeTemplateAdClientPtr_1() { return &___customNativeTemplateAdClientPtr_1; }
	inline void set_customNativeTemplateAdClientPtr_1(IntPtr_t value)
	{
		___customNativeTemplateAdClientPtr_1 = value;
	}

	inline static int32_t get_offset_of_clickHandler_2() { return static_cast<int32_t>(offsetof(CustomNativeTemplateClient_t3776928493, ___clickHandler_2)); }
	inline Action_2_t1212770125 * get_clickHandler_2() const { return ___clickHandler_2; }
	inline Action_2_t1212770125 ** get_address_of_clickHandler_2() { return &___clickHandler_2; }
	inline void set_clickHandler_2(Action_2_t1212770125 * value)
	{
		___clickHandler_2 = value;
		Il2CppCodeGenWriteBarrier(&___clickHandler_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
