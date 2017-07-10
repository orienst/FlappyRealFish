#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FishController
struct  FishController_t1741649206  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D FishController::rb2d
	Rigidbody2D_t502193897 * ___rb2d_3;
	// UnityEngine.Animator FishController::animator
	Animator_t69676727 * ___animator_4;
	// UnityEngine.GameObject FishController::sprite
	GameObject_t1756533147 * ___sprite_5;
	// UnityEngine.Camera FishController::camera
	Camera_t189460977 * ___camera_6;
	// System.Single FishController::speed
	float ___speed_7;
	// System.Single FishController::flapVelocity
	float ___flapVelocity_8;
	// System.Single FishController::maxHeight
	float ___maxHeight_9;
	// System.Single FishController::relativeVelocityX
	float ___relativeVelocityX_10;
	// System.Boolean FishController::upPush
	bool ___upPush_11;
	// System.Boolean FishController::downPush
	bool ___downPush_12;
	// System.Boolean FishController::leftPush
	bool ___leftPush_13;
	// System.Boolean FishController::rightPush
	bool ___rightPush_14;
	// System.Boolean FishController::isDead
	bool ___isDead_15;
	// System.Boolean FishController::isClear
	bool ___isClear_16;
	// System.Single FishController::gravity
	float ___gravity_17;

public:
	inline static int32_t get_offset_of_rb2d_3() { return static_cast<int32_t>(offsetof(FishController_t1741649206, ___rb2d_3)); }
	inline Rigidbody2D_t502193897 * get_rb2d_3() const { return ___rb2d_3; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb2d_3() { return &___rb2d_3; }
	inline void set_rb2d_3(Rigidbody2D_t502193897 * value)
	{
		___rb2d_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb2d_3, value);
	}

	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(FishController_t1741649206, ___animator_4)); }
	inline Animator_t69676727 * get_animator_4() const { return ___animator_4; }
	inline Animator_t69676727 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t69676727 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier(&___animator_4, value);
	}

	inline static int32_t get_offset_of_sprite_5() { return static_cast<int32_t>(offsetof(FishController_t1741649206, ___sprite_5)); }
	inline GameObject_t1756533147 * get_sprite_5() const { return ___sprite_5; }
	inline GameObject_t1756533147 ** get_address_of_sprite_5() { return &___sprite_5; }
	inline void set_sprite_5(GameObject_t1756533147 * value)
	{
		___sprite_5 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_5, value);
	}

	inline static int32_t get_offset_of_camera_6() { return static_cast<int32_t>(offsetof(FishController_t1741649206, ___camera_6)); }
	inline Camera_t189460977 * get_camera_6() const { return ___camera_6; }
	inline Camera_t189460977 ** get_address_of_camera_6() { return &___camera_6; }
	inline void set_camera_6(Camera_t189460977 * value)
	{
		___camera_6 = value;
		Il2CppCodeGenWriteBarrier(&___camera_6, value);
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(FishController_t1741649206, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_flapVelocity_8() { return static_cast<int32_t>(offsetof(FishController_t1741649206, ___flapVelocity_8)); }
	inline float get_flapVelocity_8() const { return ___flapVelocity_8; }
	inline float* get_address_of_flapVelocity_8() { return &___flapVelocity_8; }
	inline void set_flapVelocity_8(float value)
	{
		___flapVelocity_8 = value;
	}

	inline static int32_t get_offset_of_maxHeight_9() { return static_cast<int32_t>(offsetof(FishController_t1741649206, ___maxHeight_9)); }
	inline float get_maxHeight_9() const { return ___maxHeight_9; }
	inline float* get_address_of_maxHeight_9() { return &___maxHeight_9; }
	inline void set_maxHeight_9(float value)
	{
		___maxHeight_9 = value;
	}

	inline static int32_t get_offset_of_relativeVelocityX_10() { return static_cast<int32_t>(offsetof(FishController_t1741649206, ___relativeVelocityX_10)); }
	inline float get_relativeVelocityX_10() const { return ___relativeVelocityX_10; }
	inline float* get_address_of_relativeVelocityX_10() { return &___relativeVelocityX_10; }
	inline void set_relativeVelocityX_10(float value)
	{
		___relativeVelocityX_10 = value;
	}

	inline static int32_t get_offset_of_upPush_11() { return static_cast<int32_t>(offsetof(FishController_t1741649206, ___upPush_11)); }
	inline bool get_upPush_11() const { return ___upPush_11; }
	inline bool* get_address_of_upPush_11() { return &___upPush_11; }
	inline void set_upPush_11(bool value)
	{
		___upPush_11 = value;
	}

	inline static int32_t get_offset_of_downPush_12() { return static_cast<int32_t>(offsetof(FishController_t1741649206, ___downPush_12)); }
	inline bool get_downPush_12() const { return ___downPush_12; }
	inline bool* get_address_of_downPush_12() { return &___downPush_12; }
	inline void set_downPush_12(bool value)
	{
		___downPush_12 = value;
	}

	inline static int32_t get_offset_of_leftPush_13() { return static_cast<int32_t>(offsetof(FishController_t1741649206, ___leftPush_13)); }
	inline bool get_leftPush_13() const { return ___leftPush_13; }
	inline bool* get_address_of_leftPush_13() { return &___leftPush_13; }
	inline void set_leftPush_13(bool value)
	{
		___leftPush_13 = value;
	}

	inline static int32_t get_offset_of_rightPush_14() { return static_cast<int32_t>(offsetof(FishController_t1741649206, ___rightPush_14)); }
	inline bool get_rightPush_14() const { return ___rightPush_14; }
	inline bool* get_address_of_rightPush_14() { return &___rightPush_14; }
	inline void set_rightPush_14(bool value)
	{
		___rightPush_14 = value;
	}

	inline static int32_t get_offset_of_isDead_15() { return static_cast<int32_t>(offsetof(FishController_t1741649206, ___isDead_15)); }
	inline bool get_isDead_15() const { return ___isDead_15; }
	inline bool* get_address_of_isDead_15() { return &___isDead_15; }
	inline void set_isDead_15(bool value)
	{
		___isDead_15 = value;
	}

	inline static int32_t get_offset_of_isClear_16() { return static_cast<int32_t>(offsetof(FishController_t1741649206, ___isClear_16)); }
	inline bool get_isClear_16() const { return ___isClear_16; }
	inline bool* get_address_of_isClear_16() { return &___isClear_16; }
	inline void set_isClear_16(bool value)
	{
		___isClear_16 = value;
	}

	inline static int32_t get_offset_of_gravity_17() { return static_cast<int32_t>(offsetof(FishController_t1741649206, ___gravity_17)); }
	inline float get_gravity_17() const { return ___gravity_17; }
	inline float* get_address_of_gravity_17() { return &___gravity_17; }
	inline void set_gravity_17(float value)
	{
		___gravity_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
