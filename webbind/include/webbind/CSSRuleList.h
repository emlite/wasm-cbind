#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSRule CSSRule;


DECLARE_EMLITE_TYPE(CSSRuleList, em_Val);

CSSRule CSSRuleList_item(CSSRuleList* self , unsigned long index);

unsigned long CSSRuleList_length(const CSSRuleList *self);
