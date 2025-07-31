#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSColorValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSOKLCH, CSSColorValue);

CSSOKLCH CSSOKLCH_new0(jb_Any * l, jb_Any * c, jb_Any * h);

CSSOKLCH CSSOKLCH_new1(jb_Any * l, jb_Any * c, jb_Any * h, jb_Any * alpha);

jb_Any CSSOKLCH_l(const CSSOKLCH *self);

void CSSOKLCH_set_l(CSSOKLCH* self, jb_Any * value);

jb_Any CSSOKLCH_c(const CSSOKLCH *self);

void CSSOKLCH_set_c(CSSOKLCH* self, jb_Any * value);

jb_Any CSSOKLCH_h(const CSSOKLCH *self);

void CSSOKLCH_set_h(CSSOKLCH* self, jb_Any * value);

jb_Any CSSOKLCH_alpha(const CSSOKLCH *self);

void CSSOKLCH_set_alpha(CSSOKLCH* self, jb_Any * value);
