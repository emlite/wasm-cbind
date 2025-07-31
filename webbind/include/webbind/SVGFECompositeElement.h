#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedNumber SVGAnimatedNumber;
typedef struct SVGAnimatedLength SVGAnimatedLength;


DECLARE_EMLITE_TYPE(SVGFECompositeElement, SVGElement);

SVGAnimatedString SVGFECompositeElement_in1(const SVGFECompositeElement *self);

SVGAnimatedString SVGFECompositeElement_in2(const SVGFECompositeElement *self);

SVGAnimatedEnumeration SVGFECompositeElement_operator_(const SVGFECompositeElement *self);

SVGAnimatedNumber SVGFECompositeElement_k1(const SVGFECompositeElement *self);

SVGAnimatedNumber SVGFECompositeElement_k2(const SVGFECompositeElement *self);

SVGAnimatedNumber SVGFECompositeElement_k3(const SVGFECompositeElement *self);

SVGAnimatedNumber SVGFECompositeElement_k4(const SVGFECompositeElement *self);

SVGAnimatedLength SVGFECompositeElement_x(const SVGFECompositeElement *self);

SVGAnimatedLength SVGFECompositeElement_y(const SVGFECompositeElement *self);

SVGAnimatedLength SVGFECompositeElement_width(const SVGFECompositeElement *self);

SVGAnimatedLength SVGFECompositeElement_height(const SVGFECompositeElement *self);

SVGAnimatedString SVGFECompositeElement_result(const SVGFECompositeElement *self);
