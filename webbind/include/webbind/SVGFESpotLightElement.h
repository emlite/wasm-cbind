#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedNumber SVGAnimatedNumber;


DECLARE_EMLITE_TYPE(SVGFESpotLightElement, SVGElement);

SVGAnimatedNumber SVGFESpotLightElement_x(const SVGFESpotLightElement *self);

SVGAnimatedNumber SVGFESpotLightElement_y(const SVGFESpotLightElement *self);

SVGAnimatedNumber SVGFESpotLightElement_z(const SVGFESpotLightElement *self);

SVGAnimatedNumber SVGFESpotLightElement_pointsAtX(const SVGFESpotLightElement *self);

SVGAnimatedNumber SVGFESpotLightElement_pointsAtY(const SVGFESpotLightElement *self);

SVGAnimatedNumber SVGFESpotLightElement_pointsAtZ(const SVGFESpotLightElement *self);

SVGAnimatedNumber SVGFESpotLightElement_specularExponent(const SVGFESpotLightElement *self);

SVGAnimatedNumber SVGFESpotLightElement_limitingConeAngle(const SVGFESpotLightElement *self);
