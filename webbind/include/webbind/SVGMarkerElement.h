#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedAngle SVGAnimatedAngle;
typedef struct SVGAngle SVGAngle;
typedef struct SVGAnimatedRect SVGAnimatedRect;
typedef struct SVGAnimatedPreserveAspectRatio SVGAnimatedPreserveAspectRatio;


DECLARE_EMLITE_TYPE(SVGMarkerElement, SVGElement);

SVGAnimatedLength SVGMarkerElement_refX(const SVGMarkerElement *self);

SVGAnimatedLength SVGMarkerElement_refY(const SVGMarkerElement *self);

SVGAnimatedEnumeration SVGMarkerElement_markerUnits(const SVGMarkerElement *self);

SVGAnimatedLength SVGMarkerElement_markerWidth(const SVGMarkerElement *self);

SVGAnimatedLength SVGMarkerElement_markerHeight(const SVGMarkerElement *self);

SVGAnimatedEnumeration SVGMarkerElement_orientType(const SVGMarkerElement *self);

SVGAnimatedAngle SVGMarkerElement_orientAngle(const SVGMarkerElement *self);

jb_String SVGMarkerElement_orient(const SVGMarkerElement *self);

void SVGMarkerElement_set_orient(SVGMarkerElement* self, jb_String * value);

jb_Undefined SVGMarkerElement_setOrientToAuto(SVGMarkerElement* self );

jb_Undefined SVGMarkerElement_setOrientToAngle(SVGMarkerElement* self , SVGAngle * angle);

SVGAnimatedRect SVGMarkerElement_viewBox(const SVGMarkerElement *self);

SVGAnimatedPreserveAspectRatio SVGMarkerElement_preserveAspectRatio(const SVGMarkerElement *self);
