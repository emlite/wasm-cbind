#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGraphicsElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGElement SVGElement;
typedef struct SVGAnimatedString SVGAnimatedString;


DECLARE_EMLITE_TYPE(SVGUseElement, SVGGraphicsElement);

SVGAnimatedLength SVGUseElement_x(const SVGUseElement *self);

SVGAnimatedLength SVGUseElement_y(const SVGUseElement *self);

SVGAnimatedLength SVGUseElement_width(const SVGUseElement *self);

SVGAnimatedLength SVGUseElement_height(const SVGUseElement *self);

SVGElement SVGUseElement_instanceRoot(const SVGUseElement *self);

SVGElement SVGUseElement_animatedInstanceRoot(const SVGUseElement *self);

SVGAnimatedString SVGUseElement_href(const SVGUseElement *self);
