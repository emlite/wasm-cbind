#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Window Window;


DECLARE_EMLITE_TYPE(TimeEvent, Event);

jb_Any TimeEvent_view(const TimeEvent *self);

long TimeEvent_detail(const TimeEvent *self);

jb_Undefined TimeEvent_initTimeEvent(TimeEvent* self , jb_String * typeArg, Window * viewArg, long detailArg);
