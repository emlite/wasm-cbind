#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} SVGAnimatedNumber;


DECLARE_EMLITE_TYPE(SVGAnimatedNumber, em_Val);

float SVGAnimatedNumber_baseVal( const SVGAnimatedNumber *self);

void SVGAnimatedNumber_set_baseVal(SVGAnimatedNumber* self, float value);

float SVGAnimatedNumber_animVal( const SVGAnimatedNumber *self);
