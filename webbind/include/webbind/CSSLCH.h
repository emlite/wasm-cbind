#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSColorValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSLCH, CSSColorValue);

CSSLCH CSSLCH_new0(jb_Any * l, jb_Any * c, jb_Any * h);

CSSLCH CSSLCH_new1(jb_Any * l, jb_Any * c, jb_Any * h, jb_Any * alpha);

jb_Any CSSLCH_l(const CSSLCH *self);

void CSSLCH_set_l(CSSLCH* self, jb_Any * value);

jb_Any CSSLCH_c(const CSSLCH *self);

void CSSLCH_set_c(CSSLCH* self, jb_Any * value);

jb_Any CSSLCH_h(const CSSLCH *self);

void CSSLCH_set_h(CSSLCH* self, jb_Any * value);

jb_Any CSSLCH_alpha(const CSSLCH *self);

void CSSLCH_set_alpha(CSSLCH* self, jb_Any * value);
