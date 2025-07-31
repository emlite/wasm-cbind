#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(SVGLength, em_Val);

unsigned short SVGLength_unitType(const SVGLength *self);

float SVGLength_value(const SVGLength *self);

void SVGLength_set_value(SVGLength* self, float value);

float SVGLength_valueInSpecifiedUnits(const SVGLength *self);

void SVGLength_set_valueInSpecifiedUnits(SVGLength* self, float value);

jb_String SVGLength_valueAsString(const SVGLength *self);

void SVGLength_set_valueAsString(SVGLength* self, jb_String * value);

jb_Undefined SVGLength_newValueSpecifiedUnits(SVGLength* self , unsigned short unitType, float valueInSpecifiedUnits);

jb_Undefined SVGLength_convertToSpecifiedUnits(SVGLength* self , unsigned short unitType);
