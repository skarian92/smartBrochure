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

// TrackableEventHandler
struct TrackableEventHandler_t2616932597;
// VideoPlaybackBehaviour
struct VideoPlaybackBehaviour_t2848361927;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_835151357.h"
#include "AssemblyU2DCSharp_VideoPlaybackBehaviour2848361927.h"

// System.Void TrackableEventHandler::.ctor()
extern "C"  void TrackableEventHandler__ctor_m3436446742 (TrackableEventHandler_t2616932597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableEventHandler::Start()
extern "C"  void TrackableEventHandler_Start_m2383584534 (TrackableEventHandler_t2616932597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableEventHandler::Update()
extern "C"  void TrackableEventHandler_Update_m882528695 (TrackableEventHandler_t2616932597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C"  void TrackableEventHandler_OnTrackableStateChanged_m3442356551 (TrackableEventHandler_t2616932597 * __this, int32_t ___previousStatus0, int32_t ___newStatus1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableEventHandler::OnTrackingFound()
extern "C"  void TrackableEventHandler_OnTrackingFound_m4092781024 (TrackableEventHandler_t2616932597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableEventHandler::OnTrackingLost()
extern "C"  void TrackableEventHandler_OnTrackingLost_m303744424 (TrackableEventHandler_t2616932597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableEventHandler::PauseOtherVideos(VideoPlaybackBehaviour)
extern "C"  void TrackableEventHandler_PauseOtherVideos_m1551228153 (TrackableEventHandler_t2616932597 * __this, VideoPlaybackBehaviour_t2848361927 * ___currentVideo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
