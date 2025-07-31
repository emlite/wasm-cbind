#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;


DECLARE_EMLITE_TYPE(RTCRtpScriptTransformer, EventTarget);

ReadableStream RTCRtpScriptTransformer_readable(const RTCRtpScriptTransformer *self);

jb_Promise RTCRtpScriptTransformer_generateKeyFrame0(RTCRtpScriptTransformer* self );

jb_Promise RTCRtpScriptTransformer_generateKeyFrame1(RTCRtpScriptTransformer* self , jb_String * rid);

jb_Promise RTCRtpScriptTransformer_sendKeyFrameRequest(RTCRtpScriptTransformer* self );

WritableStream RTCRtpScriptTransformer_writable(const RTCRtpScriptTransformer *self);

jb_Any RTCRtpScriptTransformer_onkeyframerequest(const RTCRtpScriptTransformer *self);

void RTCRtpScriptTransformer_set_onkeyframerequest(RTCRtpScriptTransformer* self, jb_Any * value);

jb_Any RTCRtpScriptTransformer_options(const RTCRtpScriptTransformer *self);
