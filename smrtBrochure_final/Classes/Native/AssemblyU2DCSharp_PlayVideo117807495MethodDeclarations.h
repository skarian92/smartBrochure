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

// PlayVideo
struct PlayVideo_t117807495;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// VideoPlaybackBehaviour
struct VideoPlaybackBehaviour_t2848361927;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_VideoPlaybackBehaviour2848361927.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void PlayVideo::.ctor()
extern "C"  void PlayVideo__ctor_m1124877252 (PlayVideo_t117807495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayVideo::TryPickingVideo()
extern "C"  void PlayVideo_TryPickingVideo_m1304402071 (PlayVideo_t117807495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayVideo::PlayFullscreenVideoAtEndOfFrame(VideoPlaybackBehaviour)
extern "C"  Il2CppObject * PlayVideo_PlayFullscreenVideoAtEndOfFrame_m3616956701 (Il2CppObject * __this /* static, unused */, VideoPlaybackBehaviour_t2848361927 * ___video0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlaybackBehaviour PlayVideo::PickVideo(UnityEngine.Vector3)
extern "C"  VideoPlaybackBehaviour_t2848361927 * PlayVideo_PickVideo_m3793023303 (PlayVideo_t117807495 * __this, Vector3_t4282066566  ___screenPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayVideo::PauseOtherVideos(VideoPlaybackBehaviour)
extern "C"  void PlayVideo_PauseOtherVideos_m3927493387 (PlayVideo_t117807495 * __this, VideoPlaybackBehaviour_t2848361927 * ___currentVideo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
