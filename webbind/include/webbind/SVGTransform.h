#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGSVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMMatrix DOMMatrix;


DECLARE_EMLITE_TYPE(SVGTransform, em_Val);

unsigned short SVGTransform_type(const SVGTransform *self);

DOMMatrix SVGTransform_matrix(const SVGTransform *self);

float SVGTransform_angle(const SVGTransform *self);

jb_Undefined SVGTransform_setMatrix0(SVGTransform* self );

jb_Undefined SVGTransform_setMatrix1(SVGTransform* self , DOMMatrix2DInit * matrix);

jb_Undefined SVGTransform_setTranslate(SVGTransform* self , float tx, float ty);

jb_Undefined SVGTransform_setScale(SVGTransform* self , float sx, float sy);

jb_Undefined SVGTransform_setRotate(SVGTransform* self , float angle, float cx, float cy);

jb_Undefined SVGTransform_setSkewX(SVGTransform* self , float angle);

jb_Undefined SVGTransform_setSkewY(SVGTransform* self , float angle);
