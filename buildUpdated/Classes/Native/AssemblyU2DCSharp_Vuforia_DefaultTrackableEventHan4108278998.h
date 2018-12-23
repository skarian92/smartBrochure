#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t4179556250;
// UnityEngine.Animation
struct Animation_t1724966010;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t4108278998  : public MonoBehaviour_t667441552
{
public:
	// Vuforia.TrackableBehaviour Vuforia.DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t4179556250 * ___mTrackableBehaviour_2;
	// UnityEngine.Animation Vuforia.DefaultTrackableEventHandler::anim
	Animation_t1724966010 * ___anim_3;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_2() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t4108278998, ___mTrackableBehaviour_2)); }
	inline TrackableBehaviour_t4179556250 * get_mTrackableBehaviour_2() const { return ___mTrackableBehaviour_2; }
	inline TrackableBehaviour_t4179556250 ** get_address_of_mTrackableBehaviour_2() { return &___mTrackableBehaviour_2; }
	inline void set_mTrackableBehaviour_2(TrackableBehaviour_t4179556250 * value)
	{
		___mTrackableBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableBehaviour_2, value);
	}

	inline static int32_t get_offset_of_anim_3() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t4108278998, ___anim_3)); }
	inline Animation_t1724966010 * get_anim_3() const { return ___anim_3; }
	inline Animation_t1724966010 ** get_address_of_anim_3() { return &___anim_3; }
	inline void set_anim_3(Animation_t1724966010 * value)
	{
		___anim_3 = value;
		Il2CppCodeGenWriteBarrier(&___anim_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
