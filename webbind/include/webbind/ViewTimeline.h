#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ScrollTimeline.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Element Element;
typedef struct CSSNumericValue CSSNumericValue;


DECLARE_EMLITE_TYPE(ViewTimeline, ScrollTimeline);

ViewTimeline ViewTimeline_new0();

ViewTimeline ViewTimeline_new1(jb_Any * options);

Element ViewTimeline_subject(const ViewTimeline *self);

CSSNumericValue ViewTimeline_startOffset(const ViewTimeline *self);

CSSNumericValue ViewTimeline_endOffset(const ViewTimeline *self);
