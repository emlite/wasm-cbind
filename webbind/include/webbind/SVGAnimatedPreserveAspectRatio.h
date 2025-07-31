#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGPreserveAspectRatio SVGPreserveAspectRatio;


DECLARE_EMLITE_TYPE(SVGAnimatedPreserveAspectRatio, em_Val);

SVGPreserveAspectRatio SVGAnimatedPreserveAspectRatio_baseVal(const SVGAnimatedPreserveAspectRatio *self);

SVGPreserveAspectRatio SVGAnimatedPreserveAspectRatio_animVal(const SVGAnimatedPreserveAspectRatio *self);
