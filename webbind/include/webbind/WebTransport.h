#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct WebTransportConnectionStats WebTransportConnectionStats;
typedef struct WebTransportCloseInfo WebTransportCloseInfo;
typedef struct WebTransportDatagramDuplexStream WebTransportDatagramDuplexStream;
typedef struct WebTransportBidirectionalStream WebTransportBidirectionalStream;
typedef struct WebTransportSendStreamOptions WebTransportSendStreamOptions;
typedef struct ReadableStream ReadableStream;
typedef struct WebTransportSendStream WebTransportSendStream;
typedef struct WebTransportSendGroup WebTransportSendGroup;


DECLARE_EMLITE_TYPE(WebTransportConnectionStats, em_Val);

long long WebTransportConnectionStats_bytesSent(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_bytesSent(WebTransportConnectionStats* self, long long value);

long long WebTransportConnectionStats_packetsSent(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_packetsSent(WebTransportConnectionStats* self, long long value);

long long WebTransportConnectionStats_bytesLost(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_bytesLost(WebTransportConnectionStats* self, long long value);

long long WebTransportConnectionStats_packetsLost(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_packetsLost(WebTransportConnectionStats* self, long long value);

long long WebTransportConnectionStats_bytesReceived(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_bytesReceived(WebTransportConnectionStats* self, long long value);

long long WebTransportConnectionStats_packetsReceived(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_packetsReceived(WebTransportConnectionStats* self, long long value);

jb_Any WebTransportConnectionStats_smoothedRtt(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_smoothedRtt(WebTransportConnectionStats* self, jb_Any * value);

jb_Any WebTransportConnectionStats_rttVariation(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_rttVariation(WebTransportConnectionStats* self, jb_Any * value);

jb_Any WebTransportConnectionStats_minRtt(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_minRtt(WebTransportConnectionStats* self, jb_Any * value);

jb_Any WebTransportConnectionStats_datagrams(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_datagrams(WebTransportConnectionStats* self, jb_Any * value);

long long WebTransportConnectionStats_estimatedSendRate(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_estimatedSendRate(WebTransportConnectionStats* self, long long value);

bool WebTransportConnectionStats_atSendCapacity(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_atSendCapacity(WebTransportConnectionStats* self, bool value);
DECLARE_EMLITE_TYPE(WebTransportCloseInfo, em_Val);

unsigned long WebTransportCloseInfo_closeCode(const WebTransportCloseInfo *self);

void WebTransportCloseInfo_set_closeCode(WebTransportCloseInfo* self, unsigned long value);

jb_String WebTransportCloseInfo_reason(const WebTransportCloseInfo *self);

void WebTransportCloseInfo_set_reason(WebTransportCloseInfo* self, jb_String * value);
DECLARE_EMLITE_TYPE(WebTransportSendStreamOptions, em_Val);

bool WebTransportSendStreamOptions_waitUntilAvailable(const WebTransportSendStreamOptions *self);

void WebTransportSendStreamOptions_set_waitUntilAvailable(WebTransportSendStreamOptions* self, bool value);
DECLARE_EMLITE_TYPE(WebTransport, em_Val);

WebTransport WebTransport_new0(jb_String * url);

WebTransport WebTransport_new1(jb_String * url, jb_Any * options);

jb_Promise WebTransport_getStats(WebTransport* self );

jb_Promise WebTransport_exportKeyingMaterial0(WebTransport* self , jb_Any * label);

jb_Promise WebTransport_exportKeyingMaterial1(WebTransport* self , jb_Any * label, jb_Any * context);

jb_Promise WebTransport_ready(const WebTransport *self);

WebTransportReliabilityMode WebTransport_reliability(const WebTransport *self);

WebTransportCongestionControl WebTransport_congestionControl(const WebTransport *self);

unsigned short WebTransport_anticipatedConcurrentIncomingUnidirectionalStreams(const WebTransport *self);

void WebTransport_set_anticipatedConcurrentIncomingUnidirectionalStreams(WebTransport* self, unsigned short value);

unsigned short WebTransport_anticipatedConcurrentIncomingBidirectionalStreams(const WebTransport *self);

void WebTransport_set_anticipatedConcurrentIncomingBidirectionalStreams(WebTransport* self, unsigned short value);

jb_String WebTransport_protocol(const WebTransport *self);

jb_Promise WebTransport_closed(const WebTransport *self);

jb_Promise WebTransport_draining(const WebTransport *self);

jb_Undefined WebTransport_close0(WebTransport* self );

jb_Undefined WebTransport_close1(WebTransport* self , WebTransportCloseInfo * closeInfo);

WebTransportDatagramDuplexStream WebTransport_datagrams(const WebTransport *self);

jb_Promise WebTransport_createBidirectionalStream0(WebTransport* self );

jb_Promise WebTransport_createBidirectionalStream1(WebTransport* self , WebTransportSendStreamOptions * options);

ReadableStream WebTransport_incomingBidirectionalStreams(const WebTransport *self);

jb_Promise WebTransport_createUnidirectionalStream0(WebTransport* self );

jb_Promise WebTransport_createUnidirectionalStream1(WebTransport* self , WebTransportSendStreamOptions * options);

ReadableStream WebTransport_incomingUnidirectionalStreams(const WebTransport *self);

WebTransportSendGroup WebTransport_createSendGroup(WebTransport* self );

bool WebTransport_supportsReliableOnly(const WebTransport *self);
