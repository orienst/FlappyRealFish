#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.AsyncExec
struct  AsyncExec_t3964069003  : public Il2CppObject
{
public:

public:
};

struct AsyncExec_t3964069003_StaticFields
{
public:
	// UnityEngine.GameObject UnityEngine.Advertisements.AsyncExec::s_GameObject
	GameObject_t1756533147 * ___s_GameObject_0;
	// UnityEngine.MonoBehaviour UnityEngine.Advertisements.AsyncExec::s_CoroutineHost
	MonoBehaviour_t1158329972 * ___s_CoroutineHost_1;

public:
	inline static int32_t get_offset_of_s_GameObject_0() { return static_cast<int32_t>(offsetof(AsyncExec_t3964069003_StaticFields, ___s_GameObject_0)); }
	inline GameObject_t1756533147 * get_s_GameObject_0() const { return ___s_GameObject_0; }
	inline GameObject_t1756533147 ** get_address_of_s_GameObject_0() { return &___s_GameObject_0; }
	inline void set_s_GameObject_0(GameObject_t1756533147 * value)
	{
		___s_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_GameObject_0, value);
	}

	inline static int32_t get_offset_of_s_CoroutineHost_1() { return static_cast<int32_t>(offsetof(AsyncExec_t3964069003_StaticFields, ___s_CoroutineHost_1)); }
	inline MonoBehaviour_t1158329972 * get_s_CoroutineHost_1() const { return ___s_CoroutineHost_1; }
	inline MonoBehaviour_t1158329972 ** get_address_of_s_CoroutineHost_1() { return &___s_CoroutineHost_1; }
	inline void set_s_CoroutineHost_1(MonoBehaviour_t1158329972 * value)
	{
		___s_CoroutineHost_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_CoroutineHost_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
