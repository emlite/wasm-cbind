#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct RTCRtpScriptTransformer RTCRtpScriptTransformer;


DECLARE_EMLITE_TYPE(RTCTransformEvent, Event);

RTCRtpScriptTransformer RTCTransformEvent_transformer(const RTCTransformEvent *self);
