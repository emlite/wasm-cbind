#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSTransformComponent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSScale, CSSTransformComponent);

CSSScale CSSScale_new0(jb_Any * x, jb_Any * y);

CSSScale CSSScale_new1(jb_Any * x, jb_Any * y, jb_Any * z);

jb_Any CSSScale_x(const CSSScale *self);

void CSSScale_set_x(CSSScale* self, jb_Any * value);

jb_Any CSSScale_y(const CSSScale *self);

void CSSScale_set_y(CSSScale* self, jb_Any * value);

jb_Any CSSScale_z(const CSSScale *self);

void CSSScale_set_z(CSSScale* self, jb_Any * value);
