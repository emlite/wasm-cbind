#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedString SVGAnimatedString;


DECLARE_EMLITE_TYPE(SVGFilterElement, SVGElement);

SVGAnimatedEnumeration SVGFilterElement_filterUnits(const SVGFilterElement *self);

SVGAnimatedEnumeration SVGFilterElement_primitiveUnits(const SVGFilterElement *self);

SVGAnimatedLength SVGFilterElement_x(const SVGFilterElement *self);

SVGAnimatedLength SVGFilterElement_y(const SVGFilterElement *self);

SVGAnimatedLength SVGFilterElement_width(const SVGFilterElement *self);

SVGAnimatedLength SVGFilterElement_height(const SVGFilterElement *self);

SVGAnimatedString SVGFilterElement_href(const SVGFilterElement *self);
