#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGLength SVGLength;


DECLARE_EMLITE_TYPE(SVGAnimatedLength, em_Val);

SVGLength SVGAnimatedLength_baseVal(const SVGAnimatedLength *self);

SVGLength SVGAnimatedLength_animVal(const SVGAnimatedLength *self);
