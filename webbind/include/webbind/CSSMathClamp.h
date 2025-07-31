#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSMathValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSNumericValue CSSNumericValue;


DECLARE_EMLITE_TYPE(CSSMathClamp, CSSMathValue);

CSSMathClamp CSSMathClamp_new(jb_Any * lower, jb_Any * value, jb_Any * upper);

CSSNumericValue CSSMathClamp_lower(const CSSMathClamp *self);

CSSNumericValue CSSMathClamp_value(const CSSMathClamp *self);

CSSNumericValue CSSMathClamp_upper(const CSSMathClamp *self);
