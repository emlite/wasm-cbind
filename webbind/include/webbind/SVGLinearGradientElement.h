#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGradientElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedLength SVGAnimatedLength;


DECLARE_EMLITE_TYPE(SVGLinearGradientElement, SVGGradientElement);

SVGAnimatedLength SVGLinearGradientElement_x1(const SVGLinearGradientElement *self);

SVGAnimatedLength SVGLinearGradientElement_y1(const SVGLinearGradientElement *self);

SVGAnimatedLength SVGLinearGradientElement_x2(const SVGLinearGradientElement *self);

SVGAnimatedLength SVGLinearGradientElement_y2(const SVGLinearGradientElement *self);
