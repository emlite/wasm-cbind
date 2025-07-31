#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HashChangeEvent, Event);

HashChangeEvent HashChangeEvent_new0(jb_String * type);

HashChangeEvent HashChangeEvent_new1(jb_String * type, jb_Any * eventInitDict);

jb_String HashChangeEvent_oldURL(const HashChangeEvent *self);

jb_String HashChangeEvent_newURL(const HashChangeEvent *self);
