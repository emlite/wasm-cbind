#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CloseEvent, Event);

CloseEvent CloseEvent_new0(jb_String * type);

CloseEvent CloseEvent_new1(jb_String * type, jb_Any * eventInitDict);

bool CloseEvent_wasClean(const CloseEvent *self);

unsigned short CloseEvent_code(const CloseEvent *self);

jb_String CloseEvent_reason(const CloseEvent *self);
