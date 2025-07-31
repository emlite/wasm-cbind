#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGradientElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedLength SVGAnimatedLength;


DECLARE_EMLITE_TYPE(SVGRadialGradientElement, SVGGradientElement);

SVGAnimatedLength SVGRadialGradientElement_cx(const SVGRadialGradientElement *self);

SVGAnimatedLength SVGRadialGradientElement_cy(const SVGRadialGradientElement *self);

SVGAnimatedLength SVGRadialGradientElement_r(const SVGRadialGradientElement *self);

SVGAnimatedLength SVGRadialGradientElement_fx(const SVGRadialGradientElement *self);

SVGAnimatedLength SVGRadialGradientElement_fy(const SVGRadialGradientElement *self);

SVGAnimatedLength SVGRadialGradientElement_fr(const SVGRadialGradientElement *self);
