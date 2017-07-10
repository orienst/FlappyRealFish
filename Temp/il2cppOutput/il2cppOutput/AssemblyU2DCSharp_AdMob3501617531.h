#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoogleMobileAds.Api.BannerView
struct BannerView_t1745853549;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AdMob
struct  AdMob_t3501617531  : public MonoBehaviour_t1158329972
{
public:
	// GoogleMobileAds.Api.BannerView AdMob::bannerView
	BannerView_t1745853549 * ___bannerView_2;

public:
	inline static int32_t get_offset_of_bannerView_2() { return static_cast<int32_t>(offsetof(AdMob_t3501617531, ___bannerView_2)); }
	inline BannerView_t1745853549 * get_bannerView_2() const { return ___bannerView_2; }
	inline BannerView_t1745853549 ** get_address_of_bannerView_2() { return &___bannerView_2; }
	inline void set_bannerView_2(BannerView_t1745853549 * value)
	{
		___bannerView_2 = value;
		Il2CppCodeGenWriteBarrier(&___bannerView_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
