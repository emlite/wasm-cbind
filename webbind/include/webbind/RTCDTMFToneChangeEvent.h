#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(RTCDTMFToneChangeEvent, Event);

RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent_new0(jb_String * type);

RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent_new1(jb_String * type, jb_Any * eventInitDict);

jb_String RTCDTMFToneChangeEvent_tone(const RTCDTMFToneChangeEvent *self);
