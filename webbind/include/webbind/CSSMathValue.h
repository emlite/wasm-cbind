#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSNumericValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSMathValue, CSSNumericValue);

CSSMathOperator CSSMathValue_operator_(const CSSMathValue *self);
