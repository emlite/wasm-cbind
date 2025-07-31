#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRFrame XRFrame;
typedef struct XRInputSource XRInputSource;


DECLARE_EMLITE_TYPE(XRInputSourceEvent, Event);

XRInputSourceEvent XRInputSourceEvent_new(jb_String * type, jb_Any * eventInitDict);

XRFrame XRInputSourceEvent_frame(const XRInputSourceEvent *self);

XRInputSource XRInputSourceEvent_inputSource(const XRInputSourceEvent *self);
