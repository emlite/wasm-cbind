#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGeometryElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGPointList SVGPointList;


DECLARE_EMLITE_TYPE(SVGPolygonElement, SVGGeometryElement);

SVGPointList SVGPolygonElement_points(const SVGPolygonElement *self);

SVGPointList SVGPolygonElement_animatedPoints(const SVGPolygonElement *self);
