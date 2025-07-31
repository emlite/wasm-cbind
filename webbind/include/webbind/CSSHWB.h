#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSColorValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSNumericValue CSSNumericValue;


DECLARE_EMLITE_TYPE(CSSHWB, CSSColorValue);

CSSHWB CSSHWB_new0(CSSNumericValue * h, jb_Any * w, jb_Any * b);

CSSHWB CSSHWB_new1(CSSNumericValue * h, jb_Any * w, jb_Any * b, jb_Any * alpha);

CSSNumericValue CSSHWB_h(const CSSHWB *self);

void CSSHWB_set_h(CSSHWB* self, CSSNumericValue * value);

jb_Any CSSHWB_w(const CSSHWB *self);

void CSSHWB_set_w(CSSHWB* self, jb_Any * value);

jb_Any CSSHWB_b(const CSSHWB *self);

void CSSHWB_set_b(CSSHWB* self, jb_Any * value);

jb_Any CSSHWB_alpha(const CSSHWB *self);

void CSSHWB_set_alpha(CSSHWB* self, jb_Any * value);
