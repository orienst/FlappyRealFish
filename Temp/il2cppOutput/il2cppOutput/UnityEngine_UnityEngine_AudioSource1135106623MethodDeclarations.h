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

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"

// System.Single UnityEngine.AudioSource::get_volume()
extern "C"  float AudioSource_get_volume_m66289169 (AudioSource_t1135106623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C"  void AudioSource_set_volume_m2777308722 (AudioSource_t1135106623 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AudioSource::get_pitch()
extern "C"  float AudioSource_get_pitch_m4220572439 (AudioSource_t1135106623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C"  void AudioSource_set_pitch_m3064416458 (AudioSource_t1135106623 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C"  AudioClip_t1932558630 * AudioSource_get_clip_m2127996365 (AudioSource_t1135106623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m738814682 (AudioSource_t1135106623 * __this, AudioClip_t1932558630 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C"  void AudioSource_Play_m889724421 (AudioSource_t1135106623 * __this, uint64_t ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m353744792 (AudioSource_t1135106623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Stop()
extern "C"  void AudioSource_Stop_m3452679614 (AudioSource_t1135106623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C"  void AudioSource_PlayOneShot_m4118899740 (AudioSource_t1135106623 * __this, AudioClip_t1932558630 * ___clip0, float ___volumeScale1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C"  void AudioSource_PlayOneShot_m286472761 (AudioSource_t1135106623 * __this, AudioClip_t1932558630 * ___clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
extern "C"  void AudioSource_set_playOnAwake_m858475204 (AudioSource_t1135106623 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
