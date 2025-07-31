#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WorkletAnimationEffect.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct OptionalEffectTiming OptionalEffectTiming;
typedef struct GroupEffect GroupEffect;
typedef struct AnimationEffect AnimationEffect;


DECLARE_EMLITE_TYPE(OptionalEffectTiming, em_Val);

double OptionalEffectTiming_delay(const OptionalEffectTiming *self);

void OptionalEffectTiming_set_delay(OptionalEffectTiming* self, double value);

double OptionalEffectTiming_endDelay(const OptionalEffectTiming *self);

void OptionalEffectTiming_set_endDelay(OptionalEffectTiming* self, double value);

FillMode OptionalEffectTiming_fill(const OptionalEffectTiming *self);

void OptionalEffectTiming_set_fill(OptionalEffectTiming* self, FillMode * value);

double OptionalEffectTiming_iterationStart(const OptionalEffectTiming *self);

void OptionalEffectTiming_set_iterationStart(OptionalEffectTiming* self, double value);

double OptionalEffectTiming_iterations(const OptionalEffectTiming *self);

void OptionalEffectTiming_set_iterations(OptionalEffectTiming* self, double value);

jb_Any OptionalEffectTiming_duration(const OptionalEffectTiming *self);

void OptionalEffectTiming_set_duration(OptionalEffectTiming* self, jb_Any * value);

PlaybackDirection OptionalEffectTiming_direction(const OptionalEffectTiming *self);

void OptionalEffectTiming_set_direction(OptionalEffectTiming* self, PlaybackDirection * value);

jb_String OptionalEffectTiming_easing(const OptionalEffectTiming *self);

void OptionalEffectTiming_set_easing(OptionalEffectTiming* self, jb_String * value);
DECLARE_EMLITE_TYPE(AnimationEffect, em_Val);

EffectTiming AnimationEffect_getTiming(AnimationEffect* self );

ComputedEffectTiming AnimationEffect_getComputedTiming(AnimationEffect* self );

jb_Undefined AnimationEffect_updateTiming0(AnimationEffect* self );

jb_Undefined AnimationEffect_updateTiming1(AnimationEffect* self , OptionalEffectTiming * timing);

GroupEffect AnimationEffect_parent(const AnimationEffect *self);

AnimationEffect AnimationEffect_previousSibling(const AnimationEffect *self);

AnimationEffect AnimationEffect_nextSibling(const AnimationEffect *self);

jb_Undefined AnimationEffect_before(AnimationEffect* self , AnimationEffect * effects);

jb_Undefined AnimationEffect_after(AnimationEffect* self , AnimationEffect * effects);

jb_Undefined AnimationEffect_replace(AnimationEffect* self , AnimationEffect * effects);

jb_Undefined AnimationEffect_remove(AnimationEffect* self );
