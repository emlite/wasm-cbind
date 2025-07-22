#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ScrollTimeline.h"
#include "enums.h"

typedef struct Element Element;
typedef struct CSSNumericValue CSSNumericValue;


typedef struct {
  ScrollTimeline inner;
} ViewTimeline;


DECLARE_EMLITE_TYPE(ViewTimeline, ScrollTimeline);

ViewTimeline ViewTimeline_new();

ViewTimeline ViewTimeline_new(const jb_Any* options);

Element ViewTimeline_subject( const ViewTimeline *self);

CSSNumericValue ViewTimeline_startOffset( const ViewTimeline *self);

CSSNumericValue ViewTimeline_endOffset( const ViewTimeline *self);
