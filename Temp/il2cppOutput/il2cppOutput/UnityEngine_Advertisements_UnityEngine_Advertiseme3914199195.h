#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_t1358843767;
// UnityEngine.Advertisements.UnityAdsPlatform
struct UnityAdsPlatform_t714383836;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertiseme1591511100.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Advertisement
struct  Advertisement_t3914199195  : public Il2CppObject
{
public:

public:
};

struct Advertisement_t3914199195_StaticFields
{
public:
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_Initialized
	bool ___s_Initialized_0;
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_Showing
	bool ___s_Showing_1;
	// UnityEngine.Advertisements.ShowOptions UnityEngine.Advertisements.Advertisement::s_ShowOptions
	ShowOptions_t1358843767 * ___s_ShowOptions_2;
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_ResultDelivered
	bool ___s_ResultDelivered_3;
	// UnityEngine.Advertisements.UnityAdsPlatform UnityEngine.Advertisements.Advertisement::s_Implementation
	UnityAdsPlatform_t714383836 * ___s_Implementation_4;
	// System.String UnityEngine.Advertisements.Advertisement::s_ExtensionPath
	String_t* ___s_ExtensionPath_5;
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_EditorSupportedPlatform
	bool ___s_EditorSupportedPlatform_6;
	// UnityEngine.Advertisements.Advertisement/DebugLevel UnityEngine.Advertisements.Advertisement::_debugLevel
	int32_t ____debugLevel_7;

public:
	inline static int32_t get_offset_of_s_Initialized_0() { return static_cast<int32_t>(offsetof(Advertisement_t3914199195_StaticFields, ___s_Initialized_0)); }
	inline bool get_s_Initialized_0() const { return ___s_Initialized_0; }
	inline bool* get_address_of_s_Initialized_0() { return &___s_Initialized_0; }
	inline void set_s_Initialized_0(bool value)
	{
		___s_Initialized_0 = value;
	}

	inline static int32_t get_offset_of_s_Showing_1() { return static_cast<int32_t>(offsetof(Advertisement_t3914199195_StaticFields, ___s_Showing_1)); }
	inline bool get_s_Showing_1() const { return ___s_Showing_1; }
	inline bool* get_address_of_s_Showing_1() { return &___s_Showing_1; }
	inline void set_s_Showing_1(bool value)
	{
		___s_Showing_1 = value;
	}

	inline static int32_t get_offset_of_s_ShowOptions_2() { return static_cast<int32_t>(offsetof(Advertisement_t3914199195_StaticFields, ___s_ShowOptions_2)); }
	inline ShowOptions_t1358843767 * get_s_ShowOptions_2() const { return ___s_ShowOptions_2; }
	inline ShowOptions_t1358843767 ** get_address_of_s_ShowOptions_2() { return &___s_ShowOptions_2; }
	inline void set_s_ShowOptions_2(ShowOptions_t1358843767 * value)
	{
		___s_ShowOptions_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_ShowOptions_2, value);
	}

	inline static int32_t get_offset_of_s_ResultDelivered_3() { return static_cast<int32_t>(offsetof(Advertisement_t3914199195_StaticFields, ___s_ResultDelivered_3)); }
	inline bool get_s_ResultDelivered_3() const { return ___s_ResultDelivered_3; }
	inline bool* get_address_of_s_ResultDelivered_3() { return &___s_ResultDelivered_3; }
	inline void set_s_ResultDelivered_3(bool value)
	{
		___s_ResultDelivered_3 = value;
	}

	inline static int32_t get_offset_of_s_Implementation_4() { return static_cast<int32_t>(offsetof(Advertisement_t3914199195_StaticFields, ___s_Implementation_4)); }
	inline UnityAdsPlatform_t714383836 * get_s_Implementation_4() const { return ___s_Implementation_4; }
	inline UnityAdsPlatform_t714383836 ** get_address_of_s_Implementation_4() { return &___s_Implementation_4; }
	inline void set_s_Implementation_4(UnityAdsPlatform_t714383836 * value)
	{
		___s_Implementation_4 = value;
		Il2CppCodeGenWriteBarrier(&___s_Implementation_4, value);
	}

	inline static int32_t get_offset_of_s_ExtensionPath_5() { return static_cast<int32_t>(offsetof(Advertisement_t3914199195_StaticFields, ___s_ExtensionPath_5)); }
	inline String_t* get_s_ExtensionPath_5() const { return ___s_ExtensionPath_5; }
	inline String_t** get_address_of_s_ExtensionPath_5() { return &___s_ExtensionPath_5; }
	inline void set_s_ExtensionPath_5(String_t* value)
	{
		___s_ExtensionPath_5 = value;
		Il2CppCodeGenWriteBarrier(&___s_ExtensionPath_5, value);
	}

	inline static int32_t get_offset_of_s_EditorSupportedPlatform_6() { return static_cast<int32_t>(offsetof(Advertisement_t3914199195_StaticFields, ___s_EditorSupportedPlatform_6)); }
	inline bool get_s_EditorSupportedPlatform_6() const { return ___s_EditorSupportedPlatform_6; }
	inline bool* get_address_of_s_EditorSupportedPlatform_6() { return &___s_EditorSupportedPlatform_6; }
	inline void set_s_EditorSupportedPlatform_6(bool value)
	{
		___s_EditorSupportedPlatform_6 = value;
	}

	inline static int32_t get_offset_of__debugLevel_7() { return static_cast<int32_t>(offsetof(Advertisement_t3914199195_StaticFields, ____debugLevel_7)); }
	inline int32_t get__debugLevel_7() const { return ____debugLevel_7; }
	inline int32_t* get_address_of__debugLevel_7() { return &____debugLevel_7; }
	inline void set__debugLevel_7(int32_t value)
	{
		____debugLevel_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
