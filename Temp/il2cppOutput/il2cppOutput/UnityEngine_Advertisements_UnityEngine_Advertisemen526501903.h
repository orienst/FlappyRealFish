#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.UnityAdsEditorPlaceholder
struct  UnityAdsEditorPlaceholder_t526501903  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture2D UnityEngine.Advertisements.UnityAdsEditorPlaceholder::m_PlaceholderLandscape
	Texture2D_t3542995729 * ___m_PlaceholderLandscape_2;
	// UnityEngine.Texture2D UnityEngine.Advertisements.UnityAdsEditorPlaceholder::m_PlaceholderPortrait
	Texture2D_t3542995729 * ___m_PlaceholderPortrait_3;
	// System.Boolean UnityEngine.Advertisements.UnityAdsEditorPlaceholder::m_Showing
	bool ___m_Showing_4;

public:
	inline static int32_t get_offset_of_m_PlaceholderLandscape_2() { return static_cast<int32_t>(offsetof(UnityAdsEditorPlaceholder_t526501903, ___m_PlaceholderLandscape_2)); }
	inline Texture2D_t3542995729 * get_m_PlaceholderLandscape_2() const { return ___m_PlaceholderLandscape_2; }
	inline Texture2D_t3542995729 ** get_address_of_m_PlaceholderLandscape_2() { return &___m_PlaceholderLandscape_2; }
	inline void set_m_PlaceholderLandscape_2(Texture2D_t3542995729 * value)
	{
		___m_PlaceholderLandscape_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlaceholderLandscape_2, value);
	}

	inline static int32_t get_offset_of_m_PlaceholderPortrait_3() { return static_cast<int32_t>(offsetof(UnityAdsEditorPlaceholder_t526501903, ___m_PlaceholderPortrait_3)); }
	inline Texture2D_t3542995729 * get_m_PlaceholderPortrait_3() const { return ___m_PlaceholderPortrait_3; }
	inline Texture2D_t3542995729 ** get_address_of_m_PlaceholderPortrait_3() { return &___m_PlaceholderPortrait_3; }
	inline void set_m_PlaceholderPortrait_3(Texture2D_t3542995729 * value)
	{
		___m_PlaceholderPortrait_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlaceholderPortrait_3, value);
	}

	inline static int32_t get_offset_of_m_Showing_4() { return static_cast<int32_t>(offsetof(UnityAdsEditorPlaceholder_t526501903, ___m_Showing_4)); }
	inline bool get_m_Showing_4() const { return ___m_Showing_4; }
	inline bool* get_address_of_m_Showing_4() { return &___m_Showing_4; }
	inline void set_m_Showing_4(bool value)
	{
		___m_Showing_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
