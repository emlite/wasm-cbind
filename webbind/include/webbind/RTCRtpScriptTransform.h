#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Worker Worker;


DECLARE_EMLITE_TYPE(RTCRtpScriptTransform, em_Val);

RTCRtpScriptTransform RTCRtpScriptTransform_new0(Worker * worker);

RTCRtpScriptTransform RTCRtpScriptTransform_new1(Worker * worker, jb_Any * options);

RTCRtpScriptTransform RTCRtpScriptTransform_new2(Worker * worker, jb_Any * options, jb_Array * transfer);
