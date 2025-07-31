#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PerformanceResourceTiming.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct NotRestoredReasons NotRestoredReasons;


DECLARE_EMLITE_TYPE(PerformanceNavigationTiming, PerformanceResourceTiming);

jb_Any PerformanceNavigationTiming_unloadEventStart(const PerformanceNavigationTiming *self);

jb_Any PerformanceNavigationTiming_unloadEventEnd(const PerformanceNavigationTiming *self);

jb_Any PerformanceNavigationTiming_domInteractive(const PerformanceNavigationTiming *self);

jb_Any PerformanceNavigationTiming_domContentLoadedEventStart(const PerformanceNavigationTiming *self);

jb_Any PerformanceNavigationTiming_domContentLoadedEventEnd(const PerformanceNavigationTiming *self);

jb_Any PerformanceNavigationTiming_domComplete(const PerformanceNavigationTiming *self);

jb_Any PerformanceNavigationTiming_loadEventStart(const PerformanceNavigationTiming *self);

jb_Any PerformanceNavigationTiming_loadEventEnd(const PerformanceNavigationTiming *self);

NavigationTimingType PerformanceNavigationTiming_type(const PerformanceNavigationTiming *self);

unsigned short PerformanceNavigationTiming_redirectCount(const PerformanceNavigationTiming *self);

jb_Any PerformanceNavigationTiming_criticalCHRestart(const PerformanceNavigationTiming *self);

NotRestoredReasons PerformanceNavigationTiming_notRestoredReasons(const PerformanceNavigationTiming *self);

jb_Object PerformanceNavigationTiming_toJSON(PerformanceNavigationTiming* self );

jb_Any PerformanceNavigationTiming_activationStart(const PerformanceNavigationTiming *self);
