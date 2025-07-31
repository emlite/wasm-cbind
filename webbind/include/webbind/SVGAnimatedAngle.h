#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAngle SVGAngle;


DECLARE_EMLITE_TYPE(SVGAnimatedAngle, em_Val);

SVGAngle SVGAnimatedAngle_baseVal(const SVGAnimatedAngle *self);

SVGAngle SVGAnimatedAngle_animVal(const SVGAnimatedAngle *self);
