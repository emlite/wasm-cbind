#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSRuleList CSSRuleList;


DECLARE_EMLITE_TYPE(CSSGroupingRule, CSSRule);

CSSRuleList CSSGroupingRule_cssRules(const CSSGroupingRule *self);

unsigned long CSSGroupingRule_insertRule0(CSSGroupingRule* self , jb_String * rule);

unsigned long CSSGroupingRule_insertRule1(CSSGroupingRule* self , jb_String * rule, unsigned long index);

jb_Undefined CSSGroupingRule_deleteRule(CSSGroupingRule* self , unsigned long index);
