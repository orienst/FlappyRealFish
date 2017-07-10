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
// CameraController
struct CameraController_t3555666667;
// LifePanelController
struct LifePanelController_t683122536;
// AdMob
struct AdMob_t3501617531;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// System.Action`1<UnityEngine.Advertisements.ShowResult>
struct Action_1_t258469394;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GameController_State990358124.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public MonoBehaviour_t1158329972
{
public:
	// GameController/State GameController::state
	int32_t ___state_3;
	// FishController GameController::fish
	FishController_t1741649206 * ___fish_4;
	// CameraController GameController::camera
	CameraController_t3555666667 * ___camera_5;
	// LifePanelController GameController::lifePanel
	LifePanelController_t683122536 * ___lifePanel_6;
	// AdMob GameController::adMob
	AdMob_t3501617531 * ___adMob_7;
	// UnityEngine.UI.Text GameController::statusLabel
	Text_t356221433 * ___statusLabel_8;
	// UnityEngine.UI.Text GameController::scoreLabel
	Text_t356221433 * ___scoreLabel_9;
	// UnityEngine.UI.Text GameController::highScoreLabel
	Text_t356221433 * ___highScoreLabel_10;
	// UnityEngine.UI.Text GameController::highScoreInfoLabel
	Text_t356221433 * ___highScoreInfoLabel_11;
	// UnityEngine.UI.Text GameController::stageNoLabel
	Text_t356221433 * ___stageNoLabel_12;
	// System.Collections.Generic.List`1<System.Int32> GameController::Obstacles1
	List_1_t1440998580 * ___Obstacles1_13;
	// System.Collections.Generic.List`1<System.Int32> GameController::Obstacles2
	List_1_t1440998580 * ___Obstacles2_14;
	// System.Int32 GameController::stageNo
	int32_t ___stageNo_16;
	// System.Single GameController::score
	float ___score_17;
	// System.Single GameController::nowScore
	float ___nowScore_19;
	// System.Boolean GameController::isInitScore
	bool ___isInitScore_20;
	// UnityEngine.GameObject GameController::BackToTitleButton
	GameObject_t1756533147 * ___BackToTitleButton_22;
	// UnityEngine.GameObject GameController::ReStartButton
	GameObject_t1756533147 * ___ReStartButton_23;
	// UnityEngine.GameObject GameController::StartButton
	GameObject_t1756533147 * ___StartButton_24;
	// UnityEngine.GameObject GameController::PauseButton
	GameObject_t1756533147 * ___PauseButton_25;
	// UnityEngine.GameObject GameController::ResumeButton
	GameObject_t1756533147 * ___ResumeButton_26;
	// UnityEngine.GameObject GameController::GoToNextStageButton
	GameObject_t1756533147 * ___GoToNextStageButton_27;
	// UnityEngine.GameObject GameController::ShareButton
	GameObject_t1756533147 * ___ShareButton_28;
	// UnityEngine.AudioClip GameController::bgmSound
	AudioClip_t1932558630 * ___bgmSound_29;
	// UnityEngine.AudioClip GameController::crash
	AudioClip_t1932558630 * ___crash_30;
	// UnityEngine.AudioClip GameController::clear
	AudioClip_t1932558630 * ___clear_31;
	// UnityEngine.AudioClip GameController::allclear
	AudioClip_t1932558630 * ___allclear_32;
	// UnityEngine.AudioClip GameController::gameover
	AudioClip_t1932558630 * ___gameover_33;
	// UnityEngine.AudioSource GameController::audioSource
	AudioSource_t1135106623 * ___audioSource_34;

public:
	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___state_3)); }
	inline int32_t get_state_3() const { return ___state_3; }
	inline int32_t* get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(int32_t value)
	{
		___state_3 = value;
	}

	inline static int32_t get_offset_of_fish_4() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___fish_4)); }
	inline FishController_t1741649206 * get_fish_4() const { return ___fish_4; }
	inline FishController_t1741649206 ** get_address_of_fish_4() { return &___fish_4; }
	inline void set_fish_4(FishController_t1741649206 * value)
	{
		___fish_4 = value;
		Il2CppCodeGenWriteBarrier(&___fish_4, value);
	}

	inline static int32_t get_offset_of_camera_5() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___camera_5)); }
	inline CameraController_t3555666667 * get_camera_5() const { return ___camera_5; }
	inline CameraController_t3555666667 ** get_address_of_camera_5() { return &___camera_5; }
	inline void set_camera_5(CameraController_t3555666667 * value)
	{
		___camera_5 = value;
		Il2CppCodeGenWriteBarrier(&___camera_5, value);
	}

	inline static int32_t get_offset_of_lifePanel_6() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___lifePanel_6)); }
	inline LifePanelController_t683122536 * get_lifePanel_6() const { return ___lifePanel_6; }
	inline LifePanelController_t683122536 ** get_address_of_lifePanel_6() { return &___lifePanel_6; }
	inline void set_lifePanel_6(LifePanelController_t683122536 * value)
	{
		___lifePanel_6 = value;
		Il2CppCodeGenWriteBarrier(&___lifePanel_6, value);
	}

	inline static int32_t get_offset_of_adMob_7() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___adMob_7)); }
	inline AdMob_t3501617531 * get_adMob_7() const { return ___adMob_7; }
	inline AdMob_t3501617531 ** get_address_of_adMob_7() { return &___adMob_7; }
	inline void set_adMob_7(AdMob_t3501617531 * value)
	{
		___adMob_7 = value;
		Il2CppCodeGenWriteBarrier(&___adMob_7, value);
	}

	inline static int32_t get_offset_of_statusLabel_8() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___statusLabel_8)); }
	inline Text_t356221433 * get_statusLabel_8() const { return ___statusLabel_8; }
	inline Text_t356221433 ** get_address_of_statusLabel_8() { return &___statusLabel_8; }
	inline void set_statusLabel_8(Text_t356221433 * value)
	{
		___statusLabel_8 = value;
		Il2CppCodeGenWriteBarrier(&___statusLabel_8, value);
	}

	inline static int32_t get_offset_of_scoreLabel_9() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___scoreLabel_9)); }
	inline Text_t356221433 * get_scoreLabel_9() const { return ___scoreLabel_9; }
	inline Text_t356221433 ** get_address_of_scoreLabel_9() { return &___scoreLabel_9; }
	inline void set_scoreLabel_9(Text_t356221433 * value)
	{
		___scoreLabel_9 = value;
		Il2CppCodeGenWriteBarrier(&___scoreLabel_9, value);
	}

	inline static int32_t get_offset_of_highScoreLabel_10() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___highScoreLabel_10)); }
	inline Text_t356221433 * get_highScoreLabel_10() const { return ___highScoreLabel_10; }
	inline Text_t356221433 ** get_address_of_highScoreLabel_10() { return &___highScoreLabel_10; }
	inline void set_highScoreLabel_10(Text_t356221433 * value)
	{
		___highScoreLabel_10 = value;
		Il2CppCodeGenWriteBarrier(&___highScoreLabel_10, value);
	}

	inline static int32_t get_offset_of_highScoreInfoLabel_11() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___highScoreInfoLabel_11)); }
	inline Text_t356221433 * get_highScoreInfoLabel_11() const { return ___highScoreInfoLabel_11; }
	inline Text_t356221433 ** get_address_of_highScoreInfoLabel_11() { return &___highScoreInfoLabel_11; }
	inline void set_highScoreInfoLabel_11(Text_t356221433 * value)
	{
		___highScoreInfoLabel_11 = value;
		Il2CppCodeGenWriteBarrier(&___highScoreInfoLabel_11, value);
	}

	inline static int32_t get_offset_of_stageNoLabel_12() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___stageNoLabel_12)); }
	inline Text_t356221433 * get_stageNoLabel_12() const { return ___stageNoLabel_12; }
	inline Text_t356221433 ** get_address_of_stageNoLabel_12() { return &___stageNoLabel_12; }
	inline void set_stageNoLabel_12(Text_t356221433 * value)
	{
		___stageNoLabel_12 = value;
		Il2CppCodeGenWriteBarrier(&___stageNoLabel_12, value);
	}

	inline static int32_t get_offset_of_Obstacles1_13() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___Obstacles1_13)); }
	inline List_1_t1440998580 * get_Obstacles1_13() const { return ___Obstacles1_13; }
	inline List_1_t1440998580 ** get_address_of_Obstacles1_13() { return &___Obstacles1_13; }
	inline void set_Obstacles1_13(List_1_t1440998580 * value)
	{
		___Obstacles1_13 = value;
		Il2CppCodeGenWriteBarrier(&___Obstacles1_13, value);
	}

	inline static int32_t get_offset_of_Obstacles2_14() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___Obstacles2_14)); }
	inline List_1_t1440998580 * get_Obstacles2_14() const { return ___Obstacles2_14; }
	inline List_1_t1440998580 ** get_address_of_Obstacles2_14() { return &___Obstacles2_14; }
	inline void set_Obstacles2_14(List_1_t1440998580 * value)
	{
		___Obstacles2_14 = value;
		Il2CppCodeGenWriteBarrier(&___Obstacles2_14, value);
	}

	inline static int32_t get_offset_of_stageNo_16() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___stageNo_16)); }
	inline int32_t get_stageNo_16() const { return ___stageNo_16; }
	inline int32_t* get_address_of_stageNo_16() { return &___stageNo_16; }
	inline void set_stageNo_16(int32_t value)
	{
		___stageNo_16 = value;
	}

	inline static int32_t get_offset_of_score_17() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___score_17)); }
	inline float get_score_17() const { return ___score_17; }
	inline float* get_address_of_score_17() { return &___score_17; }
	inline void set_score_17(float value)
	{
		___score_17 = value;
	}

	inline static int32_t get_offset_of_nowScore_19() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___nowScore_19)); }
	inline float get_nowScore_19() const { return ___nowScore_19; }
	inline float* get_address_of_nowScore_19() { return &___nowScore_19; }
	inline void set_nowScore_19(float value)
	{
		___nowScore_19 = value;
	}

	inline static int32_t get_offset_of_isInitScore_20() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___isInitScore_20)); }
	inline bool get_isInitScore_20() const { return ___isInitScore_20; }
	inline bool* get_address_of_isInitScore_20() { return &___isInitScore_20; }
	inline void set_isInitScore_20(bool value)
	{
		___isInitScore_20 = value;
	}

	inline static int32_t get_offset_of_BackToTitleButton_22() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___BackToTitleButton_22)); }
	inline GameObject_t1756533147 * get_BackToTitleButton_22() const { return ___BackToTitleButton_22; }
	inline GameObject_t1756533147 ** get_address_of_BackToTitleButton_22() { return &___BackToTitleButton_22; }
	inline void set_BackToTitleButton_22(GameObject_t1756533147 * value)
	{
		___BackToTitleButton_22 = value;
		Il2CppCodeGenWriteBarrier(&___BackToTitleButton_22, value);
	}

	inline static int32_t get_offset_of_ReStartButton_23() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___ReStartButton_23)); }
	inline GameObject_t1756533147 * get_ReStartButton_23() const { return ___ReStartButton_23; }
	inline GameObject_t1756533147 ** get_address_of_ReStartButton_23() { return &___ReStartButton_23; }
	inline void set_ReStartButton_23(GameObject_t1756533147 * value)
	{
		___ReStartButton_23 = value;
		Il2CppCodeGenWriteBarrier(&___ReStartButton_23, value);
	}

	inline static int32_t get_offset_of_StartButton_24() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___StartButton_24)); }
	inline GameObject_t1756533147 * get_StartButton_24() const { return ___StartButton_24; }
	inline GameObject_t1756533147 ** get_address_of_StartButton_24() { return &___StartButton_24; }
	inline void set_StartButton_24(GameObject_t1756533147 * value)
	{
		___StartButton_24 = value;
		Il2CppCodeGenWriteBarrier(&___StartButton_24, value);
	}

	inline static int32_t get_offset_of_PauseButton_25() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___PauseButton_25)); }
	inline GameObject_t1756533147 * get_PauseButton_25() const { return ___PauseButton_25; }
	inline GameObject_t1756533147 ** get_address_of_PauseButton_25() { return &___PauseButton_25; }
	inline void set_PauseButton_25(GameObject_t1756533147 * value)
	{
		___PauseButton_25 = value;
		Il2CppCodeGenWriteBarrier(&___PauseButton_25, value);
	}

	inline static int32_t get_offset_of_ResumeButton_26() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___ResumeButton_26)); }
	inline GameObject_t1756533147 * get_ResumeButton_26() const { return ___ResumeButton_26; }
	inline GameObject_t1756533147 ** get_address_of_ResumeButton_26() { return &___ResumeButton_26; }
	inline void set_ResumeButton_26(GameObject_t1756533147 * value)
	{
		___ResumeButton_26 = value;
		Il2CppCodeGenWriteBarrier(&___ResumeButton_26, value);
	}

	inline static int32_t get_offset_of_GoToNextStageButton_27() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___GoToNextStageButton_27)); }
	inline GameObject_t1756533147 * get_GoToNextStageButton_27() const { return ___GoToNextStageButton_27; }
	inline GameObject_t1756533147 ** get_address_of_GoToNextStageButton_27() { return &___GoToNextStageButton_27; }
	inline void set_GoToNextStageButton_27(GameObject_t1756533147 * value)
	{
		___GoToNextStageButton_27 = value;
		Il2CppCodeGenWriteBarrier(&___GoToNextStageButton_27, value);
	}

	inline static int32_t get_offset_of_ShareButton_28() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___ShareButton_28)); }
	inline GameObject_t1756533147 * get_ShareButton_28() const { return ___ShareButton_28; }
	inline GameObject_t1756533147 ** get_address_of_ShareButton_28() { return &___ShareButton_28; }
	inline void set_ShareButton_28(GameObject_t1756533147 * value)
	{
		___ShareButton_28 = value;
		Il2CppCodeGenWriteBarrier(&___ShareButton_28, value);
	}

	inline static int32_t get_offset_of_bgmSound_29() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___bgmSound_29)); }
	inline AudioClip_t1932558630 * get_bgmSound_29() const { return ___bgmSound_29; }
	inline AudioClip_t1932558630 ** get_address_of_bgmSound_29() { return &___bgmSound_29; }
	inline void set_bgmSound_29(AudioClip_t1932558630 * value)
	{
		___bgmSound_29 = value;
		Il2CppCodeGenWriteBarrier(&___bgmSound_29, value);
	}

	inline static int32_t get_offset_of_crash_30() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___crash_30)); }
	inline AudioClip_t1932558630 * get_crash_30() const { return ___crash_30; }
	inline AudioClip_t1932558630 ** get_address_of_crash_30() { return &___crash_30; }
	inline void set_crash_30(AudioClip_t1932558630 * value)
	{
		___crash_30 = value;
		Il2CppCodeGenWriteBarrier(&___crash_30, value);
	}

	inline static int32_t get_offset_of_clear_31() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___clear_31)); }
	inline AudioClip_t1932558630 * get_clear_31() const { return ___clear_31; }
	inline AudioClip_t1932558630 ** get_address_of_clear_31() { return &___clear_31; }
	inline void set_clear_31(AudioClip_t1932558630 * value)
	{
		___clear_31 = value;
		Il2CppCodeGenWriteBarrier(&___clear_31, value);
	}

	inline static int32_t get_offset_of_allclear_32() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___allclear_32)); }
	inline AudioClip_t1932558630 * get_allclear_32() const { return ___allclear_32; }
	inline AudioClip_t1932558630 ** get_address_of_allclear_32() { return &___allclear_32; }
	inline void set_allclear_32(AudioClip_t1932558630 * value)
	{
		___allclear_32 = value;
		Il2CppCodeGenWriteBarrier(&___allclear_32, value);
	}

	inline static int32_t get_offset_of_gameover_33() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___gameover_33)); }
	inline AudioClip_t1932558630 * get_gameover_33() const { return ___gameover_33; }
	inline AudioClip_t1932558630 ** get_address_of_gameover_33() { return &___gameover_33; }
	inline void set_gameover_33(AudioClip_t1932558630 * value)
	{
		___gameover_33 = value;
		Il2CppCodeGenWriteBarrier(&___gameover_33, value);
	}

	inline static int32_t get_offset_of_audioSource_34() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___audioSource_34)); }
	inline AudioSource_t1135106623 * get_audioSource_34() const { return ___audioSource_34; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_34() { return &___audioSource_34; }
	inline void set_audioSource_34(AudioSource_t1135106623 * value)
	{
		___audioSource_34 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_34, value);
	}
};

struct GameController_t3607102586_StaticFields
{
public:
	// System.Int32 GameController::life
	int32_t ___life_15;
	// System.Single GameController::clearScore
	float ___clearScore_18;
	// System.Boolean GameController::isAdShow
	bool ___isAdShow_21;
	// System.Action`1<UnityEngine.Advertisements.ShowResult> GameController::<>f__am$cache20
	Action_1_t258469394 * ___U3CU3Ef__amU24cache20_35;

public:
	inline static int32_t get_offset_of_life_15() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___life_15)); }
	inline int32_t get_life_15() const { return ___life_15; }
	inline int32_t* get_address_of_life_15() { return &___life_15; }
	inline void set_life_15(int32_t value)
	{
		___life_15 = value;
	}

	inline static int32_t get_offset_of_clearScore_18() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___clearScore_18)); }
	inline float get_clearScore_18() const { return ___clearScore_18; }
	inline float* get_address_of_clearScore_18() { return &___clearScore_18; }
	inline void set_clearScore_18(float value)
	{
		___clearScore_18 = value;
	}

	inline static int32_t get_offset_of_isAdShow_21() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___isAdShow_21)); }
	inline bool get_isAdShow_21() const { return ___isAdShow_21; }
	inline bool* get_address_of_isAdShow_21() { return &___isAdShow_21; }
	inline void set_isAdShow_21(bool value)
	{
		___isAdShow_21 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache20_35() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___U3CU3Ef__amU24cache20_35)); }
	inline Action_1_t258469394 * get_U3CU3Ef__amU24cache20_35() const { return ___U3CU3Ef__amU24cache20_35; }
	inline Action_1_t258469394 ** get_address_of_U3CU3Ef__amU24cache20_35() { return &___U3CU3Ef__amU24cache20_35; }
	inline void set_U3CU3Ef__amU24cache20_35(Action_1_t258469394 * value)
	{
		___U3CU3Ef__amU24cache20_35 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache20_35, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
