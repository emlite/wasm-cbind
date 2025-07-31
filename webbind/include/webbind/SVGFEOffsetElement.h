#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct SVGAnimatedNumber SVGAnimatedNumber;
typedef struct SVGAnimatedLength SVGAnimatedLength;


DECLARE_EMLITE_TYPE(SVGFEOffsetElement, SVGElement);

SVGAnimatedString SVGFEOffsetElement_in1(const SVGFEOffsetElement *self);

SVGAnimatedNumber SVGFEOffsetElement_dx(const SVGFEOffsetElement *self);

SVGAnimatedNumber SVGFEOffsetElement_dy(const SVGFEOffsetElement *self);

SVGAnimatedLength SVGFEOffsetElement_x(const SVGFEOffsetElement *self);

SVGAnimatedLength SVGFEOffsetElement_y(const SVGFEOffsetElement *self);

SVGAnimatedLength SVGFEOffsetElement_width(const SVGFEOffsetElement *self);

SVGAnimatedLength SVGFEOffsetElement_height(const SVGFEOffsetElement *self);

SVGAnimatedString SVGFEOffsetElement_result(const SVGFEOffsetElement *self);
