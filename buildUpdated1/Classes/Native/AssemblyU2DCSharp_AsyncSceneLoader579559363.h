#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AsyncSceneLoader
struct  AsyncSceneLoader_t579559363  : public MonoBehaviour_t667441552
{
public:
	// System.Single AsyncSceneLoader::loadingDelay
	float ___loadingDelay_2;

public:
	inline static int32_t get_offset_of_loadingDelay_2() { return static_cast<int32_t>(offsetof(AsyncSceneLoader_t579559363, ___loadingDelay_2)); }
	inline float get_loadingDelay_2() const { return ___loadingDelay_2; }
	inline float* get_address_of_loadingDelay_2() { return &___loadingDelay_2; }
	inline void set_loadingDelay_2(float value)
	{
		___loadingDelay_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
