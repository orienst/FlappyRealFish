#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback
struct GADURewardBasedVideoAdDidRewardCallback_t129051320;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GADURewardBasedVideoAdDidRewardCallback__ctor_m2993363035 (GADURewardBasedVideoAdDidRewardCallback_t129051320 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback::Invoke(System.IntPtr,System.String,System.Double)
extern "C"  void GADURewardBasedVideoAdDidRewardCallback_Invoke_m1262324133 (GADURewardBasedVideoAdDidRewardCallback_t129051320 * __this, IntPtr_t ___rewardBasedVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback::BeginInvoke(System.IntPtr,System.String,System.Double,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GADURewardBasedVideoAdDidRewardCallback_BeginInvoke_m2287780726 (GADURewardBasedVideoAdDidRewardCallback_t129051320 * __this, IntPtr_t ___rewardBasedVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback::EndInvoke(System.IAsyncResult)
extern "C"  void GADURewardBasedVideoAdDidRewardCallback_EndInvoke_m2877166625 (GADURewardBasedVideoAdDidRewardCallback_t129051320 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
