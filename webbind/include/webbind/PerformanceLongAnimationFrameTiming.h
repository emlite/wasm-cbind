#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PerformanceEntry.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PerformanceScriptTiming PerformanceScriptTiming;


DECLARE_EMLITE_TYPE(PerformanceLongAnimationFrameTiming, PerformanceEntry);

jb_Any PerformanceLongAnimationFrameTiming_startTime(const PerformanceLongAnimationFrameTiming *self);

jb_Any PerformanceLongAnimationFrameTiming_duration(const PerformanceLongAnimationFrameTiming *self);

jb_String PerformanceLongAnimationFrameTiming_name(const PerformanceLongAnimationFrameTiming *self);

jb_String PerformanceLongAnimationFrameTiming_entryType(const PerformanceLongAnimationFrameTiming *self);

jb_Any PerformanceLongAnimationFrameTiming_renderStart(const PerformanceLongAnimationFrameTiming *self);

jb_Any PerformanceLongAnimationFrameTiming_styleAndLayoutStart(const PerformanceLongAnimationFrameTiming *self);

jb_Any PerformanceLongAnimationFrameTiming_blockingDuration(const PerformanceLongAnimationFrameTiming *self);

jb_Any PerformanceLongAnimationFrameTiming_firstUIEventTimestamp(const PerformanceLongAnimationFrameTiming *self);

jb_Array PerformanceLongAnimationFrameTiming_scripts(const PerformanceLongAnimationFrameTiming *self);

jb_Object PerformanceLongAnimationFrameTiming_toJSON(PerformanceLongAnimationFrameTiming* self );

jb_Any PerformanceLongAnimationFrameTiming_paintTime(const PerformanceLongAnimationFrameTiming *self);

jb_Any PerformanceLongAnimationFrameTiming_presentationTime(const PerformanceLongAnimationFrameTiming *self);
