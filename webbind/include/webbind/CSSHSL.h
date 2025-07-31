#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSColorValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSHSL, CSSColorValue);

CSSHSL CSSHSL_new0(jb_Any * h, jb_Any * s, jb_Any * l);

CSSHSL CSSHSL_new1(jb_Any * h, jb_Any * s, jb_Any * l, jb_Any * alpha);

jb_Any CSSHSL_h(const CSSHSL *self);

void CSSHSL_set_h(CSSHSL* self, jb_Any * value);

jb_Any CSSHSL_s(const CSSHSL *self);

void CSSHSL_set_s(CSSHSL* self, jb_Any * value);

jb_Any CSSHSL_l(const CSSHSL *self);

void CSSHSL_set_l(CSSHSL* self, jb_Any * value);

jb_Any CSSHSL_alpha(const CSSHSL *self);

void CSSHSL_set_alpha(CSSHSL* self, jb_Any * value);
