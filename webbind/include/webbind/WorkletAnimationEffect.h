#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct EffectTiming EffectTiming;
typedef struct ComputedEffectTiming ComputedEffectTiming;


DECLARE_EMLITE_TYPE(EffectTiming, em_Val);

FillMode EffectTiming_fill(const EffectTiming *self);

void EffectTiming_set_fill(EffectTiming* self, FillMode * value);

double EffectTiming_iterationStart(const EffectTiming *self);

void EffectTiming_set_iterationStart(EffectTiming* self, double value);

double EffectTiming_iterations(const EffectTiming *self);

void EffectTiming_set_iterations(EffectTiming* self, double value);

PlaybackDirection EffectTiming_direction(const EffectTiming *self);

void EffectTiming_set_direction(EffectTiming* self, PlaybackDirection * value);

jb_String EffectTiming_easing(const EffectTiming *self);

void EffectTiming_set_easing(EffectTiming* self, jb_String * value);
DECLARE_EMLITE_TYPE(ComputedEffectTiming, em_Val);

double ComputedEffectTiming_progress(const ComputedEffectTiming *self);

void ComputedEffectTiming_set_progress(ComputedEffectTiming* self, double value);

double ComputedEffectTiming_currentIteration(const ComputedEffectTiming *self);

void ComputedEffectTiming_set_currentIteration(ComputedEffectTiming* self, double value);
DECLARE_EMLITE_TYPE(WorkletAnimationEffect, em_Val);

EffectTiming WorkletAnimationEffect_getTiming(WorkletAnimationEffect* self );

ComputedEffectTiming WorkletAnimationEffect_getComputedTiming(WorkletAnimationEffect* self );

double WorkletAnimationEffect_localTime(const WorkletAnimationEffect *self);

void WorkletAnimationEffect_set_localTime(WorkletAnimationEffect* self, double value);
