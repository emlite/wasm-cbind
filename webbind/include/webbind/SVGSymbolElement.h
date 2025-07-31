#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGraphicsElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedRect SVGAnimatedRect;
typedef struct SVGAnimatedPreserveAspectRatio SVGAnimatedPreserveAspectRatio;


DECLARE_EMLITE_TYPE(SVGSymbolElement, SVGGraphicsElement);

SVGAnimatedRect SVGSymbolElement_viewBox(const SVGSymbolElement *self);

SVGAnimatedPreserveAspectRatio SVGSymbolElement_preserveAspectRatio(const SVGSymbolElement *self);
