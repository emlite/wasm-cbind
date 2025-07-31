#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PerformanceEntry.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct Element Element;


DECLARE_EMLITE_TYPE(PerformanceElementTiming, PerformanceEntry);

jb_Any PerformanceElementTiming_renderTime(const PerformanceElementTiming *self);

jb_Any PerformanceElementTiming_loadTime(const PerformanceElementTiming *self);

DOMRectReadOnly PerformanceElementTiming_intersectionRect(const PerformanceElementTiming *self);

jb_String PerformanceElementTiming_identifier(const PerformanceElementTiming *self);

unsigned long PerformanceElementTiming_naturalWidth(const PerformanceElementTiming *self);

unsigned long PerformanceElementTiming_naturalHeight(const PerformanceElementTiming *self);

jb_String PerformanceElementTiming_id(const PerformanceElementTiming *self);

Element PerformanceElementTiming_element(const PerformanceElementTiming *self);

jb_String PerformanceElementTiming_url(const PerformanceElementTiming *self);

jb_Object PerformanceElementTiming_toJSON(PerformanceElementTiming* self );

jb_Any PerformanceElementTiming_paintTime(const PerformanceElementTiming *self);

jb_Any PerformanceElementTiming_presentationTime(const PerformanceElementTiming *self);
