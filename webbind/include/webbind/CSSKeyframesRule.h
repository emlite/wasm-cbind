#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSRuleList CSSRuleList;
typedef struct CSSKeyframeRule CSSKeyframeRule;


DECLARE_EMLITE_TYPE(CSSKeyframesRule, CSSRule);

jb_String CSSKeyframesRule_name(const CSSKeyframesRule *self);

void CSSKeyframesRule_set_name(CSSKeyframesRule* self, jb_String * value);

CSSRuleList CSSKeyframesRule_cssRules(const CSSKeyframesRule *self);

unsigned long CSSKeyframesRule_length(const CSSKeyframesRule *self);

jb_Undefined CSSKeyframesRule_appendRule(CSSKeyframesRule* self , jb_String * rule);

jb_Undefined CSSKeyframesRule_deleteRule(CSSKeyframesRule* self , jb_String * select);

CSSKeyframeRule CSSKeyframesRule_findRule(CSSKeyframesRule* self , jb_String * select);
