#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayVideo
struct PlayVideo_t117807495;

#include "AssemblyU2DCSharp_TapHandler1427029575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoPlaybackTapHandler
struct  VideoPlaybackTapHandler_t1545375325  : public TapHandler_t1427029575
{
public:
	// PlayVideo VideoPlaybackTapHandler::mPlayVideo
	PlayVideo_t117807495 * ___mPlayVideo_6;

public:
	inline static int32_t get_offset_of_mPlayVideo_6() { return static_cast<int32_t>(offsetof(VideoPlaybackTapHandler_t1545375325, ___mPlayVideo_6)); }
	inline PlayVideo_t117807495 * get_mPlayVideo_6() const { return ___mPlayVideo_6; }
	inline PlayVideo_t117807495 ** get_address_of_mPlayVideo_6() { return &___mPlayVideo_6; }
	inline void set_mPlayVideo_6(PlayVideo_t117807495 * value)
	{
		___mPlayVideo_6 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayVideo_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
