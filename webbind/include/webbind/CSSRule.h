#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSRule CSSRule;
typedef struct CSSStyleSheet CSSStyleSheet;


DECLARE_EMLITE_TYPE(CSSRule, em_Val);

jb_String CSSRule_cssText(const CSSRule *self);

void CSSRule_set_cssText(CSSRule* self, jb_String * value);

CSSRule CSSRule_parentRule(const CSSRule *self);

CSSStyleSheet CSSRule_parentStyleSheet(const CSSRule *self);

unsigned short CSSRule_type(const CSSRule *self);
