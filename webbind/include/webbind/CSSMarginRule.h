#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSStyleDeclaration CSSStyleDeclaration;


DECLARE_EMLITE_TYPE(CSSMarginRule, CSSRule);

jb_String CSSMarginRule_name(const CSSMarginRule *self);

CSSStyleDeclaration CSSMarginRule_style(const CSSMarginRule *self);
