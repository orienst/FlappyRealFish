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
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SocialConnector.SocialController
struct  SocialController_t214821861  : public MonoBehaviour_t1158329972
{
public:
	// GameController SocialConnector.SocialController::gameController
	GameController_t3607102586 * ___gameController_2;
	// System.String SocialConnector.SocialController::text
	String_t* ___text_3;
	// System.String SocialConnector.SocialController::URL
	String_t* ___URL_4;
	// System.Single SocialConnector.SocialController::score
	float ___score_5;

public:
	inline static int32_t get_offset_of_gameController_2() { return static_cast<int32_t>(offsetof(SocialController_t214821861, ___gameController_2)); }
	inline GameController_t3607102586 * get_gameController_2() const { return ___gameController_2; }
	inline GameController_t3607102586 ** get_address_of_gameController_2() { return &___gameController_2; }
	inline void set_gameController_2(GameController_t3607102586 * value)
	{
		___gameController_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_2, value);
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(SocialController_t214821861, ___text_3)); }
	inline String_t* get_text_3() const { return ___text_3; }
	inline String_t** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(String_t* value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier(&___text_3, value);
	}

	inline static int32_t get_offset_of_URL_4() { return static_cast<int32_t>(offsetof(SocialController_t214821861, ___URL_4)); }
	inline String_t* get_URL_4() const { return ___URL_4; }
	inline String_t** get_address_of_URL_4() { return &___URL_4; }
	inline void set_URL_4(String_t* value)
	{
		___URL_4 = value;
		Il2CppCodeGenWriteBarrier(&___URL_4, value);
	}

	inline static int32_t get_offset_of_score_5() { return static_cast<int32_t>(offsetof(SocialController_t214821861, ___score_5)); }
	inline float get_score_5() const { return ___score_5; }
	inline float* get_address_of_score_5() { return &___score_5; }
	inline void set_score_5(float value)
	{
		___score_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
