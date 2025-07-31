#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSColorValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSRGB, CSSColorValue);

CSSRGB CSSRGB_new0(jb_Any * r, jb_Any * g, jb_Any * b);

CSSRGB CSSRGB_new1(jb_Any * r, jb_Any * g, jb_Any * b, jb_Any * alpha);

jb_Any CSSRGB_r(const CSSRGB *self);

void CSSRGB_set_r(CSSRGB* self, jb_Any * value);

jb_Any CSSRGB_g(const CSSRGB *self);

void CSSRGB_set_g(CSSRGB* self, jb_Any * value);

jb_Any CSSRGB_b(const CSSRGB *self);

void CSSRGB_set_b(CSSRGB* self, jb_Any * value);

jb_Any CSSRGB_alpha(const CSSRGB *self);

void CSSRGB_set_alpha(CSSRGB* self, jb_Any * value);
