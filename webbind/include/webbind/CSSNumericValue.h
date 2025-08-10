#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSStyleValue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSUnitValue CSSUnitValue;
typedef struct CSSMathSum CSSMathSum;
typedef struct CSSNumericType CSSNumericType;

DECLARE_EMLITE_TYPE(CSSNumericValue, CSSStyleValue);

CSSNumericValue CSSNumericValue_add(CSSNumericValue* self , jb_Any * values);

CSSNumericValue CSSNumericValue_sub(CSSNumericValue* self , jb_Any * values);

CSSNumericValue CSSNumericValue_mul(CSSNumericValue* self , jb_Any * values);

CSSNumericValue CSSNumericValue_div(CSSNumericValue* self , jb_Any * values);

CSSNumericValue CSSNumericValue_min(CSSNumericValue* self , jb_Any * values);

CSSNumericValue CSSNumericValue_max(CSSNumericValue* self , jb_Any * values);

bool CSSNumericValue_equals(CSSNumericValue* self , jb_Any * value);

CSSUnitValue CSSNumericValue_to(CSSNumericValue* self , jb_String * unit);

CSSMathSum CSSNumericValue_toSum(CSSNumericValue* self , jb_String * units);

CSSNumericType CSSNumericValue_type(CSSNumericValue* self );

CSSNumericValue CSSNumericValue_parse(CSSNumericValue* self , jb_String * cssText);

#ifdef __cplusplus
}
#endif
