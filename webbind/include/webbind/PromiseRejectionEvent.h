#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PromiseRejectionEvent, Event);

PromiseRejectionEvent PromiseRejectionEvent_new(jb_String * type, jb_Any * eventInitDict);

jb_Object PromiseRejectionEvent_promise(const PromiseRejectionEvent *self);

jb_Any PromiseRejectionEvent_reason(const PromiseRejectionEvent *self);
