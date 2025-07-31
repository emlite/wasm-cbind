#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedTransformList SVGAnimatedTransformList;
typedef struct SVGAnimatedString SVGAnimatedString;


DECLARE_EMLITE_TYPE(SVGGradientElement, SVGElement);

SVGAnimatedEnumeration SVGGradientElement_gradientUnits(const SVGGradientElement *self);

SVGAnimatedTransformList SVGGradientElement_gradientTransform(const SVGGradientElement *self);

SVGAnimatedEnumeration SVGGradientElement_spreadMethod(const SVGGradientElement *self);

SVGAnimatedString SVGGradientElement_href(const SVGGradientElement *self);
