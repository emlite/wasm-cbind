#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSMathValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSNumericArray CSSNumericArray;


DECLARE_EMLITE_TYPE(CSSMathMin, CSSMathValue);

CSSMathMin CSSMathMin_new(jb_Any * args);

CSSNumericArray CSSMathMin_values(const CSSMathMin *self);
