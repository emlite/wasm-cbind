#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct SVGAnimatedLength SVGAnimatedLength;


DECLARE_EMLITE_TYPE(SVGFETileElement, SVGElement);

SVGAnimatedString SVGFETileElement_in1(const SVGFETileElement *self);

SVGAnimatedLength SVGFETileElement_x(const SVGFETileElement *self);

SVGAnimatedLength SVGFETileElement_y(const SVGFETileElement *self);

SVGAnimatedLength SVGFETileElement_width(const SVGFETileElement *self);

SVGAnimatedLength SVGFETileElement_height(const SVGFETileElement *self);

SVGAnimatedString SVGFETileElement_result(const SVGFETileElement *self);
