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
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t344857101;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient
struct  RewardBasedVideoAdClient_t2282664017  : public Il2CppObject
{
public:
	// System.IntPtr GoogleMobileAds.iOS.RewardBasedVideoAdClient::rewardBasedVideoAdPtr
	IntPtr_t ___rewardBasedVideoAdPtr_0;
	// System.IntPtr GoogleMobileAds.iOS.RewardBasedVideoAdClient::rewardBasedVideoAdClientPtr
	IntPtr_t ___rewardBasedVideoAdClientPtr_1;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdLoaded
	EventHandler_1_t1880931879 * ___OnAdLoaded_2;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdFailedToLoad
	EventHandler_1_t347919082 * ___OnAdFailedToLoad_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdOpening
	EventHandler_1_t1880931879 * ___OnAdOpening_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdStarted
	EventHandler_1_t1880931879 * ___OnAdStarted_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdClosed
	EventHandler_1_t1880931879 * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdRewarded
	EventHandler_1_t344857101 * ___OnAdRewarded_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdLeavingApplication
	EventHandler_1_t1880931879 * ___OnAdLeavingApplication_8;

public:
	inline static int32_t get_offset_of_rewardBasedVideoAdPtr_0() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t2282664017, ___rewardBasedVideoAdPtr_0)); }
	inline IntPtr_t get_rewardBasedVideoAdPtr_0() const { return ___rewardBasedVideoAdPtr_0; }
	inline IntPtr_t* get_address_of_rewardBasedVideoAdPtr_0() { return &___rewardBasedVideoAdPtr_0; }
	inline void set_rewardBasedVideoAdPtr_0(IntPtr_t value)
	{
		___rewardBasedVideoAdPtr_0 = value;
	}

	inline static int32_t get_offset_of_rewardBasedVideoAdClientPtr_1() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t2282664017, ___rewardBasedVideoAdClientPtr_1)); }
	inline IntPtr_t get_rewardBasedVideoAdClientPtr_1() const { return ___rewardBasedVideoAdClientPtr_1; }
	inline IntPtr_t* get_address_of_rewardBasedVideoAdClientPtr_1() { return &___rewardBasedVideoAdClientPtr_1; }
	inline void set_rewardBasedVideoAdClientPtr_1(IntPtr_t value)
	{
		___rewardBasedVideoAdClientPtr_1 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_2() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t2282664017, ___OnAdLoaded_2)); }
	inline EventHandler_1_t1880931879 * get_OnAdLoaded_2() const { return ___OnAdLoaded_2; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdLoaded_2() { return &___OnAdLoaded_2; }
	inline void set_OnAdLoaded_2(EventHandler_1_t1880931879 * value)
	{
		___OnAdLoaded_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdLoaded_2, value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_3() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t2282664017, ___OnAdFailedToLoad_3)); }
	inline EventHandler_1_t347919082 * get_OnAdFailedToLoad_3() const { return ___OnAdFailedToLoad_3; }
	inline EventHandler_1_t347919082 ** get_address_of_OnAdFailedToLoad_3() { return &___OnAdFailedToLoad_3; }
	inline void set_OnAdFailedToLoad_3(EventHandler_1_t347919082 * value)
	{
		___OnAdFailedToLoad_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdFailedToLoad_3, value);
	}

	inline static int32_t get_offset_of_OnAdOpening_4() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t2282664017, ___OnAdOpening_4)); }
	inline EventHandler_1_t1880931879 * get_OnAdOpening_4() const { return ___OnAdOpening_4; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdOpening_4() { return &___OnAdOpening_4; }
	inline void set_OnAdOpening_4(EventHandler_1_t1880931879 * value)
	{
		___OnAdOpening_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdOpening_4, value);
	}

	inline static int32_t get_offset_of_OnAdStarted_5() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t2282664017, ___OnAdStarted_5)); }
	inline EventHandler_1_t1880931879 * get_OnAdStarted_5() const { return ___OnAdStarted_5; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdStarted_5() { return &___OnAdStarted_5; }
	inline void set_OnAdStarted_5(EventHandler_1_t1880931879 * value)
	{
		___OnAdStarted_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdStarted_5, value);
	}

	inline static int32_t get_offset_of_OnAdClosed_6() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t2282664017, ___OnAdClosed_6)); }
	inline EventHandler_1_t1880931879 * get_OnAdClosed_6() const { return ___OnAdClosed_6; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdClosed_6() { return &___OnAdClosed_6; }
	inline void set_OnAdClosed_6(EventHandler_1_t1880931879 * value)
	{
		___OnAdClosed_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdClosed_6, value);
	}

	inline static int32_t get_offset_of_OnAdRewarded_7() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t2282664017, ___OnAdRewarded_7)); }
	inline EventHandler_1_t344857101 * get_OnAdRewarded_7() const { return ___OnAdRewarded_7; }
	inline EventHandler_1_t344857101 ** get_address_of_OnAdRewarded_7() { return &___OnAdRewarded_7; }
	inline void set_OnAdRewarded_7(EventHandler_1_t344857101 * value)
	{
		___OnAdRewarded_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdRewarded_7, value);
	}

	inline static int32_t get_offset_of_OnAdLeavingApplication_8() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t2282664017, ___OnAdLeavingApplication_8)); }
	inline EventHandler_1_t1880931879 * get_OnAdLeavingApplication_8() const { return ___OnAdLeavingApplication_8; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdLeavingApplication_8() { return &___OnAdLeavingApplication_8; }
	inline void set_OnAdLeavingApplication_8(EventHandler_1_t1880931879 * value)
	{
		___OnAdLeavingApplication_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdLeavingApplication_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
