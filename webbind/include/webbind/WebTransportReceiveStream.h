#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ReadableStream.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct WebTransportReceiveStreamStats WebTransportReceiveStreamStats;


DECLARE_EMLITE_TYPE(WebTransportReceiveStreamStats, em_Val);

long long WebTransportReceiveStreamStats_bytesReceived(const WebTransportReceiveStreamStats *self);

void WebTransportReceiveStreamStats_set_bytesReceived(WebTransportReceiveStreamStats* self, long long value);

long long WebTransportReceiveStreamStats_bytesRead(const WebTransportReceiveStreamStats *self);

void WebTransportReceiveStreamStats_set_bytesRead(WebTransportReceiveStreamStats* self, long long value);
DECLARE_EMLITE_TYPE(WebTransportReceiveStream, ReadableStream);

jb_Promise WebTransportReceiveStream_getStats(WebTransportReceiveStream* self );
