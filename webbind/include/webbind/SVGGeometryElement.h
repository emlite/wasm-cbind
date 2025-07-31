#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGraphicsElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedNumber SVGAnimatedNumber;
typedef struct DOMPointInit DOMPointInit;
typedef struct DOMPoint DOMPoint;


DECLARE_EMLITE_TYPE(DOMPointInit, em_Val);

double DOMPointInit_x(const DOMPointInit *self);

void DOMPointInit_set_x(DOMPointInit* self, double value);

double DOMPointInit_y(const DOMPointInit *self);

void DOMPointInit_set_y(DOMPointInit* self, double value);

double DOMPointInit_z(const DOMPointInit *self);

void DOMPointInit_set_z(DOMPointInit* self, double value);

double DOMPointInit_w(const DOMPointInit *self);

void DOMPointInit_set_w(DOMPointInit* self, double value);
DECLARE_EMLITE_TYPE(SVGGeometryElement, SVGGraphicsElement);

SVGAnimatedNumber SVGGeometryElement_pathLength(const SVGGeometryElement *self);

bool SVGGeometryElement_isPointInFill0(SVGGeometryElement* self );

bool SVGGeometryElement_isPointInFill1(SVGGeometryElement* self , DOMPointInit * point);

bool SVGGeometryElement_isPointInStroke0(SVGGeometryElement* self );

bool SVGGeometryElement_isPointInStroke1(SVGGeometryElement* self , DOMPointInit * point);

float SVGGeometryElement_getTotalLength(SVGGeometryElement* self );

DOMPoint SVGGeometryElement_getPointAtLength(SVGGeometryElement* self , float distance);
