#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(SVGAnimatedEnumeration, em_Val);

unsigned short SVGAnimatedEnumeration_baseVal(const SVGAnimatedEnumeration *self);

void SVGAnimatedEnumeration_set_baseVal(SVGAnimatedEnumeration* self, unsigned short value);

unsigned short SVGAnimatedEnumeration_animVal(const SVGAnimatedEnumeration *self);
