#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HTMLElement HTMLElement;


DECLARE_EMLITE_TYPE(SubmitEvent, Event);

SubmitEvent SubmitEvent_new0(jb_String * type);

SubmitEvent SubmitEvent_new1(jb_String * type, jb_Any * eventInitDict);

HTMLElement SubmitEvent_submitter(const SubmitEvent *self);
