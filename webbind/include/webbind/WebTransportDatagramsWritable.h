#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WritableStream.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct WebTransportSendGroup WebTransportSendGroup;


DECLARE_EMLITE_TYPE(WebTransportDatagramsWritable, WritableStream);

WebTransportSendGroup WebTransportDatagramsWritable_sendGroup(const WebTransportDatagramsWritable *self);

void WebTransportDatagramsWritable_set_sendGroup(WebTransportDatagramsWritable* self, WebTransportSendGroup * value);

long long WebTransportDatagramsWritable_sendOrder(const WebTransportDatagramsWritable *self);

void WebTransportDatagramsWritable_set_sendOrder(WebTransportDatagramsWritable* self, long long value);
