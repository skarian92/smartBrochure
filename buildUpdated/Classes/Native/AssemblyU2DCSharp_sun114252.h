#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// sun
struct  sun_t114252  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean sun::houseFound
	bool ___houseFound_2;
	// UnityEngine.GameObject sun::sunObj
	GameObject_t3674682005 * ___sunObj_3;

public:
	inline static int32_t get_offset_of_houseFound_2() { return static_cast<int32_t>(offsetof(sun_t114252, ___houseFound_2)); }
	inline bool get_houseFound_2() const { return ___houseFound_2; }
	inline bool* get_address_of_houseFound_2() { return &___houseFound_2; }
	inline void set_houseFound_2(bool value)
	{
		___houseFound_2 = value;
	}

	inline static int32_t get_offset_of_sunObj_3() { return static_cast<int32_t>(offsetof(sun_t114252, ___sunObj_3)); }
	inline GameObject_t3674682005 * get_sunObj_3() const { return ___sunObj_3; }
	inline GameObject_t3674682005 ** get_address_of_sunObj_3() { return &___sunObj_3; }
	inline void set_sunObj_3(GameObject_t3674682005 * value)
	{
		___sunObj_3 = value;
		Il2CppCodeGenWriteBarrier(&___sunObj_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
