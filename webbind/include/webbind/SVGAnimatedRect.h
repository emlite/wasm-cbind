#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMRect DOMRect;
typedef struct DOMRectReadOnly DOMRectReadOnly;


DECLARE_EMLITE_TYPE(SVGAnimatedRect, em_Val);

DOMRect SVGAnimatedRect_baseVal(const SVGAnimatedRect *self);

DOMRectReadOnly SVGAnimatedRect_animVal(const SVGAnimatedRect *self);
