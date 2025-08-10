#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSMathValue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSNumericArray CSSNumericArray;

DECLARE_EMLITE_TYPE(CSSMathSum, CSSMathValue);

CSSMathSum CSSMathSum_new(jb_Any * args);

CSSNumericArray CSSMathSum_values(const CSSMathSum *self);

#ifdef __cplusplus
}
#endif
