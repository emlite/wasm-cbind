#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedTransformList SVGAnimatedTransformList;


DECLARE_EMLITE_TYPE(SVGClipPathElement, SVGElement);

SVGAnimatedEnumeration SVGClipPathElement_clipPathUnits(const SVGClipPathElement *self);

SVGAnimatedTransformList SVGClipPathElement_transform(const SVGClipPathElement *self);
