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


DECLARE_EMLITE_TYPE(SVGFESpecularLightingElement, SVGElement);

SVGAnimatedString SVGFESpecularLightingElement_in1(const SVGFESpecularLightingElement *self);

SVGAnimatedNumber SVGFESpecularLightingElement_surfaceScale(const SVGFESpecularLightingElement *self);

SVGAnimatedNumber SVGFESpecularLightingElement_specularConstant(const SVGFESpecularLightingElement *self);

SVGAnimatedNumber SVGFESpecularLightingElement_specularExponent(const SVGFESpecularLightingElement *self);

SVGAnimatedNumber SVGFESpecularLightingElement_kernelUnitLengthX(const SVGFESpecularLightingElement *self);

SVGAnimatedNumber SVGFESpecularLightingElement_kernelUnitLengthY(const SVGFESpecularLightingElement *self);

SVGAnimatedLength SVGFESpecularLightingElement_x(const SVGFESpecularLightingElement *self);

SVGAnimatedLength SVGFESpecularLightingElement_y(const SVGFESpecularLightingElement *self);

SVGAnimatedLength SVGFESpecularLightingElement_width(const SVGFESpecularLightingElement *self);

SVGAnimatedLength SVGFESpecularLightingElement_height(const SVGFESpecularLightingElement *self);

SVGAnimatedString SVGFESpecularLightingElement_result(const SVGFESpecularLightingElement *self);
