#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(SVGAngle, em_Val);

unsigned short SVGAngle_unitType(const SVGAngle *self);

float SVGAngle_value(const SVGAngle *self);

void SVGAngle_set_value(SVGAngle* self, float value);

float SVGAngle_valueInSpecifiedUnits(const SVGAngle *self);

void SVGAngle_set_valueInSpecifiedUnits(SVGAngle* self, float value);

jb_String SVGAngle_valueAsString(const SVGAngle *self);

void SVGAngle_set_valueAsString(SVGAngle* self, jb_String * value);

jb_Undefined SVGAngle_newValueSpecifiedUnits(SVGAngle* self , unsigned short unitType, float valueInSpecifiedUnits);

jb_Undefined SVGAngle_convertToSpecifiedUnits(SVGAngle* self , unsigned short unitType);
