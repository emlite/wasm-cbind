#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGTextContentElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedString SVGAnimatedString;


DECLARE_EMLITE_TYPE(SVGTextPathElement, SVGTextContentElement);

SVGAnimatedLength SVGTextPathElement_startOffset(const SVGTextPathElement *self);

SVGAnimatedEnumeration SVGTextPathElement_method(const SVGTextPathElement *self);

SVGAnimatedEnumeration SVGTextPathElement_spacing(const SVGTextPathElement *self);

SVGAnimatedString SVGTextPathElement_href(const SVGTextPathElement *self);
