#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct WebTransportReceiveStream WebTransportReceiveStream;
typedef struct WebTransportSendStream WebTransportSendStream;


DECLARE_EMLITE_TYPE(WebTransportBidirectionalStream, em_Val);

WebTransportReceiveStream WebTransportBidirectionalStream_readable(const WebTransportBidirectionalStream *self);

WebTransportSendStream WebTransportBidirectionalStream_writable(const WebTransportBidirectionalStream *self);
