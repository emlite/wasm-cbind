#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGeometryElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedLength SVGAnimatedLength;


DECLARE_EMLITE_TYPE(SVGCircleElement, SVGGeometryElement);

SVGAnimatedLength SVGCircleElement_cx(const SVGCircleElement *self);

SVGAnimatedLength SVGCircleElement_cy(const SVGCircleElement *self);

SVGAnimatedLength SVGCircleElement_r(const SVGCircleElement *self);
