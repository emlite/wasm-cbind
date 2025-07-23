#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(SVGNumber, em_Val);

float SVGNumber_value(const SVGNumber *self);

void SVGNumber_set_value(SVGNumber* self, float value);
