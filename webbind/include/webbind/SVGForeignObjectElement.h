#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGGraphicsElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedLength SVGAnimatedLength;

DECLARE_EMLITE_TYPE(SVGForeignObjectElement, SVGGraphicsElement);

SVGAnimatedLength SVGForeignObjectElement_x(const SVGForeignObjectElement *self);

SVGAnimatedLength SVGForeignObjectElement_y(const SVGForeignObjectElement *self);

SVGAnimatedLength SVGForeignObjectElement_width(const SVGForeignObjectElement *self);

SVGAnimatedLength SVGForeignObjectElement_height(const SVGForeignObjectElement *self);

#ifdef __cplusplus
}
#endif
