#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSColorValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSOKLab, CSSColorValue);

CSSOKLab CSSOKLab_new0(jb_Any * l, jb_Any * a, jb_Any * b);

CSSOKLab CSSOKLab_new1(jb_Any * l, jb_Any * a, jb_Any * b, jb_Any * alpha);

jb_Any CSSOKLab_l(const CSSOKLab *self);

void CSSOKLab_set_l(CSSOKLab* self, jb_Any * value);

jb_Any CSSOKLab_a(const CSSOKLab *self);

void CSSOKLab_set_a(CSSOKLab* self, jb_Any * value);

jb_Any CSSOKLab_b(const CSSOKLab *self);

void CSSOKLab_set_b(CSSOKLab* self, jb_Any * value);

jb_Any CSSOKLab_alpha(const CSSOKLab *self);

void CSSOKLab_set_alpha(CSSOKLab* self, jb_Any * value);
