#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} SVGAnimatedBoolean;


DECLARE_EMLITE_TYPE(SVGAnimatedBoolean, em_Val);

bool SVGAnimatedBoolean_baseVal( const SVGAnimatedBoolean *self);

void SVGAnimatedBoolean_set_baseVal(SVGAnimatedBoolean* self, bool value);

bool SVGAnimatedBoolean_animVal( const SVGAnimatedBoolean *self);
