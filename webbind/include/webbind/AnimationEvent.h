#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(AnimationEvent, Event);

AnimationEvent AnimationEvent_new0(jb_String * type);

AnimationEvent AnimationEvent_new1(jb_String * type, jb_Any * animationEventInitDict);

jb_String AnimationEvent_animationName(const AnimationEvent *self);

double AnimationEvent_elapsedTime(const AnimationEvent *self);

jb_String AnimationEvent_pseudoElement(const AnimationEvent *self);
