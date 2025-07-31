#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(TransitionEvent, Event);

TransitionEvent TransitionEvent_new0(jb_String * type);

TransitionEvent TransitionEvent_new1(jb_String * type, jb_Any * transitionEventInitDict);

jb_String TransitionEvent_propertyName(const TransitionEvent *self);

double TransitionEvent_elapsedTime(const TransitionEvent *self);

jb_String TransitionEvent_pseudoElement(const TransitionEvent *self);
