#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoogleMobileAds.Api.AdSize
struct AdSize_t3231673570;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.AdSize
struct  AdSize_t3231673570  : public Il2CppObject
{
public:
	// System.Boolean GoogleMobileAds.Api.AdSize::isSmartBanner
	bool ___isSmartBanner_0;
	// System.Int32 GoogleMobileAds.Api.AdSize::width
	int32_t ___width_1;
	// System.Int32 GoogleMobileAds.Api.AdSize::height
	int32_t ___height_2;

public:
	inline static int32_t get_offset_of_isSmartBanner_0() { return static_cast<int32_t>(offsetof(AdSize_t3231673570, ___isSmartBanner_0)); }
	inline bool get_isSmartBanner_0() const { return ___isSmartBanner_0; }
	inline bool* get_address_of_isSmartBanner_0() { return &___isSmartBanner_0; }
	inline void set_isSmartBanner_0(bool value)
	{
		___isSmartBanner_0 = value;
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(AdSize_t3231673570, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(AdSize_t3231673570, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}
};

struct AdSize_t3231673570_StaticFields
{
public:
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Banner
	AdSize_t3231673570 * ___Banner_3;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::MediumRectangle
	AdSize_t3231673570 * ___MediumRectangle_4;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::IABBanner
	AdSize_t3231673570 * ___IABBanner_5;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Leaderboard
	AdSize_t3231673570 * ___Leaderboard_6;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::SmartBanner
	AdSize_t3231673570 * ___SmartBanner_7;

public:
	inline static int32_t get_offset_of_Banner_3() { return static_cast<int32_t>(offsetof(AdSize_t3231673570_StaticFields, ___Banner_3)); }
	inline AdSize_t3231673570 * get_Banner_3() const { return ___Banner_3; }
	inline AdSize_t3231673570 ** get_address_of_Banner_3() { return &___Banner_3; }
	inline void set_Banner_3(AdSize_t3231673570 * value)
	{
		___Banner_3 = value;
		Il2CppCodeGenWriteBarrier(&___Banner_3, value);
	}

	inline static int32_t get_offset_of_MediumRectangle_4() { return static_cast<int32_t>(offsetof(AdSize_t3231673570_StaticFields, ___MediumRectangle_4)); }
	inline AdSize_t3231673570 * get_MediumRectangle_4() const { return ___MediumRectangle_4; }
	inline AdSize_t3231673570 ** get_address_of_MediumRectangle_4() { return &___MediumRectangle_4; }
	inline void set_MediumRectangle_4(AdSize_t3231673570 * value)
	{
		___MediumRectangle_4 = value;
		Il2CppCodeGenWriteBarrier(&___MediumRectangle_4, value);
	}

	inline static int32_t get_offset_of_IABBanner_5() { return static_cast<int32_t>(offsetof(AdSize_t3231673570_StaticFields, ___IABBanner_5)); }
	inline AdSize_t3231673570 * get_IABBanner_5() const { return ___IABBanner_5; }
	inline AdSize_t3231673570 ** get_address_of_IABBanner_5() { return &___IABBanner_5; }
	inline void set_IABBanner_5(AdSize_t3231673570 * value)
	{
		___IABBanner_5 = value;
		Il2CppCodeGenWriteBarrier(&___IABBanner_5, value);
	}

	inline static int32_t get_offset_of_Leaderboard_6() { return static_cast<int32_t>(offsetof(AdSize_t3231673570_StaticFields, ___Leaderboard_6)); }
	inline AdSize_t3231673570 * get_Leaderboard_6() const { return ___Leaderboard_6; }
	inline AdSize_t3231673570 ** get_address_of_Leaderboard_6() { return &___Leaderboard_6; }
	inline void set_Leaderboard_6(AdSize_t3231673570 * value)
	{
		___Leaderboard_6 = value;
		Il2CppCodeGenWriteBarrier(&___Leaderboard_6, value);
	}

	inline static int32_t get_offset_of_SmartBanner_7() { return static_cast<int32_t>(offsetof(AdSize_t3231673570_StaticFields, ___SmartBanner_7)); }
	inline AdSize_t3231673570 * get_SmartBanner_7() const { return ___SmartBanner_7; }
	inline AdSize_t3231673570 ** get_address_of_SmartBanner_7() { return &___SmartBanner_7; }
	inline void set_SmartBanner_7(AdSize_t3231673570 * value)
	{
		___SmartBanner_7 = value;
		Il2CppCodeGenWriteBarrier(&___SmartBanner_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
