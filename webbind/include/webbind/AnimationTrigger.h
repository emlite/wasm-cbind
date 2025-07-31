#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AnimationTimeline AnimationTimeline;


DECLARE_EMLITE_TYPE(AnimationTrigger, em_Val);

AnimationTrigger AnimationTrigger_new0();

AnimationTrigger AnimationTrigger_new1(jb_Any * options);

AnimationTimeline AnimationTrigger_timeline(const AnimationTrigger *self);

void AnimationTrigger_set_timeline(AnimationTrigger* self, AnimationTimeline * value);

AnimationTriggerBehavior AnimationTrigger_behavior(const AnimationTrigger *self);

void AnimationTrigger_set_behavior(AnimationTrigger* self, AnimationTriggerBehavior * value);

jb_Any AnimationTrigger_rangeStart(const AnimationTrigger *self);

void AnimationTrigger_set_rangeStart(AnimationTrigger* self, jb_Any * value);

jb_Any AnimationTrigger_rangeEnd(const AnimationTrigger *self);

void AnimationTrigger_set_rangeEnd(AnimationTrigger* self, jb_Any * value);

jb_Any AnimationTrigger_exitRangeStart(const AnimationTrigger *self);

void AnimationTrigger_set_exitRangeStart(AnimationTrigger* self, jb_Any * value);

jb_Any AnimationTrigger_exitRangeEnd(const AnimationTrigger *self);

void AnimationTrigger_set_exitRangeEnd(AnimationTrigger* self, jb_Any * value);
