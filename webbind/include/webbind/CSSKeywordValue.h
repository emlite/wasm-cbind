#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSStyleValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSKeywordValue, CSSStyleValue);

CSSKeywordValue CSSKeywordValue_new(jb_String * value);

jb_String CSSKeywordValue_value(const CSSKeywordValue *self);

void CSSKeywordValue_set_value(CSSKeywordValue* self, jb_String * value);
