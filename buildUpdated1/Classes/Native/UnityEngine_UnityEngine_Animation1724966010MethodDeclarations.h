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

// UnityEngine.Animation
struct Animation_t1724966010;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.AnimationState
struct AnimationState_t3682323633;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_PlayMode1155122555.h"

// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
extern "C"  bool Animation_Play_m1881292147 (Animation_t1724966010 * __this, String_t* ___animation0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String)
extern "C"  bool Animation_Play_m900498501 (Animation_t1724966010 * __this, String_t* ___animation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C"  Il2CppObject * Animation_GetEnumerator_m3015582503 (Animation_t1724966010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C"  AnimationState_t3682323633 * Animation_GetStateAtIndex_m513456147 (Animation_t1724966010 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C"  int32_t Animation_GetStateCount_m3537607527 (Animation_t1724966010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
