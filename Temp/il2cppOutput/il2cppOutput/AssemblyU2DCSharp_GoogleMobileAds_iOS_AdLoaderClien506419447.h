#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>
struct Dictionary_2_t3127549387;
// System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>
struct EventHandler_1_t1249765249;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t347919082;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.AdLoaderClient
struct  AdLoaderClient_t506419447  : public Il2CppObject
{
public:
	// System.IntPtr GoogleMobileAds.iOS.AdLoaderClient::adLoaderPtr
	IntPtr_t ___adLoaderPtr_0;
	// System.IntPtr GoogleMobileAds.iOS.AdLoaderClient::adLoaderClientPtr
	IntPtr_t ___adLoaderClientPtr_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>> GoogleMobileAds.iOS.AdLoaderClient::customNativeTemplateCallbacks
	Dictionary_2_t3127549387 * ___customNativeTemplateCallbacks_2;
	// System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs> GoogleMobileAds.iOS.AdLoaderClient::OnCustomNativeTemplateAdLoaded
	EventHandler_1_t1249765249 * ___OnCustomNativeTemplateAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.iOS.AdLoaderClient::OnAdFailedToLoad
	EventHandler_1_t347919082 * ___OnAdFailedToLoad_4;

public:
	inline static int32_t get_offset_of_adLoaderPtr_0() { return static_cast<int32_t>(offsetof(AdLoaderClient_t506419447, ___adLoaderPtr_0)); }
	inline IntPtr_t get_adLoaderPtr_0() const { return ___adLoaderPtr_0; }
	inline IntPtr_t* get_address_of_adLoaderPtr_0() { return &___adLoaderPtr_0; }
	inline void set_adLoaderPtr_0(IntPtr_t value)
	{
		___adLoaderPtr_0 = value;
	}

	inline static int32_t get_offset_of_adLoaderClientPtr_1() { return static_cast<int32_t>(offsetof(AdLoaderClient_t506419447, ___adLoaderClientPtr_1)); }
	inline IntPtr_t get_adLoaderClientPtr_1() const { return ___adLoaderClientPtr_1; }
	inline IntPtr_t* get_address_of_adLoaderClientPtr_1() { return &___adLoaderClientPtr_1; }
	inline void set_adLoaderClientPtr_1(IntPtr_t value)
	{
		___adLoaderClientPtr_1 = value;
	}

	inline static int32_t get_offset_of_customNativeTemplateCallbacks_2() { return static_cast<int32_t>(offsetof(AdLoaderClient_t506419447, ___customNativeTemplateCallbacks_2)); }
	inline Dictionary_2_t3127549387 * get_customNativeTemplateCallbacks_2() const { return ___customNativeTemplateCallbacks_2; }
	inline Dictionary_2_t3127549387 ** get_address_of_customNativeTemplateCallbacks_2() { return &___customNativeTemplateCallbacks_2; }
	inline void set_customNativeTemplateCallbacks_2(Dictionary_2_t3127549387 * value)
	{
		___customNativeTemplateCallbacks_2 = value;
		Il2CppCodeGenWriteBarrier(&___customNativeTemplateCallbacks_2, value);
	}

	inline static int32_t get_offset_of_OnCustomNativeTemplateAdLoaded_3() { return static_cast<int32_t>(offsetof(AdLoaderClient_t506419447, ___OnCustomNativeTemplateAdLoaded_3)); }
	inline EventHandler_1_t1249765249 * get_OnCustomNativeTemplateAdLoaded_3() const { return ___OnCustomNativeTemplateAdLoaded_3; }
	inline EventHandler_1_t1249765249 ** get_address_of_OnCustomNativeTemplateAdLoaded_3() { return &___OnCustomNativeTemplateAdLoaded_3; }
	inline void set_OnCustomNativeTemplateAdLoaded_3(EventHandler_1_t1249765249 * value)
	{
		___OnCustomNativeTemplateAdLoaded_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnCustomNativeTemplateAdLoaded_3, value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_4() { return static_cast<int32_t>(offsetof(AdLoaderClient_t506419447, ___OnAdFailedToLoad_4)); }
	inline EventHandler_1_t347919082 * get_OnAdFailedToLoad_4() const { return ___OnAdFailedToLoad_4; }
	inline EventHandler_1_t347919082 ** get_address_of_OnAdFailedToLoad_4() { return &___OnAdFailedToLoad_4; }
	inline void set_OnAdFailedToLoad_4(EventHandler_1_t347919082 * value)
	{
		___OnAdFailedToLoad_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdFailedToLoad_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
