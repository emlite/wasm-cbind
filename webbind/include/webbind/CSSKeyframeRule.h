#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSStyleProperties CSSStyleProperties;


DECLARE_EMLITE_TYPE(CSSKeyframeRule, CSSRule);

jb_String CSSKeyframeRule_keyText(const CSSKeyframeRule *self);

void CSSKeyframeRule_set_keyText(CSSKeyframeRule* self, jb_String * value);

CSSStyleProperties CSSKeyframeRule_style(const CSSKeyframeRule *self);
