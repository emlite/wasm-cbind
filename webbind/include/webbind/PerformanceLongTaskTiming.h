#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PerformanceEntry.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct TaskAttributionTiming TaskAttributionTiming;


DECLARE_EMLITE_TYPE(PerformanceLongTaskTiming, PerformanceEntry);

jb_Any PerformanceLongTaskTiming_startTime(const PerformanceLongTaskTiming *self);

jb_Any PerformanceLongTaskTiming_duration(const PerformanceLongTaskTiming *self);

jb_String PerformanceLongTaskTiming_name(const PerformanceLongTaskTiming *self);

jb_String PerformanceLongTaskTiming_entryType(const PerformanceLongTaskTiming *self);

jb_Array PerformanceLongTaskTiming_attribution(const PerformanceLongTaskTiming *self);

jb_Object PerformanceLongTaskTiming_toJSON(PerformanceLongTaskTiming* self );
