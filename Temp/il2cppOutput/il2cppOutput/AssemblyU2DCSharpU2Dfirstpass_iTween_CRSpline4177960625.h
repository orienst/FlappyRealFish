#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween/CRSpline
struct  CRSpline_t4177960625  : public Il2CppObject
{
public:
	// UnityEngine.Vector3[] iTween/CRSpline::pts
	Vector3U5BU5D_t1172311765* ___pts_0;

public:
	inline static int32_t get_offset_of_pts_0() { return static_cast<int32_t>(offsetof(CRSpline_t4177960625, ___pts_0)); }
	inline Vector3U5BU5D_t1172311765* get_pts_0() const { return ___pts_0; }
	inline Vector3U5BU5D_t1172311765** get_address_of_pts_0() { return &___pts_0; }
	inline void set_pts_0(Vector3U5BU5D_t1172311765* value)
	{
		___pts_0 = value;
		Il2CppCodeGenWriteBarrier(&___pts_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
