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

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct GameCenterPlatform_t2156144444;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t2210666073;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[]
struct GcAchievementDataU5BU5D_t2283071720;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t4052399267;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t3885079697;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t2511354027;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t3039104018;
// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_t77027648;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t3263047812;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t2930725895;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_t1752291260;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope2583939667.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_960725851.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter3198293052.h"

// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.ctor()
extern "C"  void GameCenterPlatform__ctor_m644203297 (GameCenterPlatform_t2156144444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.cctor()
extern "C"  void GameCenterPlatform__cctor_m2403939600 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m692395677 (GameCenterPlatform_t2156144444 * __this, Il2CppObject * ___user0, Action_1_t3627374100 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m1019748987 (GameCenterPlatform_t2156144444 * __this, Il2CppObject * ___user0, Action_1_t3627374100 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()
extern "C"  void GameCenterPlatform_Internal_Authenticate_m3797365482 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()
extern "C"  bool GameCenterPlatform_Internal_Authenticated_m4294501884 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
extern "C"  String_t* GameCenterPlatform_Internal_UserName_m3048265218 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
extern "C"  String_t* GameCenterPlatform_Internal_UserID_m1103178632 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()
extern "C"  bool GameCenterPlatform_Internal_Underage_m2690511558 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()
extern "C"  Texture2D_t3542995729 * GameCenterPlatform_Internal_UserImage_m915316496 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()
extern "C"  void GameCenterPlatform_Internal_LoadFriends_m3035019738 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()
extern "C"  void GameCenterPlatform_Internal_LoadAchievementDescriptions_m631344173 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()
extern "C"  void GameCenterPlatform_Internal_LoadAchievements_m2701153839 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)
extern "C"  void GameCenterPlatform_Internal_ReportProgress_m1293200984 (Il2CppObject * __this /* static, unused */, String_t* ___id0, double ___progress1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)
extern "C"  void GameCenterPlatform_Internal_ReportScore_m2380287015 (Il2CppObject * __this /* static, unused */, int64_t ___score0, String_t* ___category1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)
extern "C"  void GameCenterPlatform_Internal_LoadScores_m4195262886 (Il2CppObject * __this /* static, unused */, String_t* ___category0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
extern "C"  void GameCenterPlatform_Internal_ShowAchievementsUI_m4211451772 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
extern "C"  void GameCenterPlatform_Internal_ShowLeaderboardUI_m3138464075 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])
extern "C"  void GameCenterPlatform_Internal_LoadUsers_m3870253977 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___userIds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()
extern "C"  void GameCenterPlatform_Internal_ResetAllAchievements_m3489790181 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)
extern "C"  void GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m4005094965 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements(System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_ResetAllAchievements_m4114806314 (Il2CppObject * __this /* static, unused */, Action_1_t3627374100 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementCompletionBanner(System.Boolean)
extern "C"  void GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m534321293 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI(System.String,UnityEngine.SocialPlatforms.TimeScope)
extern "C"  void GameCenterPlatform_ShowLeaderboardUI_m2527518460 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardID0, int32_t ___timeScope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)
extern "C"  void GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m915894780 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardID0, int32_t ___timeScope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearAchievementDescriptions(System.Int32)
extern "C"  void GameCenterPlatform_ClearAchievementDescriptions_m4063396811 (Il2CppObject * __this /* static, unused */, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescription(UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData,System.Int32)
extern "C"  void GameCenterPlatform_SetAchievementDescription_m1025952251 (Il2CppObject * __this /* static, unused */, GcAchievementDescriptionData_t960725851  ___data0, int32_t ___number1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescriptionImage(UnityEngine.Texture2D,System.Int32)
extern "C"  void GameCenterPlatform_SetAchievementDescriptionImage_m2184571696 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___texture0, int32_t ___number1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerAchievementDescriptionCallback()
extern "C"  void GameCenterPlatform_TriggerAchievementDescriptionCallback_m382485689 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AuthenticateCallbackWrapper(System.Int32)
extern "C"  void GameCenterPlatform_AuthenticateCallbackWrapper_m1619241663 (Il2CppObject * __this /* static, unused */, int32_t ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearFriends(System.Int32)
extern "C"  void GameCenterPlatform_ClearFriends_m1742022050 (Il2CppObject * __this /* static, unused */, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriends(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern "C"  void GameCenterPlatform_SetFriends_m676763082 (Il2CppObject * __this /* static, unused */, GcUserProfileData_t3198293052  ___data0, int32_t ___number1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriendImage(UnityEngine.Texture2D,System.Int32)
extern "C"  void GameCenterPlatform_SetFriendImage_m1119516317 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___texture0, int32_t ___number1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerFriendsCallbackWrapper(System.Int32)
extern "C"  void GameCenterPlatform_TriggerFriendsCallbackWrapper_m809905571 (Il2CppObject * __this /* static, unused */, int32_t ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AchievementCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[])
extern "C"  void GameCenterPlatform_AchievementCallbackWrapper_m1306048684 (Il2CppObject * __this /* static, unused */, GcAchievementDataU5BU5D_t2283071720* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ProgressCallbackWrapper(System.Boolean)
extern "C"  void GameCenterPlatform_ProgressCallbackWrapper_m1005842297 (Il2CppObject * __this /* static, unused */, bool ___success0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreCallbackWrapper(System.Boolean)
extern "C"  void GameCenterPlatform_ScoreCallbackWrapper_m2386426124 (Il2CppObject * __this /* static, unused */, bool ___success0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreLoaderCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern "C"  void GameCenterPlatform_ScoreLoaderCallbackWrapper_m2336845377 (Il2CppObject * __this /* static, unused */, GcScoreDataU5BU5D_t4052399267* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
extern "C"  Il2CppObject * GameCenterPlatform_get_localUser_m3187393722 (GameCenterPlatform_t2156144444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
extern "C"  void GameCenterPlatform_PopulateLocalUser_m2282436159 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
extern "C"  void GameCenterPlatform_LoadAchievementDescriptions_m293745755 (GameCenterPlatform_t2156144444 * __this, Action_1_t3885079697 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_ReportProgress_m3585652631 (GameCenterPlatform_t2156144444 * __this, String_t* ___id0, double ___progress1, Action_1_t3627374100 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
extern "C"  void GameCenterPlatform_LoadAchievements_m200011543 (GameCenterPlatform_t2156144444 * __this, Action_1_t2511354027 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_ReportScore_m3720143724 (GameCenterPlatform_t2156144444 * __this, int64_t ___score0, String_t* ___board1, Action_1_t3627374100 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
extern "C"  void GameCenterPlatform_LoadScores_m2160889205 (GameCenterPlatform_t2156144444 * __this, String_t* ___category0, Action_1_t3039104018 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_LoadScores_m2122243871 (GameCenterPlatform_t2156144444 * __this, Il2CppObject * ___board0, Action_1_t3627374100 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LeaderboardCallbackWrapper(System.Boolean)
extern "C"  void GameCenterPlatform_LeaderboardCallbackWrapper_m1317866993 (Il2CppObject * __this /* static, unused */, bool ___success0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
extern "C"  bool GameCenterPlatform_GetLoading_m2902653631 (GameCenterPlatform_t2156144444 * __this, Il2CppObject * ___board0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
extern "C"  bool GameCenterPlatform_VerifyAuthentication_m4148852888 (GameCenterPlatform_t2156144444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowAchievementsUI()
extern "C"  void GameCenterPlatform_ShowAchievementsUI_m217572822 (GameCenterPlatform_t2156144444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI()
extern "C"  void GameCenterPlatform_ShowLeaderboardUI_m3149996419 (GameCenterPlatform_t2156144444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearUsers(System.Int32)
extern "C"  void GameCenterPlatform_ClearUsers_m28146411 (Il2CppObject * __this /* static, unused */, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUser(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern "C"  void GameCenterPlatform_SetUser_m4136306572 (Il2CppObject * __this /* static, unused */, GcUserProfileData_t3198293052  ___data0, int32_t ___number1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUserImage(UnityEngine.Texture2D,System.Int32)
extern "C"  void GameCenterPlatform_SetUserImage_m3665873800 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___texture0, int32_t ___number1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerUsersCallbackWrapper()
extern "C"  void GameCenterPlatform_TriggerUsersCallbackWrapper_m2751952045 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
extern "C"  void GameCenterPlatform_LoadUsers_m4218470560 (GameCenterPlatform_t2156144444 * __this, StringU5BU5D_t1642385972* ___userIds0, Action_1_t3263047812 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
extern "C"  void GameCenterPlatform_SafeSetUserImage_m4283674749 (Il2CppObject * __this /* static, unused */, UserProfileU5BU5D_t2930725895** ___array0, Texture2D_t3542995729 * ___texture1, int32_t ___number2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C"  void GameCenterPlatform_SafeClearArray_m2690967919 (Il2CppObject * __this /* static, unused */, UserProfileU5BU5D_t2930725895** ___array0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILeaderboard UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateLeaderboard()
extern "C"  Il2CppObject * GameCenterPlatform_CreateLeaderboard_m1959129937 (GameCenterPlatform_t2156144444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.IAchievement UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateAchievement()
extern "C"  Il2CppObject * GameCenterPlatform_CreateAchievement_m2992667237 (GameCenterPlatform_t2156144444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerResetAchievementCallback(System.Boolean)
extern "C"  void GameCenterPlatform_TriggerResetAchievementCallback_m247723933 (Il2CppObject * __this /* static, unused */, bool ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
