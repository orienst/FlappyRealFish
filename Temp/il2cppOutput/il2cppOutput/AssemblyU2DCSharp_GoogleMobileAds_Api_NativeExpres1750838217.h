#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoogleMobileAds.Common.INativeExpressAdClient
struct INativeExpressAdClient_t3935714584;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t347919082;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.NativeExpressAdView
struct  NativeExpressAdView_t1750838217  : public Il2CppObject
{
public:
	// GoogleMobileAds.Common.INativeExpressAdClient GoogleMobileAds.Api.NativeExpressAdView::client
	Il2CppObject * ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.NativeExpressAdView::OnAdLoaded
	EventHandler_1_t1880931879 * ___OnAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.NativeExpressAdView::OnAdFailedToLoad
	EventHandler_1_t347919082 * ___OnAdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.NativeExpressAdView::OnAdOpening
	EventHandler_1_t1880931879 * ___OnAdOpening_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.NativeExpressAdView::OnAdClosed
	EventHandler_1_t1880931879 * ___OnAdClosed_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.NativeExpressAdView::OnAdLeavingApplication
	EventHandler_1_t1880931879 * ___OnAdLeavingApplication_5;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(NativeExpressAdView_t1750838217, ___client_0)); }
	inline Il2CppObject * get_client_0() const { return ___client_0; }
	inline Il2CppObject ** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(Il2CppObject * value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier(&___client_0, value);
	}

	inline static int32_t get_offset_of_OnAdLoaded_1() { return static_cast<int32_t>(offsetof(NativeExpressAdView_t1750838217, ___OnAdLoaded_1)); }
	inline EventHandler_1_t1880931879 * get_OnAdLoaded_1() const { return ___OnAdLoaded_1; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdLoaded_1() { return &___OnAdLoaded_1; }
	inline void set_OnAdLoaded_1(EventHandler_1_t1880931879 * value)
	{
		___OnAdLoaded_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdLoaded_1, value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_2() { return static_cast<int32_t>(offsetof(NativeExpressAdView_t1750838217, ___OnAdFailedToLoad_2)); }
	inline EventHandler_1_t347919082 * get_OnAdFailedToLoad_2() const { return ___OnAdFailedToLoad_2; }
	inline EventHandler_1_t347919082 ** get_address_of_OnAdFailedToLoad_2() { return &___OnAdFailedToLoad_2; }
	inline void set_OnAdFailedToLoad_2(EventHandler_1_t347919082 * value)
	{
		___OnAdFailedToLoad_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdFailedToLoad_2, value);
	}

	inline static int32_t get_offset_of_OnAdOpening_3() { return static_cast<int32_t>(offsetof(NativeExpressAdView_t1750838217, ___OnAdOpening_3)); }
	inline EventHandler_1_t1880931879 * get_OnAdOpening_3() const { return ___OnAdOpening_3; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdOpening_3() { return &___OnAdOpening_3; }
	inline void set_OnAdOpening_3(EventHandler_1_t1880931879 * value)
	{
		___OnAdOpening_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdOpening_3, value);
	}

	inline static int32_t get_offset_of_OnAdClosed_4() { return static_cast<int32_t>(offsetof(NativeExpressAdView_t1750838217, ___OnAdClosed_4)); }
	inline EventHandler_1_t1880931879 * get_OnAdClosed_4() const { return ___OnAdClosed_4; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdClosed_4() { return &___OnAdClosed_4; }
	inline void set_OnAdClosed_4(EventHandler_1_t1880931879 * value)
	{
		___OnAdClosed_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdClosed_4, value);
	}

	inline static int32_t get_offset_of_OnAdLeavingApplication_5() { return static_cast<int32_t>(offsetof(NativeExpressAdView_t1750838217, ___OnAdLeavingApplication_5)); }
	inline EventHandler_1_t1880931879 * get_OnAdLeavingApplication_5() const { return ___OnAdLeavingApplication_5; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdLeavingApplication_5() { return &___OnAdLeavingApplication_5; }
	inline void set_OnAdLeavingApplication_5(EventHandler_1_t1880931879 * value)
	{
		___OnAdLeavingApplication_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdLeavingApplication_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
