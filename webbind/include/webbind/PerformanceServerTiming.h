#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PerformanceServerTiming, em_Val);

jb_String PerformanceServerTiming_name(const PerformanceServerTiming *self);

jb_Any PerformanceServerTiming_duration(const PerformanceServerTiming *self);

jb_String PerformanceServerTiming_description(const PerformanceServerTiming *self);

jb_Object PerformanceServerTiming_toJSON(PerformanceServerTiming* self );
