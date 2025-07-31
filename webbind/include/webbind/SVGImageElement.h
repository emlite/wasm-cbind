#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGraphicsElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedPreserveAspectRatio SVGAnimatedPreserveAspectRatio;
typedef struct SVGAnimatedString SVGAnimatedString;


DECLARE_EMLITE_TYPE(SVGImageElement, SVGGraphicsElement);

SVGAnimatedLength SVGImageElement_x(const SVGImageElement *self);

SVGAnimatedLength SVGImageElement_y(const SVGImageElement *self);

SVGAnimatedLength SVGImageElement_width(const SVGImageElement *self);

SVGAnimatedLength SVGImageElement_height(const SVGImageElement *self);

SVGAnimatedPreserveAspectRatio SVGImageElement_preserveAspectRatio(const SVGImageElement *self);

jb_String SVGImageElement_crossOrigin(const SVGImageElement *self);

void SVGImageElement_set_crossOrigin(SVGImageElement* self, jb_String * value);

SVGAnimatedString SVGImageElement_href(const SVGImageElement *self);
