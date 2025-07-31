#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PresentationConnectionCloseEvent, Event);

PresentationConnectionCloseEvent PresentationConnectionCloseEvent_new(jb_String * type, jb_Any * eventInitDict);

PresentationConnectionCloseReason PresentationConnectionCloseEvent_reason(const PresentationConnectionCloseEvent *self);

jb_String PresentationConnectionCloseEvent_message(const PresentationConnectionCloseEvent *self);
