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

// VideoPlaybackBehaviour
struct VideoPlaybackBehaviour_t2848361927;
// VideoPlayerHelper
struct VideoPlayerHelper_t638710250;
// UnityEngine.Texture
struct Texture_t2526458961;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_VideoPlayerHelper_MediaState2586048626.h"
#include "AssemblyU2DCSharp_VideoPlayerHelper_MediaType3131497273.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"

// System.Void VideoPlaybackBehaviour::.ctor()
extern "C"  void VideoPlaybackBehaviour__ctor_m3965400756 (VideoPlaybackBehaviour_t2848361927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::.cctor()
extern "C"  void VideoPlaybackBehaviour__cctor_m2186242937 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlayerHelper VideoPlaybackBehaviour::get_VideoPlayer()
extern "C"  VideoPlayerHelper_t638710250 * VideoPlaybackBehaviour_get_VideoPlayer_m421985564 (VideoPlaybackBehaviour_t2848361927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlayerHelper/MediaState VideoPlaybackBehaviour::get_CurrentState()
extern "C"  int32_t VideoPlaybackBehaviour_get_CurrentState_m1021881980 (VideoPlaybackBehaviour_t2848361927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlayerHelper/MediaType VideoPlaybackBehaviour::get_MediaType()
extern "C"  int32_t VideoPlaybackBehaviour_get_MediaType_m3221654125 (VideoPlaybackBehaviour_t2848361927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::set_MediaType(VideoPlayerHelper/MediaType)
extern "C"  void VideoPlaybackBehaviour_set_MediaType_m442698182 (VideoPlaybackBehaviour_t2848361927 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture VideoPlaybackBehaviour::get_KeyframeTexture()
extern "C"  Texture_t2526458961 * VideoPlaybackBehaviour_get_KeyframeTexture_m1783131207 (VideoPlaybackBehaviour_t2848361927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::set_KeyframeTexture(UnityEngine.Texture)
extern "C"  void VideoPlaybackBehaviour_set_KeyframeTexture_m3792897324 (VideoPlaybackBehaviour_t2848361927 * __this, Texture_t2526458961 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlaybackBehaviour::get_AutoPlay()
extern "C"  bool VideoPlaybackBehaviour_get_AutoPlay_m664778256 (VideoPlaybackBehaviour_t2848361927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::Start()
extern "C"  void VideoPlaybackBehaviour_Start_m2912538548 (VideoPlaybackBehaviour_t2848361927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::OnRenderObject()
extern "C"  void VideoPlaybackBehaviour_OnRenderObject_m3270488132 (VideoPlaybackBehaviour_t2848361927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VideoPlaybackBehaviour::InitVideoPlayer()
extern "C"  Il2CppObject * VideoPlaybackBehaviour_InitVideoPlayer_m1178793558 (VideoPlaybackBehaviour_t2848361927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VideoPlaybackBehaviour::LoadVideo()
extern "C"  Il2CppObject * VideoPlaybackBehaviour_LoadVideo_m3344690687 (VideoPlaybackBehaviour_t2848361927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VideoPlaybackBehaviour::PrepareVideo()
extern "C"  Il2CppObject * VideoPlaybackBehaviour_PrepareVideo_m211083276 (VideoPlaybackBehaviour_t2848361927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::OnApplicationPause(System.Boolean)
extern "C"  void VideoPlaybackBehaviour_OnApplicationPause_m2552700876 (VideoPlaybackBehaviour_t2848361927 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::OnDestroy()
extern "C"  void VideoPlaybackBehaviour_OnDestroy_m3649737133 (VideoPlaybackBehaviour_t2848361927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::ShowBusyIcon()
extern "C"  void VideoPlaybackBehaviour_ShowBusyIcon_m877416831 (VideoPlaybackBehaviour_t2848361927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::ShowPlayIcon()
extern "C"  void VideoPlaybackBehaviour_ShowPlayIcon_m202601082 (VideoPlaybackBehaviour_t2848361927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::InitVideoTexture(System.Boolean)
extern "C"  void VideoPlaybackBehaviour_InitVideoTexture_m2791429207 (VideoPlaybackBehaviour_t2848361927 * __this, bool ___isOpenGLRendering0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::HandleStateChange(VideoPlayerHelper/MediaState)
extern "C"  void VideoPlaybackBehaviour_HandleStateChange_m2398346041 (VideoPlaybackBehaviour_t2848361927 * __this, int32_t ___newState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::ScaleIcon()
extern "C"  void VideoPlaybackBehaviour_ScaleIcon_m571679605 (VideoPlaybackBehaviour_t2848361927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::CheckIconPlaneVisibility()
extern "C"  void VideoPlaybackBehaviour_CheckIconPlaneVisibility_m1369563645 (VideoPlaybackBehaviour_t2848361927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
