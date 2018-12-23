#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// VideoPlaybackBehaviour
struct VideoPlaybackBehaviour_t2848361927;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayVideo
struct  PlayVideo_t117807495  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean PlayVideo::playFullscreen
	bool ___playFullscreen_2;
	// VideoPlaybackBehaviour PlayVideo::currentVideo
	VideoPlaybackBehaviour_t2848361927 * ___currentVideo_3;

public:
	inline static int32_t get_offset_of_playFullscreen_2() { return static_cast<int32_t>(offsetof(PlayVideo_t117807495, ___playFullscreen_2)); }
	inline bool get_playFullscreen_2() const { return ___playFullscreen_2; }
	inline bool* get_address_of_playFullscreen_2() { return &___playFullscreen_2; }
	inline void set_playFullscreen_2(bool value)
	{
		___playFullscreen_2 = value;
	}

	inline static int32_t get_offset_of_currentVideo_3() { return static_cast<int32_t>(offsetof(PlayVideo_t117807495, ___currentVideo_3)); }
	inline VideoPlaybackBehaviour_t2848361927 * get_currentVideo_3() const { return ___currentVideo_3; }
	inline VideoPlaybackBehaviour_t2848361927 ** get_address_of_currentVideo_3() { return &___currentVideo_3; }
	inline void set_currentVideo_3(VideoPlaybackBehaviour_t2848361927 * value)
	{
		___currentVideo_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentVideo_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
