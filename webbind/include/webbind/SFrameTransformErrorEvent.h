#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(SFrameTransformErrorEvent, Event);

SFrameTransformErrorEvent SFrameTransformErrorEvent_new(jb_String * type, jb_Any * eventInitDict);

SFrameTransformErrorEventType SFrameTransformErrorEvent_errorType(const SFrameTransformErrorEvent *self);

jb_Any SFrameTransformErrorEvent_keyID(const SFrameTransformErrorEvent *self);

jb_Any SFrameTransformErrorEvent_frame(const SFrameTransformErrorEvent *self);
