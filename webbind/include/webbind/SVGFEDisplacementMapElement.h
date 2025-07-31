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
typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedLength SVGAnimatedLength;


DECLARE_EMLITE_TYPE(SVGFEDisplacementMapElement, SVGElement);

SVGAnimatedString SVGFEDisplacementMapElement_in1(const SVGFEDisplacementMapElement *self);

SVGAnimatedString SVGFEDisplacementMapElement_in2(const SVGFEDisplacementMapElement *self);

SVGAnimatedNumber SVGFEDisplacementMapElement_scale(const SVGFEDisplacementMapElement *self);

SVGAnimatedEnumeration SVGFEDisplacementMapElement_xChannelSelector(const SVGFEDisplacementMapElement *self);

SVGAnimatedEnumeration SVGFEDisplacementMapElement_yChannelSelector(const SVGFEDisplacementMapElement *self);

SVGAnimatedLength SVGFEDisplacementMapElement_x(const SVGFEDisplacementMapElement *self);

SVGAnimatedLength SVGFEDisplacementMapElement_y(const SVGFEDisplacementMapElement *self);

SVGAnimatedLength SVGFEDisplacementMapElement_width(const SVGFEDisplacementMapElement *self);

SVGAnimatedLength SVGFEDisplacementMapElement_height(const SVGFEDisplacementMapElement *self);

SVGAnimatedString SVGFEDisplacementMapElement_result(const SVGFEDisplacementMapElement *self);
