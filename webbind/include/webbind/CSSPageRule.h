#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSGroupingRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSPageDescriptors CSSPageDescriptors;


DECLARE_EMLITE_TYPE(CSSPageRule, CSSGroupingRule);

jb_String CSSPageRule_selectorText(const CSSPageRule *self);

void CSSPageRule_set_selectorText(CSSPageRule* self, jb_String * value);

CSSPageDescriptors CSSPageRule_style(const CSSPageRule *self);
