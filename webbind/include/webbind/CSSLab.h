#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSColorValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSLab, CSSColorValue);

CSSLab CSSLab_new0(jb_Any * l, jb_Any * a, jb_Any * b);

CSSLab CSSLab_new1(jb_Any * l, jb_Any * a, jb_Any * b, jb_Any * alpha);

jb_Any CSSLab_l(const CSSLab *self);

void CSSLab_set_l(CSSLab* self, jb_Any * value);

jb_Any CSSLab_a(const CSSLab *self);

void CSSLab_set_a(CSSLab* self, jb_Any * value);

jb_Any CSSLab_b(const CSSLab *self);

void CSSLab_set_b(CSSLab* self, jb_Any * value);

jb_Any CSSLab_alpha(const CSSLab *self);

void CSSLab_set_alpha(CSSLab* self, jb_Any * value);
