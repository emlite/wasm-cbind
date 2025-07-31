#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedString SVGAnimatedString;


DECLARE_EMLITE_TYPE(SVGFEFloodElement, SVGElement);

SVGAnimatedLength SVGFEFloodElement_x(const SVGFEFloodElement *self);

SVGAnimatedLength SVGFEFloodElement_y(const SVGFEFloodElement *self);

SVGAnimatedLength SVGFEFloodElement_width(const SVGFEFloodElement *self);

SVGAnimatedLength SVGFEFloodElement_height(const SVGFEFloodElement *self);

SVGAnimatedString SVGFEFloodElement_result(const SVGFEFloodElement *self);
