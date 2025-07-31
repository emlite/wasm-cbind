#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PerformanceEntry.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(VisibilityStateEntry, PerformanceEntry);

jb_String VisibilityStateEntry_name(const VisibilityStateEntry *self);

jb_String VisibilityStateEntry_entryType(const VisibilityStateEntry *self);

jb_Any VisibilityStateEntry_startTime(const VisibilityStateEntry *self);

unsigned long VisibilityStateEntry_duration(const VisibilityStateEntry *self);
