#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PerformanceEntry.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Element Element;


DECLARE_EMLITE_TYPE(LargestContentfulPaint, PerformanceEntry);

jb_Any LargestContentfulPaint_loadTime(const LargestContentfulPaint *self);

unsigned long LargestContentfulPaint_size(const LargestContentfulPaint *self);

jb_String LargestContentfulPaint_id(const LargestContentfulPaint *self);

jb_String LargestContentfulPaint_url(const LargestContentfulPaint *self);

Element LargestContentfulPaint_element(const LargestContentfulPaint *self);

jb_Object LargestContentfulPaint_toJSON(LargestContentfulPaint* self );

jb_Any LargestContentfulPaint_paintTime(const LargestContentfulPaint *self);

jb_Any LargestContentfulPaint_presentationTime(const LargestContentfulPaint *self);
