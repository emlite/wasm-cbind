#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PerformanceEntry.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Node Node;


DECLARE_EMLITE_TYPE(PerformanceEventTiming, PerformanceEntry);

jb_Any PerformanceEventTiming_processingStart(const PerformanceEventTiming *self);

jb_Any PerformanceEventTiming_processingEnd(const PerformanceEventTiming *self);

bool PerformanceEventTiming_cancelable(const PerformanceEventTiming *self);

Node PerformanceEventTiming_target(const PerformanceEventTiming *self);

long long PerformanceEventTiming_interactionId(const PerformanceEventTiming *self);

jb_Object PerformanceEventTiming_toJSON(PerformanceEventTiming* self );
