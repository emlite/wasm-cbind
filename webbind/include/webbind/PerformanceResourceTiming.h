#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PerformanceEntry.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PerformanceServerTiming PerformanceServerTiming;


DECLARE_EMLITE_TYPE(PerformanceResourceTiming, PerformanceEntry);

jb_String PerformanceResourceTiming_initiatorType(const PerformanceResourceTiming *self);

jb_String PerformanceResourceTiming_deliveryType(const PerformanceResourceTiming *self);

jb_String PerformanceResourceTiming_nextHopProtocol(const PerformanceResourceTiming *self);

jb_Any PerformanceResourceTiming_workerStart(const PerformanceResourceTiming *self);

jb_Any PerformanceResourceTiming_redirectStart(const PerformanceResourceTiming *self);

jb_Any PerformanceResourceTiming_redirectEnd(const PerformanceResourceTiming *self);

jb_Any PerformanceResourceTiming_fetchStart(const PerformanceResourceTiming *self);

jb_Any PerformanceResourceTiming_domainLookupStart(const PerformanceResourceTiming *self);

jb_Any PerformanceResourceTiming_domainLookupEnd(const PerformanceResourceTiming *self);

jb_Any PerformanceResourceTiming_connectStart(const PerformanceResourceTiming *self);

jb_Any PerformanceResourceTiming_connectEnd(const PerformanceResourceTiming *self);

jb_Any PerformanceResourceTiming_secureConnectionStart(const PerformanceResourceTiming *self);

jb_Any PerformanceResourceTiming_requestStart(const PerformanceResourceTiming *self);

jb_Any PerformanceResourceTiming_finalResponseHeadersStart(const PerformanceResourceTiming *self);

jb_Any PerformanceResourceTiming_firstInterimResponseStart(const PerformanceResourceTiming *self);

jb_Any PerformanceResourceTiming_responseStart(const PerformanceResourceTiming *self);

jb_Any PerformanceResourceTiming_responseEnd(const PerformanceResourceTiming *self);

long long PerformanceResourceTiming_transferSize(const PerformanceResourceTiming *self);

long long PerformanceResourceTiming_encodedBodySize(const PerformanceResourceTiming *self);

long long PerformanceResourceTiming_decodedBodySize(const PerformanceResourceTiming *self);

unsigned short PerformanceResourceTiming_responseStatus(const PerformanceResourceTiming *self);

RenderBlockingStatusType PerformanceResourceTiming_renderBlockingStatus(const PerformanceResourceTiming *self);

jb_String PerformanceResourceTiming_contentType(const PerformanceResourceTiming *self);

jb_String PerformanceResourceTiming_contentEncoding(const PerformanceResourceTiming *self);

jb_Object PerformanceResourceTiming_toJSON(PerformanceResourceTiming* self );

jb_Array PerformanceResourceTiming_serverTiming(const PerformanceResourceTiming *self);
