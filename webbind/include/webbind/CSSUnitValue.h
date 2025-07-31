#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSNumericValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSUnitValue, CSSNumericValue);

CSSUnitValue CSSUnitValue_new(double value, jb_String * unit);

double CSSUnitValue_value(const CSSUnitValue *self);

void CSSUnitValue_set_value(CSSUnitValue* self, double value);

jb_String CSSUnitValue_unit(const CSSUnitValue *self);
