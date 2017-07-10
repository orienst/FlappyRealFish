#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FishController
struct FishController_t1741649206;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3555666667  : public MonoBehaviour_t1158329972
{
public:
	// FishController CameraController::fish
	FishController_t1741649206 * ___fish_2;
	// System.Boolean CameraController::isPlay
	bool ___isPlay_3;

public:
	inline static int32_t get_offset_of_fish_2() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___fish_2)); }
	inline FishController_t1741649206 * get_fish_2() const { return ___fish_2; }
	inline FishController_t1741649206 ** get_address_of_fish_2() { return &___fish_2; }
	inline void set_fish_2(FishController_t1741649206 * value)
	{
		___fish_2 = value;
		Il2CppCodeGenWriteBarrier(&___fish_2, value);
	}

	inline static int32_t get_offset_of_isPlay_3() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___isPlay_3)); }
	inline bool get_isPlay_3() const { return ___isPlay_3; }
	inline bool* get_address_of_isPlay_3() { return &___isPlay_3; }
	inline void set_isPlay_3(bool value)
	{
		___isPlay_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
