#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PerformanceTiming, em_Val);

long long PerformanceTiming_navigationStart(const PerformanceTiming *self);

long long PerformanceTiming_unloadEventStart(const PerformanceTiming *self);

long long PerformanceTiming_unloadEventEnd(const PerformanceTiming *self);

long long PerformanceTiming_redirectStart(const PerformanceTiming *self);

long long PerformanceTiming_redirectEnd(const PerformanceTiming *self);

long long PerformanceTiming_fetchStart(const PerformanceTiming *self);

long long PerformanceTiming_domainLookupStart(const PerformanceTiming *self);

long long PerformanceTiming_domainLookupEnd(const PerformanceTiming *self);

long long PerformanceTiming_connectStart(const PerformanceTiming *self);

long long PerformanceTiming_connectEnd(const PerformanceTiming *self);

long long PerformanceTiming_secureConnectionStart(const PerformanceTiming *self);

long long PerformanceTiming_requestStart(const PerformanceTiming *self);

long long PerformanceTiming_responseStart(const PerformanceTiming *self);

long long PerformanceTiming_responseEnd(const PerformanceTiming *self);

long long PerformanceTiming_domLoading(const PerformanceTiming *self);

long long PerformanceTiming_domInteractive(const PerformanceTiming *self);

long long PerformanceTiming_domContentLoadedEventStart(const PerformanceTiming *self);

long long PerformanceTiming_domContentLoadedEventEnd(const PerformanceTiming *self);

long long PerformanceTiming_domComplete(const PerformanceTiming *self);

long long PerformanceTiming_loadEventStart(const PerformanceTiming *self);

long long PerformanceTiming_loadEventEnd(const PerformanceTiming *self);

jb_Object PerformanceTiming_toJSON(PerformanceTiming* self );
