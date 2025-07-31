#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedPreserveAspectRatio SVGAnimatedPreserveAspectRatio;
typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct SVGAnimatedLength SVGAnimatedLength;


DECLARE_EMLITE_TYPE(SVGFEImageElement, SVGElement);

SVGAnimatedPreserveAspectRatio SVGFEImageElement_preserveAspectRatio(const SVGFEImageElement *self);

SVGAnimatedString SVGFEImageElement_crossOrigin(const SVGFEImageElement *self);

SVGAnimatedLength SVGFEImageElement_x(const SVGFEImageElement *self);

SVGAnimatedLength SVGFEImageElement_y(const SVGFEImageElement *self);

SVGAnimatedLength SVGFEImageElement_width(const SVGFEImageElement *self);

SVGAnimatedLength SVGFEImageElement_height(const SVGFEImageElement *self);

SVGAnimatedString SVGFEImageElement_result(const SVGFEImageElement *self);

SVGAnimatedString SVGFEImageElement_href(const SVGFEImageElement *self);
