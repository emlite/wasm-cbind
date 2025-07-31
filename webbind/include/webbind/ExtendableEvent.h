#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ExtendableEvent, Event);

ExtendableEvent ExtendableEvent_new0(jb_String * type);

ExtendableEvent ExtendableEvent_new1(jb_String * type, jb_Any * eventInitDict);

jb_Undefined ExtendableEvent_waitUntil(ExtendableEvent* self , jb_Promise * f);
