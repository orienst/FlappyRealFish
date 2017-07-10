#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameController
struct GameController_t3607102586;
// AdMob
struct AdMob_t3501617531;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TitleController
struct  TitleController_t391985954  : public MonoBehaviour_t1158329972
{
public:
	// GameController TitleController::gameController
	GameController_t3607102586 * ___gameController_2;
	// AdMob TitleController::adMob
	AdMob_t3501617531 * ___adMob_3;
	// UnityEngine.UI.Text TitleController::highScoreLabel
	Text_t356221433 * ___highScoreLabel_4;
	// UnityEngine.GameObject TitleController::Stage2Button
	GameObject_t1756533147 * ___Stage2Button_5;
	// UnityEngine.GameObject TitleController::Stage3Button
	GameObject_t1756533147 * ___Stage3Button_6;
	// UnityEngine.UI.Text TitleController::loadingText
	Text_t356221433 * ___loadingText_7;

public:
	inline static int32_t get_offset_of_gameController_2() { return static_cast<int32_t>(offsetof(TitleController_t391985954, ___gameController_2)); }
	inline GameController_t3607102586 * get_gameController_2() const { return ___gameController_2; }
	inline GameController_t3607102586 ** get_address_of_gameController_2() { return &___gameController_2; }
	inline void set_gameController_2(GameController_t3607102586 * value)
	{
		___gameController_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_2, value);
	}

	inline static int32_t get_offset_of_adMob_3() { return static_cast<int32_t>(offsetof(TitleController_t391985954, ___adMob_3)); }
	inline AdMob_t3501617531 * get_adMob_3() const { return ___adMob_3; }
	inline AdMob_t3501617531 ** get_address_of_adMob_3() { return &___adMob_3; }
	inline void set_adMob_3(AdMob_t3501617531 * value)
	{
		___adMob_3 = value;
		Il2CppCodeGenWriteBarrier(&___adMob_3, value);
	}

	inline static int32_t get_offset_of_highScoreLabel_4() { return static_cast<int32_t>(offsetof(TitleController_t391985954, ___highScoreLabel_4)); }
	inline Text_t356221433 * get_highScoreLabel_4() const { return ___highScoreLabel_4; }
	inline Text_t356221433 ** get_address_of_highScoreLabel_4() { return &___highScoreLabel_4; }
	inline void set_highScoreLabel_4(Text_t356221433 * value)
	{
		___highScoreLabel_4 = value;
		Il2CppCodeGenWriteBarrier(&___highScoreLabel_4, value);
	}

	inline static int32_t get_offset_of_Stage2Button_5() { return static_cast<int32_t>(offsetof(TitleController_t391985954, ___Stage2Button_5)); }
	inline GameObject_t1756533147 * get_Stage2Button_5() const { return ___Stage2Button_5; }
	inline GameObject_t1756533147 ** get_address_of_Stage2Button_5() { return &___Stage2Button_5; }
	inline void set_Stage2Button_5(GameObject_t1756533147 * value)
	{
		___Stage2Button_5 = value;
		Il2CppCodeGenWriteBarrier(&___Stage2Button_5, value);
	}

	inline static int32_t get_offset_of_Stage3Button_6() { return static_cast<int32_t>(offsetof(TitleController_t391985954, ___Stage3Button_6)); }
	inline GameObject_t1756533147 * get_Stage3Button_6() const { return ___Stage3Button_6; }
	inline GameObject_t1756533147 ** get_address_of_Stage3Button_6() { return &___Stage3Button_6; }
	inline void set_Stage3Button_6(GameObject_t1756533147 * value)
	{
		___Stage3Button_6 = value;
		Il2CppCodeGenWriteBarrier(&___Stage3Button_6, value);
	}

	inline static int32_t get_offset_of_loadingText_7() { return static_cast<int32_t>(offsetof(TitleController_t391985954, ___loadingText_7)); }
	inline Text_t356221433 * get_loadingText_7() const { return ___loadingText_7; }
	inline Text_t356221433 ** get_address_of_loadingText_7() { return &___loadingText_7; }
	inline void set_loadingText_7(Text_t356221433 * value)
	{
		___loadingText_7 = value;
		Il2CppCodeGenWriteBarrier(&___loadingText_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
