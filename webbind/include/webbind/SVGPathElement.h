#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGGeometryElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedNumber SVGAnimatedNumber;
typedef struct DOMPoint DOMPoint;
typedef struct SVGPathSegment SVGPathSegment;
typedef struct SVGPathDataSettings SVGPathDataSettings;

DECLARE_EMLITE_TYPE(SVGPathElement, SVGGeometryElement);

SVGAnimatedNumber SVGPathElement_pathLength(const SVGPathElement *self);

float SVGPathElement_getTotalLength(SVGPathElement* self );

DOMPoint SVGPathElement_getPointAtLength(SVGPathElement* self , float distance);

SVGPathSegment SVGPathElement_getPathSegmentAtLength(SVGPathElement* self , float distance);

jb_Array SVGPathElement_getPathData0(SVGPathElement* self );

jb_Array SVGPathElement_getPathData1(SVGPathElement* self , SVGPathDataSettings * settings);

jb_Undefined SVGPathElement_setPathData(SVGPathElement* self , jb_Array * pathData);

#ifdef __cplusplus
}
#endif
