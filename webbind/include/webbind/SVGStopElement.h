#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedNumber SVGAnimatedNumber;


DECLARE_EMLITE_TYPE(SVGStopElement, SVGElement);

SVGAnimatedNumber SVGStopElement_offset(const SVGStopElement *self);
