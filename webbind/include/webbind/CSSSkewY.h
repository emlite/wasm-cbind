#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSTransformComponent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSNumericValue CSSNumericValue;

DECLARE_EMLITE_TYPE(CSSSkewY, CSSTransformComponent);

CSSSkewY CSSSkewY_new(CSSNumericValue * ay);

CSSNumericValue CSSSkewY_ay(const CSSSkewY *self);

void CSSSkewY_set_ay(CSSSkewY* self, CSSNumericValue * value);

#ifdef __cplusplus
}
#endif
