#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(TimeRanges, em_Val);

unsigned long TimeRanges_length(const TimeRanges *self);

double TimeRanges_start(TimeRanges* self , unsigned long index);

double TimeRanges_end(TimeRanges* self , unsigned long index);
