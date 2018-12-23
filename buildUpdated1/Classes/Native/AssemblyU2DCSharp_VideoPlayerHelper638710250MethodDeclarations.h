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

// VideoPlayerHelper
struct VideoPlayerHelper_t638710250;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_VideoPlayerHelper_MediaType3131497273.h"
#include "AssemblyU2DCSharp_VideoPlayerHelper_MediaState2586048626.h"

// System.Void VideoPlayerHelper::.ctor()
extern "C"  void VideoPlayerHelper__ctor_m595739329 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr VideoPlayerHelper::GetNativeRenderEventFunc()
extern "C"  IntPtr_t VideoPlayerHelper_GetNativeRenderEventFunc_m3822599689 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlayerHelper::SetFilename(System.String)
extern "C"  void VideoPlayerHelper_SetFilename_m3301266522 (VideoPlayerHelper_t638710250 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Init(System.Boolean)
extern "C"  bool VideoPlayerHelper_Init_m2904346230 (VideoPlayerHelper_t638710250 * __this, bool ___isMetalRendering0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Deinit()
extern "C"  bool VideoPlayerHelper_Deinit_m3868755840 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Load(System.String,VideoPlayerHelper/MediaType,System.Boolean,System.Single)
extern "C"  bool VideoPlayerHelper_Load_m464481282 (VideoPlayerHelper_t638710250 * __this, String_t* ___filename0, int32_t ___requestedType1, bool ___playOnTextureImmediately2, float ___seekPosition3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Unload()
extern "C"  bool VideoPlayerHelper_Unload_m2915916270 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::IsPlayableOnTexture()
extern "C"  bool VideoPlayerHelper_IsPlayableOnTexture_m3150164055 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::IsPlayableFullscreen()
extern "C"  bool VideoPlayerHelper_IsPlayableFullscreen_m3992030498 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::SetVideoTexturePtr(System.IntPtr)
extern "C"  bool VideoPlayerHelper_SetVideoTexturePtr_m34803609 (VideoPlayerHelper_t638710250 * __this, IntPtr_t ___texturePtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlayerHelper/MediaState VideoPlayerHelper::GetStatus()
extern "C"  int32_t VideoPlayerHelper_GetStatus_m3055078034 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::GetVideoWidth()
extern "C"  int32_t VideoPlayerHelper_GetVideoWidth_m1125646894 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::GetVideoHeight()
extern "C"  int32_t VideoPlayerHelper_GetVideoHeight_m1039129697 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VideoPlayerHelper::GetLength()
extern "C"  float VideoPlayerHelper_GetLength_m900730759 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Play(System.Boolean,System.Single)
extern "C"  bool VideoPlayerHelper_Play_m1534239231 (VideoPlayerHelper_t638710250 * __this, bool ___fullScreen0, float ___seekPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Pause()
extern "C"  bool VideoPlayerHelper_Pause_m834690569 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Stop()
extern "C"  bool VideoPlayerHelper_Stop_m3455312305 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlayerHelper/MediaState VideoPlayerHelper::UpdateVideoData()
extern "C"  int32_t VideoPlayerHelper_UpdateVideoData_m2866314214 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::SeekTo(System.Single)
extern "C"  bool VideoPlayerHelper_SeekTo_m1792103401 (VideoPlayerHelper_t638710250 * __this, float ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VideoPlayerHelper::GetCurrentPosition()
extern "C"  float VideoPlayerHelper_GetCurrentPosition_m3246858531 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::SetVolume(System.Single)
extern "C"  bool VideoPlayerHelper_SetVolume_m2202946140 (VideoPlayerHelper_t638710250 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::GetCurrentBufferingPercentage()
extern "C"  int32_t VideoPlayerHelper_GetCurrentBufferingPercentage_m1549647814 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlayerHelper::OnPause()
extern "C"  void VideoPlayerHelper_OnPause_m1468328438 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr VideoPlayerHelper::videoPlayerInitIOS(System.Boolean)
extern "C"  IntPtr_t VideoPlayerHelper_videoPlayerInitIOS_m2392182438 (Il2CppObject * __this /* static, unused */, bool ___isMetalRendering0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerDeinitIOS(System.IntPtr)
extern "C"  bool VideoPlayerHelper_videoPlayerDeinitIOS_m3940737349 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerLoadIOS(System.IntPtr,System.String,System.Int32,System.Boolean,System.Single)
extern "C"  bool VideoPlayerHelper_videoPlayerLoadIOS_m2852203201 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, String_t* ___filename1, int32_t ___requestType2, bool ___playOnTextureImmediately3, float ___seekPosition4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerUnloadIOS(System.IntPtr)
extern "C"  bool VideoPlayerHelper_videoPlayerUnloadIOS_m3408992179 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerIsPlayableOnTextureIOS(System.IntPtr)
extern "C"  bool VideoPlayerHelper_videoPlayerIsPlayableOnTextureIOS_m2820008284 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerIsPlayableFullscreenIOS(System.IntPtr)
extern "C"  bool VideoPlayerHelper_videoPlayerIsPlayableFullscreenIOS_m3469736679 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerSetVideoTexturePtrIOS(System.IntPtr,System.IntPtr)
extern "C"  bool VideoPlayerHelper_videoPlayerSetVideoTexturePtrIOS_m2857787886 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, IntPtr_t ___texturePtr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetStatusIOS(System.IntPtr)
extern "C"  int32_t VideoPlayerHelper_videoPlayerGetStatusIOS_m3649447014 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetVideoWidthIOS(System.IntPtr)
extern "C"  int32_t VideoPlayerHelper_videoPlayerGetVideoWidthIOS_m2813699903 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetVideoHeightIOS(System.IntPtr)
extern "C"  int32_t VideoPlayerHelper_videoPlayerGetVideoHeightIOS_m3526964122 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VideoPlayerHelper::videoPlayerGetLengthIOS(System.IntPtr)
extern "C"  float VideoPlayerHelper_videoPlayerGetLengthIOS_m1086171484 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerPlayIOS(System.IntPtr,System.Boolean,System.Single)
extern "C"  bool VideoPlayerHelper_videoPlayerPlayIOS_m1258284154 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, bool ___fullScreen1, float ___seekPosition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerPauseIOS(System.IntPtr)
extern "C"  bool VideoPlayerHelper_videoPlayerPauseIOS_m1531415310 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerStopIOS(System.IntPtr)
extern "C"  bool VideoPlayerHelper_videoPlayerStopIOS_m1912082806 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerUpdateVideoDataIOS(System.IntPtr)
extern "C"  int32_t VideoPlayerHelper_videoPlayerUpdateVideoDataIOS_m3752337018 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerSeekToIOS(System.IntPtr,System.Single)
extern "C"  bool VideoPlayerHelper_videoPlayerSeekToIOS_m2061605228 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, float ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VideoPlayerHelper::videoPlayerGetCurrentPositionIOS(System.IntPtr)
extern "C"  float VideoPlayerHelper_videoPlayerGetCurrentPositionIOS_m849753624 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerSetVolumeIOS(System.IntPtr,System.Single)
extern "C"  bool VideoPlayerHelper_videoPlayerSetVolumeIOS_m3120266393 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetCurrentBufferingPercentageIOS(System.IntPtr)
extern "C"  int32_t VideoPlayerHelper_videoPlayerGetCurrentBufferingPercentageIOS_m3217186007 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlayerHelper::videoPlayerOnPauseIOS(System.IntPtr)
extern "C"  void VideoPlayerHelper_videoPlayerOnPauseIOS_m1096355555 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerInit(System.Boolean)
extern "C"  bool VideoPlayerHelper_videoPlayerInit_m622577110 (VideoPlayerHelper_t638710250 * __this, bool ___isMetalRendering0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerDeinit()
extern "C"  bool VideoPlayerHelper_videoPlayerDeinit_m650612448 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerLoad(System.String,System.Int32,System.Boolean,System.Single)
extern "C"  bool VideoPlayerHelper_videoPlayerLoad_m318062104 (VideoPlayerHelper_t638710250 * __this, String_t* ___filename0, int32_t ___requestType1, bool ___playOnTextureImmediately2, float ___seekPosition3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerUnload()
extern "C"  bool VideoPlayerHelper_videoPlayerUnload_m3992740174 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerIsPlayableOnTexture()
extern "C"  bool VideoPlayerHelper_videoPlayerIsPlayableOnTexture_m1134798071 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerIsPlayableFullscreen()
extern "C"  bool VideoPlayerHelper_videoPlayerIsPlayableFullscreen_m1645227138 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerSetVideoTexturePtr(System.IntPtr)
extern "C"  bool VideoPlayerHelper_videoPlayerSetVideoTexturePtr_m2810778681 (VideoPlayerHelper_t638710250 * __this, IntPtr_t ___texturePtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetStatus()
extern "C"  int32_t VideoPlayerHelper_videoPlayerGetStatus_m1634677761 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetVideoWidth()
extern "C"  int32_t VideoPlayerHelper_videoPlayerGetVideoWidth_m113871066 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetVideoHeight()
extern "C"  int32_t VideoPlayerHelper_videoPlayerGetVideoHeight_m4033817397 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VideoPlayerHelper::videoPlayerGetLength()
extern "C"  float VideoPlayerHelper_videoPlayerGetLength_m2748015863 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerPlay(System.Boolean,System.Single)
extern "C"  bool VideoPlayerHelper_videoPlayerPlay_m1690120543 (VideoPlayerHelper_t638710250 * __this, bool ___fullScreen0, float ___seekPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerPause()
extern "C"  bool VideoPlayerHelper_videoPlayerPause_m1977805481 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerStop()
extern "C"  bool VideoPlayerHelper_videoPlayerStop_m721240337 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerUpdateVideoData()
extern "C"  int32_t VideoPlayerHelper_videoPlayerUpdateVideoData_m1540347413 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerSeekTo(System.Single)
extern "C"  bool VideoPlayerHelper_videoPlayerSeekTo_m4071704713 (VideoPlayerHelper_t638710250 * __this, float ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VideoPlayerHelper::videoPlayerGetCurrentPosition()
extern "C"  float VideoPlayerHelper_videoPlayerGetCurrentPosition_m1149036979 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerSetVolume(System.Single)
extern "C"  bool VideoPlayerHelper_videoPlayerSetVolume_m1782747580 (VideoPlayerHelper_t638710250 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetCurrentBufferingPercentage()
extern "C"  int32_t VideoPlayerHelper_videoPlayerGetCurrentBufferingPercentage_m3127144050 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlayerHelper::videoPlayerOnPause()
extern "C"  void VideoPlayerHelper_videoPlayerOnPause_m3252205694 (VideoPlayerHelper_t638710250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
