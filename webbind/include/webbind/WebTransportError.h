#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "DOMException.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(WebTransportError, DOMException);

WebTransportError WebTransportError_new0();

WebTransportError WebTransportError_new1(jb_String * message);

WebTransportError WebTransportError_new2(jb_String * message, jb_Any * options);

WebTransportErrorSource WebTransportError_source(const WebTransportError *self);

unsigned long WebTransportError_streamErrorCode(const WebTransportError *self);
