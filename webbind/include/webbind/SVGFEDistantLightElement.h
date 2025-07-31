#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedNumber SVGAnimatedNumber;


DECLARE_EMLITE_TYPE(SVGFEDistantLightElement, SVGElement);

SVGAnimatedNumber SVGFEDistantLightElement_azimuth(const SVGFEDistantLightElement *self);

SVGAnimatedNumber SVGFEDistantLightElement_elevation(const SVGFEDistantLightElement *self);
