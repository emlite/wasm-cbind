#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AbstractRange AbstractRange;


DECLARE_EMLITE_TYPE(Highlight, em_Val);

Highlight Highlight_new(AbstractRange * initialRanges);

long Highlight_priority(const Highlight *self);

void Highlight_set_priority(Highlight* self, long value);

HighlightType Highlight_type(const Highlight *self);

void Highlight_set_type(Highlight* self, HighlightType * value);
