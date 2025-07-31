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
typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedRect SVGAnimatedRect;
typedef struct SVGAnimatedPreserveAspectRatio SVGAnimatedPreserveAspectRatio;
typedef struct SVGAnimatedString SVGAnimatedString;


DECLARE_EMLITE_TYPE(SVGPatternElement, SVGElement);

SVGAnimatedEnumeration SVGPatternElement_patternUnits(const SVGPatternElement *self);

SVGAnimatedEnumeration SVGPatternElement_patternContentUnits(const SVGPatternElement *self);

SVGAnimatedTransformList SVGPatternElement_patternTransform(const SVGPatternElement *self);

SVGAnimatedLength SVGPatternElement_x(const SVGPatternElement *self);

SVGAnimatedLength SVGPatternElement_y(const SVGPatternElement *self);

SVGAnimatedLength SVGPatternElement_width(const SVGPatternElement *self);

SVGAnimatedLength SVGPatternElement_height(const SVGPatternElement *self);

SVGAnimatedRect SVGPatternElement_viewBox(const SVGPatternElement *self);

SVGAnimatedPreserveAspectRatio SVGPatternElement_preserveAspectRatio(const SVGPatternElement *self);

SVGAnimatedString SVGPatternElement_href(const SVGPatternElement *self);
