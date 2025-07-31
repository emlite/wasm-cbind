#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSGroupingRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSStyleProperties CSSStyleProperties;
typedef struct StylePropertyMap StylePropertyMap;


DECLARE_EMLITE_TYPE(CSSStyleRule, CSSGroupingRule);

jb_String CSSStyleRule_selectorText(const CSSStyleRule *self);

void CSSStyleRule_set_selectorText(CSSStyleRule* self, jb_String * value);

CSSStyleProperties CSSStyleRule_style(const CSSStyleRule *self);

StylePropertyMap CSSStyleRule_styleMap(const CSSStyleRule *self);
