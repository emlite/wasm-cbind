#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ProgressEvent, Event);

ProgressEvent ProgressEvent_new0(jb_String * type);

ProgressEvent ProgressEvent_new1(jb_String * type, jb_Any * eventInitDict);

bool ProgressEvent_lengthComputable(const ProgressEvent *self);

double ProgressEvent_loaded(const ProgressEvent *self);

double ProgressEvent_total(const ProgressEvent *self);
