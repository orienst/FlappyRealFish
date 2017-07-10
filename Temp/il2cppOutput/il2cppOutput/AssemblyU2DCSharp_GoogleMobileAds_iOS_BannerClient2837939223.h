#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t347919082;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.BannerClient
struct  BannerClient_t2837939223  : public Il2CppObject
{
public:
	// System.IntPtr GoogleMobileAds.iOS.BannerClient::bannerViewPtr
	IntPtr_t ___bannerViewPtr_0;
	// System.IntPtr GoogleMobileAds.iOS.BannerClient::bannerClientPtr
	IntPtr_t ___bannerClientPtr_1;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.BannerClient::OnAdLoaded
	EventHandler_1_t1880931879 * ___OnAdLoaded_2;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.iOS.BannerClient::OnAdFailedToLoad
	EventHandler_1_t347919082 * ___OnAdFailedToLoad_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.BannerClient::OnAdOpening
	EventHandler_1_t1880931879 * ___OnAdOpening_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.BannerClient::OnAdClosed
	EventHandler_1_t1880931879 * ___OnAdClosed_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.BannerClient::OnAdLeavingApplication
	EventHandler_1_t1880931879 * ___OnAdLeavingApplication_6;

public:
	inline static int32_t get_offset_of_bannerViewPtr_0() { return static_cast<int32_t>(offsetof(BannerClient_t2837939223, ___bannerViewPtr_0)); }
	inline IntPtr_t get_bannerViewPtr_0() const { return ___bannerViewPtr_0; }
	inline IntPtr_t* get_address_of_bannerViewPtr_0() { return &___bannerViewPtr_0; }
	inline void set_bannerViewPtr_0(IntPtr_t value)
	{
		___bannerViewPtr_0 = value;
	}

	inline static int32_t get_offset_of_bannerClientPtr_1() { return static_cast<int32_t>(offsetof(BannerClient_t2837939223, ___bannerClientPtr_1)); }
	inline IntPtr_t get_bannerClientPtr_1() const { return ___bannerClientPtr_1; }
	inline IntPtr_t* get_address_of_bannerClientPtr_1() { return &___bannerClientPtr_1; }
	inline void set_bannerClientPtr_1(IntPtr_t value)
	{
		___bannerClientPtr_1 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_2() { return static_cast<int32_t>(offsetof(BannerClient_t2837939223, ___OnAdLoaded_2)); }
	inline EventHandler_1_t1880931879 * get_OnAdLoaded_2() const { return ___OnAdLoaded_2; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdLoaded_2() { return &___OnAdLoaded_2; }
	inline void set_OnAdLoaded_2(EventHandler_1_t1880931879 * value)
	{
		___OnAdLoaded_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdLoaded_2, value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_3() { return static_cast<int32_t>(offsetof(BannerClient_t2837939223, ___OnAdFailedToLoad_3)); }
	inline EventHandler_1_t347919082 * get_OnAdFailedToLoad_3() const { return ___OnAdFailedToLoad_3; }
	inline EventHandler_1_t347919082 ** get_address_of_OnAdFailedToLoad_3() { return &___OnAdFailedToLoad_3; }
	inline void set_OnAdFailedToLoad_3(EventHandler_1_t347919082 * value)
	{
		___OnAdFailedToLoad_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdFailedToLoad_3, value);
	}

	inline static int32_t get_offset_of_OnAdOpening_4() { return static_cast<int32_t>(offsetof(BannerClient_t2837939223, ___OnAdOpening_4)); }
	inline EventHandler_1_t1880931879 * get_OnAdOpening_4() const { return ___OnAdOpening_4; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdOpening_4() { return &___OnAdOpening_4; }
	inline void set_OnAdOpening_4(EventHandler_1_t1880931879 * value)
	{
		___OnAdOpening_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdOpening_4, value);
	}

	inline static int32_t get_offset_of_OnAdClosed_5() { return static_cast<int32_t>(offsetof(BannerClient_t2837939223, ___OnAdClosed_5)); }
	inline EventHandler_1_t1880931879 * get_OnAdClosed_5() const { return ___OnAdClosed_5; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdClosed_5() { return &___OnAdClosed_5; }
	inline void set_OnAdClosed_5(EventHandler_1_t1880931879 * value)
	{
		___OnAdClosed_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdClosed_5, value);
	}

	inline static int32_t get_offset_of_OnAdLeavingApplication_6() { return static_cast<int32_t>(offsetof(BannerClient_t2837939223, ___OnAdLeavingApplication_6)); }
	inline EventHandler_1_t1880931879 * get_OnAdLeavingApplication_6() const { return ___OnAdLeavingApplication_6; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdLeavingApplication_6() { return &___OnAdLeavingApplication_6; }
	inline void set_OnAdLeavingApplication_6(EventHandler_1_t1880931879 * value)
	{
		___OnAdLeavingApplication_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdLeavingApplication_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
