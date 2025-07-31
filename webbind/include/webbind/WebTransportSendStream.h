#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WritableStream.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct WebTransportSendGroup WebTransportSendGroup;
typedef struct WebTransportSendStreamStats WebTransportSendStreamStats;
typedef struct WebTransportWriter WebTransportWriter;


DECLARE_EMLITE_TYPE(WebTransportSendStreamStats, em_Val);

long long WebTransportSendStreamStats_bytesWritten(const WebTransportSendStreamStats *self);

void WebTransportSendStreamStats_set_bytesWritten(WebTransportSendStreamStats* self, long long value);

long long WebTransportSendStreamStats_bytesSent(const WebTransportSendStreamStats *self);

void WebTransportSendStreamStats_set_bytesSent(WebTransportSendStreamStats* self, long long value);

long long WebTransportSendStreamStats_bytesAcknowledged(const WebTransportSendStreamStats *self);

void WebTransportSendStreamStats_set_bytesAcknowledged(WebTransportSendStreamStats* self, long long value);
DECLARE_EMLITE_TYPE(WebTransportSendStream, WritableStream);

WebTransportSendGroup WebTransportSendStream_sendGroup(const WebTransportSendStream *self);

void WebTransportSendStream_set_sendGroup(WebTransportSendStream* self, WebTransportSendGroup * value);

long long WebTransportSendStream_sendOrder(const WebTransportSendStream *self);

void WebTransportSendStream_set_sendOrder(WebTransportSendStream* self, long long value);

jb_Promise WebTransportSendStream_getStats(WebTransportSendStream* self );

WebTransportWriter WebTransportSendStream_getWriter(WebTransportSendStream* self );
