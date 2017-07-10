#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_EventArgs3289624707.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct  AdFailedToLoadEventArgs_t1756611910  : public EventArgs_t3289624707
{
public:
	// System.String GoogleMobileAds.Api.AdFailedToLoadEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdFailedToLoadEventArgs_t1756611910, ___U3CMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMessageU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
