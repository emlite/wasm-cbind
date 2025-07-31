#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PerformanceEntry.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PerformancePaintTiming, PerformanceEntry);

jb_Object PerformancePaintTiming_toJSON(PerformancePaintTiming* self );

jb_Any PerformancePaintTiming_paintTime(const PerformancePaintTiming *self);

jb_Any PerformancePaintTiming_presentationTime(const PerformancePaintTiming *self);
