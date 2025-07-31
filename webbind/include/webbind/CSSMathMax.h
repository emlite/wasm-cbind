#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSMathValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSNumericArray CSSNumericArray;


DECLARE_EMLITE_TYPE(CSSMathMax, CSSMathValue);

CSSMathMax CSSMathMax_new(jb_Any * args);

CSSNumericArray CSSMathMax_values(const CSSMathMax *self);
