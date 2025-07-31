#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(KeyFrameRequestEvent, Event);

KeyFrameRequestEvent KeyFrameRequestEvent_new0(jb_String * type);

KeyFrameRequestEvent KeyFrameRequestEvent_new1(jb_String * type, jb_String * rid);

jb_String KeyFrameRequestEvent_rid(const KeyFrameRequestEvent *self);
