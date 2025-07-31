#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ErrorEvent, Event);

ErrorEvent ErrorEvent_new0(jb_String * type);

ErrorEvent ErrorEvent_new1(jb_String * type, jb_Any * eventInitDict);

jb_String ErrorEvent_message(const ErrorEvent *self);

jb_String ErrorEvent_filename(const ErrorEvent *self);

unsigned long ErrorEvent_lineno(const ErrorEvent *self);

unsigned long ErrorEvent_colno(const ErrorEvent *self);

jb_Any ErrorEvent_error(const ErrorEvent *self);
