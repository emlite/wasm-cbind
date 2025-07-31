#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PerformanceEntry.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct LayoutShiftAttribution LayoutShiftAttribution;


DECLARE_EMLITE_TYPE(LayoutShift, PerformanceEntry);

double LayoutShift_value(const LayoutShift *self);

bool LayoutShift_hadRecentInput(const LayoutShift *self);

jb_Any LayoutShift_lastInputTime(const LayoutShift *self);

jb_Array LayoutShift_sources(const LayoutShift *self);

jb_Object LayoutShift_toJSON(LayoutShift* self );
