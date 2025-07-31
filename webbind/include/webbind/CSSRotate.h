#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSTransformComponent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSNumericValue CSSNumericValue;


DECLARE_EMLITE_TYPE(CSSRotate, CSSTransformComponent);

CSSRotate CSSRotate_new(jb_Any * x, jb_Any * y, jb_Any * z, CSSNumericValue * angle);

jb_Any CSSRotate_x(const CSSRotate *self);

void CSSRotate_set_x(CSSRotate* self, jb_Any * value);

jb_Any CSSRotate_y(const CSSRotate *self);

void CSSRotate_set_y(CSSRotate* self, jb_Any * value);

jb_Any CSSRotate_z(const CSSRotate *self);

void CSSRotate_set_z(CSSRotate* self, jb_Any * value);

CSSNumericValue CSSRotate_angle(const CSSRotate *self);

void CSSRotate_set_angle(CSSRotate* self, CSSNumericValue * value);
