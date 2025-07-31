#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ValueEvent, Event);

ValueEvent ValueEvent_new0(jb_String * type);

ValueEvent ValueEvent_new1(jb_String * type, jb_Any * initDict);

jb_Any ValueEvent_value(const ValueEvent *self);
