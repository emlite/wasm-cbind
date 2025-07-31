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


DECLARE_EMLITE_TYPE(SVGFEMorphologyElement, SVGElement);

SVGAnimatedString SVGFEMorphologyElement_in1(const SVGFEMorphologyElement *self);

SVGAnimatedEnumeration SVGFEMorphologyElement_operator_(const SVGFEMorphologyElement *self);

SVGAnimatedNumber SVGFEMorphologyElement_radiusX(const SVGFEMorphologyElement *self);

SVGAnimatedNumber SVGFEMorphologyElement_radiusY(const SVGFEMorphologyElement *self);

SVGAnimatedLength SVGFEMorphologyElement_x(const SVGFEMorphologyElement *self);

SVGAnimatedLength SVGFEMorphologyElement_y(const SVGFEMorphologyElement *self);

SVGAnimatedLength SVGFEMorphologyElement_width(const SVGFEMorphologyElement *self);

SVGAnimatedLength SVGFEMorphologyElement_height(const SVGFEMorphologyElement *self);

SVGAnimatedString SVGFEMorphologyElement_result(const SVGFEMorphologyElement *self);
