#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Hashtable>
struct List_1_t278961118;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// iTween/EasingFunction
struct EasingFunction_t3676968174;
// iTween/ApplyTween
struct ApplyTween_t747394300;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// UnityEngine.Color[,]
struct ColorU5BU2CU5D_t672350443;
// System.Single[]
struct SingleU5BU5D_t577127397;
// UnityEngine.Rect[]
struct RectU5BU5D_t1299715887;
// iTween/CRSpline
struct CRSpline_t4177960625;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_iTween_EaseType818674011.h"
#include "AssemblyU2DCSharpU2Dfirstpass_iTween_LoopType1490651981.h"
#include "UnityEngine_UnityEngine_Space4278750806.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharpU2Dfirstpass_iTween_NamedValueCol2874784184.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween
struct  iTween_t488923914  : public MonoBehaviour_t1158329972
{
public:
	// System.String iTween::id
	String_t* ___id_4;
	// System.String iTween::type
	String_t* ___type_5;
	// System.String iTween::method
	String_t* ___method_6;
	// iTween/EaseType iTween::easeType
	int32_t ___easeType_7;
	// System.Single iTween::time
	float ___time_8;
	// System.Single iTween::delay
	float ___delay_9;
	// iTween/LoopType iTween::loopType
	int32_t ___loopType_10;
	// System.Boolean iTween::isRunning
	bool ___isRunning_11;
	// System.Boolean iTween::isPaused
	bool ___isPaused_12;
	// System.String iTween::_name
	String_t* ____name_13;
	// System.Single iTween::runningTime
	float ___runningTime_14;
	// System.Single iTween::percentage
	float ___percentage_15;
	// System.Single iTween::delayStarted
	float ___delayStarted_16;
	// System.Boolean iTween::kinematic
	bool ___kinematic_17;
	// System.Boolean iTween::isLocal
	bool ___isLocal_18;
	// System.Boolean iTween::loop
	bool ___loop_19;
	// System.Boolean iTween::reverse
	bool ___reverse_20;
	// System.Boolean iTween::wasPaused
	bool ___wasPaused_21;
	// System.Boolean iTween::physics
	bool ___physics_22;
	// System.Collections.Hashtable iTween::tweenArguments
	Hashtable_t909839986 * ___tweenArguments_23;
	// UnityEngine.Space iTween::space
	int32_t ___space_24;
	// iTween/EasingFunction iTween::ease
	EasingFunction_t3676968174 * ___ease_25;
	// iTween/ApplyTween iTween::apply
	ApplyTween_t747394300 * ___apply_26;
	// UnityEngine.AudioSource iTween::audioSource
	AudioSource_t1135106623 * ___audioSource_27;
	// UnityEngine.Vector3[] iTween::vector3s
	Vector3U5BU5D_t1172311765* ___vector3s_28;
	// UnityEngine.Vector2[] iTween::vector2s
	Vector2U5BU5D_t686124026* ___vector2s_29;
	// UnityEngine.Color[,] iTween::colors
	ColorU5BU2CU5D_t672350443* ___colors_30;
	// System.Single[] iTween::floats
	SingleU5BU5D_t577127397* ___floats_31;
	// UnityEngine.Rect[] iTween::rects
	RectU5BU5D_t1299715887* ___rects_32;
	// iTween/CRSpline iTween::path
	CRSpline_t4177960625 * ___path_33;
	// UnityEngine.Vector3 iTween::preUpdate
	Vector3_t2243707580  ___preUpdate_34;
	// UnityEngine.Vector3 iTween::postUpdate
	Vector3_t2243707580  ___postUpdate_35;
	// iTween/NamedValueColor iTween::namedcolorvalue
	int32_t ___namedcolorvalue_36;
	// System.Single iTween::lastRealTime
	float ___lastRealTime_37;
	// System.Boolean iTween::useRealTime
	bool ___useRealTime_38;
	// UnityEngine.Transform iTween::thisTransform
	Transform_t3275118058 * ___thisTransform_39;

public:
	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___id_4)); }
	inline String_t* get_id_4() const { return ___id_4; }
	inline String_t** get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(String_t* value)
	{
		___id_4 = value;
		Il2CppCodeGenWriteBarrier(&___id_4, value);
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___type_5)); }
	inline String_t* get_type_5() const { return ___type_5; }
	inline String_t** get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(String_t* value)
	{
		___type_5 = value;
		Il2CppCodeGenWriteBarrier(&___type_5, value);
	}

	inline static int32_t get_offset_of_method_6() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___method_6)); }
	inline String_t* get_method_6() const { return ___method_6; }
	inline String_t** get_address_of_method_6() { return &___method_6; }
	inline void set_method_6(String_t* value)
	{
		___method_6 = value;
		Il2CppCodeGenWriteBarrier(&___method_6, value);
	}

	inline static int32_t get_offset_of_easeType_7() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___easeType_7)); }
	inline int32_t get_easeType_7() const { return ___easeType_7; }
	inline int32_t* get_address_of_easeType_7() { return &___easeType_7; }
	inline void set_easeType_7(int32_t value)
	{
		___easeType_7 = value;
	}

	inline static int32_t get_offset_of_time_8() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___time_8)); }
	inline float get_time_8() const { return ___time_8; }
	inline float* get_address_of_time_8() { return &___time_8; }
	inline void set_time_8(float value)
	{
		___time_8 = value;
	}

	inline static int32_t get_offset_of_delay_9() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___delay_9)); }
	inline float get_delay_9() const { return ___delay_9; }
	inline float* get_address_of_delay_9() { return &___delay_9; }
	inline void set_delay_9(float value)
	{
		___delay_9 = value;
	}

	inline static int32_t get_offset_of_loopType_10() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___loopType_10)); }
	inline int32_t get_loopType_10() const { return ___loopType_10; }
	inline int32_t* get_address_of_loopType_10() { return &___loopType_10; }
	inline void set_loopType_10(int32_t value)
	{
		___loopType_10 = value;
	}

	inline static int32_t get_offset_of_isRunning_11() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___isRunning_11)); }
	inline bool get_isRunning_11() const { return ___isRunning_11; }
	inline bool* get_address_of_isRunning_11() { return &___isRunning_11; }
	inline void set_isRunning_11(bool value)
	{
		___isRunning_11 = value;
	}

	inline static int32_t get_offset_of_isPaused_12() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___isPaused_12)); }
	inline bool get_isPaused_12() const { return ___isPaused_12; }
	inline bool* get_address_of_isPaused_12() { return &___isPaused_12; }
	inline void set_isPaused_12(bool value)
	{
		___isPaused_12 = value;
	}

	inline static int32_t get_offset_of__name_13() { return static_cast<int32_t>(offsetof(iTween_t488923914, ____name_13)); }
	inline String_t* get__name_13() const { return ____name_13; }
	inline String_t** get_address_of__name_13() { return &____name_13; }
	inline void set__name_13(String_t* value)
	{
		____name_13 = value;
		Il2CppCodeGenWriteBarrier(&____name_13, value);
	}

	inline static int32_t get_offset_of_runningTime_14() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___runningTime_14)); }
	inline float get_runningTime_14() const { return ___runningTime_14; }
	inline float* get_address_of_runningTime_14() { return &___runningTime_14; }
	inline void set_runningTime_14(float value)
	{
		___runningTime_14 = value;
	}

	inline static int32_t get_offset_of_percentage_15() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___percentage_15)); }
	inline float get_percentage_15() const { return ___percentage_15; }
	inline float* get_address_of_percentage_15() { return &___percentage_15; }
	inline void set_percentage_15(float value)
	{
		___percentage_15 = value;
	}

	inline static int32_t get_offset_of_delayStarted_16() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___delayStarted_16)); }
	inline float get_delayStarted_16() const { return ___delayStarted_16; }
	inline float* get_address_of_delayStarted_16() { return &___delayStarted_16; }
	inline void set_delayStarted_16(float value)
	{
		___delayStarted_16 = value;
	}

	inline static int32_t get_offset_of_kinematic_17() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___kinematic_17)); }
	inline bool get_kinematic_17() const { return ___kinematic_17; }
	inline bool* get_address_of_kinematic_17() { return &___kinematic_17; }
	inline void set_kinematic_17(bool value)
	{
		___kinematic_17 = value;
	}

	inline static int32_t get_offset_of_isLocal_18() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___isLocal_18)); }
	inline bool get_isLocal_18() const { return ___isLocal_18; }
	inline bool* get_address_of_isLocal_18() { return &___isLocal_18; }
	inline void set_isLocal_18(bool value)
	{
		___isLocal_18 = value;
	}

	inline static int32_t get_offset_of_loop_19() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___loop_19)); }
	inline bool get_loop_19() const { return ___loop_19; }
	inline bool* get_address_of_loop_19() { return &___loop_19; }
	inline void set_loop_19(bool value)
	{
		___loop_19 = value;
	}

	inline static int32_t get_offset_of_reverse_20() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___reverse_20)); }
	inline bool get_reverse_20() const { return ___reverse_20; }
	inline bool* get_address_of_reverse_20() { return &___reverse_20; }
	inline void set_reverse_20(bool value)
	{
		___reverse_20 = value;
	}

	inline static int32_t get_offset_of_wasPaused_21() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___wasPaused_21)); }
	inline bool get_wasPaused_21() const { return ___wasPaused_21; }
	inline bool* get_address_of_wasPaused_21() { return &___wasPaused_21; }
	inline void set_wasPaused_21(bool value)
	{
		___wasPaused_21 = value;
	}

	inline static int32_t get_offset_of_physics_22() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___physics_22)); }
	inline bool get_physics_22() const { return ___physics_22; }
	inline bool* get_address_of_physics_22() { return &___physics_22; }
	inline void set_physics_22(bool value)
	{
		___physics_22 = value;
	}

	inline static int32_t get_offset_of_tweenArguments_23() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___tweenArguments_23)); }
	inline Hashtable_t909839986 * get_tweenArguments_23() const { return ___tweenArguments_23; }
	inline Hashtable_t909839986 ** get_address_of_tweenArguments_23() { return &___tweenArguments_23; }
	inline void set_tweenArguments_23(Hashtable_t909839986 * value)
	{
		___tweenArguments_23 = value;
		Il2CppCodeGenWriteBarrier(&___tweenArguments_23, value);
	}

	inline static int32_t get_offset_of_space_24() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___space_24)); }
	inline int32_t get_space_24() const { return ___space_24; }
	inline int32_t* get_address_of_space_24() { return &___space_24; }
	inline void set_space_24(int32_t value)
	{
		___space_24 = value;
	}

	inline static int32_t get_offset_of_ease_25() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___ease_25)); }
	inline EasingFunction_t3676968174 * get_ease_25() const { return ___ease_25; }
	inline EasingFunction_t3676968174 ** get_address_of_ease_25() { return &___ease_25; }
	inline void set_ease_25(EasingFunction_t3676968174 * value)
	{
		___ease_25 = value;
		Il2CppCodeGenWriteBarrier(&___ease_25, value);
	}

	inline static int32_t get_offset_of_apply_26() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___apply_26)); }
	inline ApplyTween_t747394300 * get_apply_26() const { return ___apply_26; }
	inline ApplyTween_t747394300 ** get_address_of_apply_26() { return &___apply_26; }
	inline void set_apply_26(ApplyTween_t747394300 * value)
	{
		___apply_26 = value;
		Il2CppCodeGenWriteBarrier(&___apply_26, value);
	}

	inline static int32_t get_offset_of_audioSource_27() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___audioSource_27)); }
	inline AudioSource_t1135106623 * get_audioSource_27() const { return ___audioSource_27; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_27() { return &___audioSource_27; }
	inline void set_audioSource_27(AudioSource_t1135106623 * value)
	{
		___audioSource_27 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_27, value);
	}

	inline static int32_t get_offset_of_vector3s_28() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___vector3s_28)); }
	inline Vector3U5BU5D_t1172311765* get_vector3s_28() const { return ___vector3s_28; }
	inline Vector3U5BU5D_t1172311765** get_address_of_vector3s_28() { return &___vector3s_28; }
	inline void set_vector3s_28(Vector3U5BU5D_t1172311765* value)
	{
		___vector3s_28 = value;
		Il2CppCodeGenWriteBarrier(&___vector3s_28, value);
	}

	inline static int32_t get_offset_of_vector2s_29() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___vector2s_29)); }
	inline Vector2U5BU5D_t686124026* get_vector2s_29() const { return ___vector2s_29; }
	inline Vector2U5BU5D_t686124026** get_address_of_vector2s_29() { return &___vector2s_29; }
	inline void set_vector2s_29(Vector2U5BU5D_t686124026* value)
	{
		___vector2s_29 = value;
		Il2CppCodeGenWriteBarrier(&___vector2s_29, value);
	}

	inline static int32_t get_offset_of_colors_30() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___colors_30)); }
	inline ColorU5BU2CU5D_t672350443* get_colors_30() const { return ___colors_30; }
	inline ColorU5BU2CU5D_t672350443** get_address_of_colors_30() { return &___colors_30; }
	inline void set_colors_30(ColorU5BU2CU5D_t672350443* value)
	{
		___colors_30 = value;
		Il2CppCodeGenWriteBarrier(&___colors_30, value);
	}

	inline static int32_t get_offset_of_floats_31() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___floats_31)); }
	inline SingleU5BU5D_t577127397* get_floats_31() const { return ___floats_31; }
	inline SingleU5BU5D_t577127397** get_address_of_floats_31() { return &___floats_31; }
	inline void set_floats_31(SingleU5BU5D_t577127397* value)
	{
		___floats_31 = value;
		Il2CppCodeGenWriteBarrier(&___floats_31, value);
	}

	inline static int32_t get_offset_of_rects_32() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___rects_32)); }
	inline RectU5BU5D_t1299715887* get_rects_32() const { return ___rects_32; }
	inline RectU5BU5D_t1299715887** get_address_of_rects_32() { return &___rects_32; }
	inline void set_rects_32(RectU5BU5D_t1299715887* value)
	{
		___rects_32 = value;
		Il2CppCodeGenWriteBarrier(&___rects_32, value);
	}

	inline static int32_t get_offset_of_path_33() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___path_33)); }
	inline CRSpline_t4177960625 * get_path_33() const { return ___path_33; }
	inline CRSpline_t4177960625 ** get_address_of_path_33() { return &___path_33; }
	inline void set_path_33(CRSpline_t4177960625 * value)
	{
		___path_33 = value;
		Il2CppCodeGenWriteBarrier(&___path_33, value);
	}

	inline static int32_t get_offset_of_preUpdate_34() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___preUpdate_34)); }
	inline Vector3_t2243707580  get_preUpdate_34() const { return ___preUpdate_34; }
	inline Vector3_t2243707580 * get_address_of_preUpdate_34() { return &___preUpdate_34; }
	inline void set_preUpdate_34(Vector3_t2243707580  value)
	{
		___preUpdate_34 = value;
	}

	inline static int32_t get_offset_of_postUpdate_35() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___postUpdate_35)); }
	inline Vector3_t2243707580  get_postUpdate_35() const { return ___postUpdate_35; }
	inline Vector3_t2243707580 * get_address_of_postUpdate_35() { return &___postUpdate_35; }
	inline void set_postUpdate_35(Vector3_t2243707580  value)
	{
		___postUpdate_35 = value;
	}

	inline static int32_t get_offset_of_namedcolorvalue_36() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___namedcolorvalue_36)); }
	inline int32_t get_namedcolorvalue_36() const { return ___namedcolorvalue_36; }
	inline int32_t* get_address_of_namedcolorvalue_36() { return &___namedcolorvalue_36; }
	inline void set_namedcolorvalue_36(int32_t value)
	{
		___namedcolorvalue_36 = value;
	}

	inline static int32_t get_offset_of_lastRealTime_37() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___lastRealTime_37)); }
	inline float get_lastRealTime_37() const { return ___lastRealTime_37; }
	inline float* get_address_of_lastRealTime_37() { return &___lastRealTime_37; }
	inline void set_lastRealTime_37(float value)
	{
		___lastRealTime_37 = value;
	}

	inline static int32_t get_offset_of_useRealTime_38() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___useRealTime_38)); }
	inline bool get_useRealTime_38() const { return ___useRealTime_38; }
	inline bool* get_address_of_useRealTime_38() { return &___useRealTime_38; }
	inline void set_useRealTime_38(bool value)
	{
		___useRealTime_38 = value;
	}

	inline static int32_t get_offset_of_thisTransform_39() { return static_cast<int32_t>(offsetof(iTween_t488923914, ___thisTransform_39)); }
	inline Transform_t3275118058 * get_thisTransform_39() const { return ___thisTransform_39; }
	inline Transform_t3275118058 ** get_address_of_thisTransform_39() { return &___thisTransform_39; }
	inline void set_thisTransform_39(Transform_t3275118058 * value)
	{
		___thisTransform_39 = value;
		Il2CppCodeGenWriteBarrier(&___thisTransform_39, value);
	}
};

struct iTween_t488923914_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Collections.Hashtable> iTween::tweens
	List_1_t278961118 * ___tweens_2;
	// UnityEngine.GameObject iTween::cameraFade
	GameObject_t1756533147 * ___cameraFade_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map0
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map0_40;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map1
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map1_41;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map2
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map2_42;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map3
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map3_43;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map4
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map4_44;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map5
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map5_45;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map6
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map6_46;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map7
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map7_47;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map8
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map8_48;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map9
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map9_49;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$mapA
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapA_50;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$mapB
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapB_51;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$mapC
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapC_52;

public:
	inline static int32_t get_offset_of_tweens_2() { return static_cast<int32_t>(offsetof(iTween_t488923914_StaticFields, ___tweens_2)); }
	inline List_1_t278961118 * get_tweens_2() const { return ___tweens_2; }
	inline List_1_t278961118 ** get_address_of_tweens_2() { return &___tweens_2; }
	inline void set_tweens_2(List_1_t278961118 * value)
	{
		___tweens_2 = value;
		Il2CppCodeGenWriteBarrier(&___tweens_2, value);
	}

	inline static int32_t get_offset_of_cameraFade_3() { return static_cast<int32_t>(offsetof(iTween_t488923914_StaticFields, ___cameraFade_3)); }
	inline GameObject_t1756533147 * get_cameraFade_3() const { return ___cameraFade_3; }
	inline GameObject_t1756533147 ** get_address_of_cameraFade_3() { return &___cameraFade_3; }
	inline void set_cameraFade_3(GameObject_t1756533147 * value)
	{
		___cameraFade_3 = value;
		Il2CppCodeGenWriteBarrier(&___cameraFade_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_40() { return static_cast<int32_t>(offsetof(iTween_t488923914_StaticFields, ___U3CU3Ef__switchU24map0_40)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map0_40() const { return ___U3CU3Ef__switchU24map0_40; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map0_40() { return &___U3CU3Ef__switchU24map0_40; }
	inline void set_U3CU3Ef__switchU24map0_40(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map0_40 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_40, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_41() { return static_cast<int32_t>(offsetof(iTween_t488923914_StaticFields, ___U3CU3Ef__switchU24map1_41)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map1_41() const { return ___U3CU3Ef__switchU24map1_41; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map1_41() { return &___U3CU3Ef__switchU24map1_41; }
	inline void set_U3CU3Ef__switchU24map1_41(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map1_41 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_41, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_42() { return static_cast<int32_t>(offsetof(iTween_t488923914_StaticFields, ___U3CU3Ef__switchU24map2_42)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map2_42() const { return ___U3CU3Ef__switchU24map2_42; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map2_42() { return &___U3CU3Ef__switchU24map2_42; }
	inline void set_U3CU3Ef__switchU24map2_42(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map2_42 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map2_42, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_43() { return static_cast<int32_t>(offsetof(iTween_t488923914_StaticFields, ___U3CU3Ef__switchU24map3_43)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map3_43() const { return ___U3CU3Ef__switchU24map3_43; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map3_43() { return &___U3CU3Ef__switchU24map3_43; }
	inline void set_U3CU3Ef__switchU24map3_43(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map3_43 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map3_43, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_44() { return static_cast<int32_t>(offsetof(iTween_t488923914_StaticFields, ___U3CU3Ef__switchU24map4_44)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map4_44() const { return ___U3CU3Ef__switchU24map4_44; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map4_44() { return &___U3CU3Ef__switchU24map4_44; }
	inline void set_U3CU3Ef__switchU24map4_44(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map4_44 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map4_44, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_45() { return static_cast<int32_t>(offsetof(iTween_t488923914_StaticFields, ___U3CU3Ef__switchU24map5_45)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map5_45() const { return ___U3CU3Ef__switchU24map5_45; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map5_45() { return &___U3CU3Ef__switchU24map5_45; }
	inline void set_U3CU3Ef__switchU24map5_45(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map5_45 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map5_45, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map6_46() { return static_cast<int32_t>(offsetof(iTween_t488923914_StaticFields, ___U3CU3Ef__switchU24map6_46)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map6_46() const { return ___U3CU3Ef__switchU24map6_46; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map6_46() { return &___U3CU3Ef__switchU24map6_46; }
	inline void set_U3CU3Ef__switchU24map6_46(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map6_46 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map6_46, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_47() { return static_cast<int32_t>(offsetof(iTween_t488923914_StaticFields, ___U3CU3Ef__switchU24map7_47)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map7_47() const { return ___U3CU3Ef__switchU24map7_47; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map7_47() { return &___U3CU3Ef__switchU24map7_47; }
	inline void set_U3CU3Ef__switchU24map7_47(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map7_47 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map7_47, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_48() { return static_cast<int32_t>(offsetof(iTween_t488923914_StaticFields, ___U3CU3Ef__switchU24map8_48)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map8_48() const { return ___U3CU3Ef__switchU24map8_48; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map8_48() { return &___U3CU3Ef__switchU24map8_48; }
	inline void set_U3CU3Ef__switchU24map8_48(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map8_48 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map8_48, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map9_49() { return static_cast<int32_t>(offsetof(iTween_t488923914_StaticFields, ___U3CU3Ef__switchU24map9_49)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map9_49() const { return ___U3CU3Ef__switchU24map9_49; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map9_49() { return &___U3CU3Ef__switchU24map9_49; }
	inline void set_U3CU3Ef__switchU24map9_49(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map9_49 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map9_49, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapA_50() { return static_cast<int32_t>(offsetof(iTween_t488923914_StaticFields, ___U3CU3Ef__switchU24mapA_50)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapA_50() const { return ___U3CU3Ef__switchU24mapA_50; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapA_50() { return &___U3CU3Ef__switchU24mapA_50; }
	inline void set_U3CU3Ef__switchU24mapA_50(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapA_50 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapA_50, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapB_51() { return static_cast<int32_t>(offsetof(iTween_t488923914_StaticFields, ___U3CU3Ef__switchU24mapB_51)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapB_51() const { return ___U3CU3Ef__switchU24mapB_51; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapB_51() { return &___U3CU3Ef__switchU24mapB_51; }
	inline void set_U3CU3Ef__switchU24mapB_51(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapB_51 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapB_51, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_52() { return static_cast<int32_t>(offsetof(iTween_t488923914_StaticFields, ___U3CU3Ef__switchU24mapC_52)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapC_52() const { return ___U3CU3Ef__switchU24mapC_52; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapC_52() { return &___U3CU3Ef__switchU24mapC_52; }
	inline void set_U3CU3Ef__switchU24mapC_52(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapC_52 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapC_52, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
