#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSStyleProperties CSSStyleProperties;


DECLARE_EMLITE_TYPE(CSSNestedDeclarations, CSSRule);

CSSStyleProperties CSSNestedDeclarations_style(const CSSNestedDeclarations *self);
