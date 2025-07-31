#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PopStateEvent, Event);

PopStateEvent PopStateEvent_new0(jb_String * type);

PopStateEvent PopStateEvent_new1(jb_String * type, jb_Any * eventInitDict);

jb_Any PopStateEvent_state(const PopStateEvent *self);

bool PopStateEvent_hasUAVisualTransition(const PopStateEvent *self);
