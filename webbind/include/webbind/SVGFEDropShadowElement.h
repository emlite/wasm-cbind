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


DECLARE_EMLITE_TYPE(SVGFEDropShadowElement, SVGElement);

SVGAnimatedString SVGFEDropShadowElement_in1(const SVGFEDropShadowElement *self);

SVGAnimatedNumber SVGFEDropShadowElement_dx(const SVGFEDropShadowElement *self);

SVGAnimatedNumber SVGFEDropShadowElement_dy(const SVGFEDropShadowElement *self);

SVGAnimatedNumber SVGFEDropShadowElement_stdDeviationX(const SVGFEDropShadowElement *self);

SVGAnimatedNumber SVGFEDropShadowElement_stdDeviationY(const SVGFEDropShadowElement *self);

jb_Undefined SVGFEDropShadowElement_setStdDeviation(SVGFEDropShadowElement* self , float stdDeviationX, float stdDeviationY);

SVGAnimatedLength SVGFEDropShadowElement_x(const SVGFEDropShadowElement *self);

SVGAnimatedLength SVGFEDropShadowElement_y(const SVGFEDropShadowElement *self);

SVGAnimatedLength SVGFEDropShadowElement_width(const SVGFEDropShadowElement *self);

SVGAnimatedLength SVGFEDropShadowElement_height(const SVGFEDropShadowElement *self);

SVGAnimatedString SVGFEDropShadowElement_result(const SVGFEDropShadowElement *self);
