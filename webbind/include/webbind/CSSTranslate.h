#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSTransformComponent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSNumericValue CSSNumericValue;


DECLARE_EMLITE_TYPE(CSSTranslate, CSSTransformComponent);

CSSTranslate CSSTranslate_new0(CSSNumericValue * x, CSSNumericValue * y);

CSSTranslate CSSTranslate_new1(CSSNumericValue * x, CSSNumericValue * y, CSSNumericValue * z);

CSSNumericValue CSSTranslate_x(const CSSTranslate *self);

void CSSTranslate_set_x(CSSTranslate* self, CSSNumericValue * value);

CSSNumericValue CSSTranslate_y(const CSSTranslate *self);

void CSSTranslate_set_y(CSSTranslate* self, CSSNumericValue * value);

CSSNumericValue CSSTranslate_z(const CSSTranslate *self);

void CSSTranslate_set_z(CSSTranslate* self, CSSNumericValue * value);
