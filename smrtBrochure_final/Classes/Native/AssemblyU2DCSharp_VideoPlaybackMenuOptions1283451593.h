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

#include "AssemblyU2DCSharp_MenuOptions1909700639.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoPlaybackMenuOptions
struct  VideoPlaybackMenuOptions_t1283451593  : public MenuOptions_t1909700639
{
public:
	// PlayVideo VideoPlaybackMenuOptions::mPlayVideo
	PlayVideo_t117807495 * ___mPlayVideo_5;

public:
	inline static int32_t get_offset_of_mPlayVideo_5() { return static_cast<int32_t>(offsetof(VideoPlaybackMenuOptions_t1283451593, ___mPlayVideo_5)); }
	inline PlayVideo_t117807495 * get_mPlayVideo_5() const { return ___mPlayVideo_5; }
	inline PlayVideo_t117807495 ** get_address_of_mPlayVideo_5() { return &___mPlayVideo_5; }
	inline void set_mPlayVideo_5(PlayVideo_t117807495 * value)
	{
		___mPlayVideo_5 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayVideo_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
