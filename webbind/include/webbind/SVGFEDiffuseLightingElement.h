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


DECLARE_EMLITE_TYPE(SVGFEDiffuseLightingElement, SVGElement);

SVGAnimatedString SVGFEDiffuseLightingElement_in1(const SVGFEDiffuseLightingElement *self);

SVGAnimatedNumber SVGFEDiffuseLightingElement_surfaceScale(const SVGFEDiffuseLightingElement *self);

SVGAnimatedNumber SVGFEDiffuseLightingElement_diffuseConstant(const SVGFEDiffuseLightingElement *self);

SVGAnimatedNumber SVGFEDiffuseLightingElement_kernelUnitLengthX(const SVGFEDiffuseLightingElement *self);

SVGAnimatedNumber SVGFEDiffuseLightingElement_kernelUnitLengthY(const SVGFEDiffuseLightingElement *self);

SVGAnimatedLength SVGFEDiffuseLightingElement_x(const SVGFEDiffuseLightingElement *self);

SVGAnimatedLength SVGFEDiffuseLightingElement_y(const SVGFEDiffuseLightingElement *self);

SVGAnimatedLength SVGFEDiffuseLightingElement_width(const SVGFEDiffuseLightingElement *self);

SVGAnimatedLength SVGFEDiffuseLightingElement_height(const SVGFEDiffuseLightingElement *self);

SVGAnimatedString SVGFEDiffuseLightingElement_result(const SVGFEDiffuseLightingElement *self);
