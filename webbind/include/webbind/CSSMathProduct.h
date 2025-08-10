#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSMathValue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSNumericArray CSSNumericArray;

DECLARE_EMLITE_TYPE(CSSMathProduct, CSSMathValue);

CSSMathProduct CSSMathProduct_new(jb_Any * args);

CSSNumericArray CSSMathProduct_values(const CSSMathProduct *self);

#ifdef __cplusplus
}
#endif
