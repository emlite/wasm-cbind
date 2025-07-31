#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PerformanceEntry.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(TaskAttributionTiming, PerformanceEntry);

jb_Any TaskAttributionTiming_startTime(const TaskAttributionTiming *self);

jb_Any TaskAttributionTiming_duration(const TaskAttributionTiming *self);

jb_String TaskAttributionTiming_name(const TaskAttributionTiming *self);

jb_String TaskAttributionTiming_entryType(const TaskAttributionTiming *self);

jb_String TaskAttributionTiming_containerType(const TaskAttributionTiming *self);

jb_String TaskAttributionTiming_containerSrc(const TaskAttributionTiming *self);

jb_String TaskAttributionTiming_containerId(const TaskAttributionTiming *self);

jb_String TaskAttributionTiming_containerName(const TaskAttributionTiming *self);

jb_Object TaskAttributionTiming_toJSON(TaskAttributionTiming* self );
