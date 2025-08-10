#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CSSPropertyRule, CSSRule);

jb_String CSSPropertyRule_name(const CSSPropertyRule *self);

jb_String CSSPropertyRule_syntax(const CSSPropertyRule *self);

bool CSSPropertyRule_inherits(const CSSPropertyRule *self);

jb_String CSSPropertyRule_initialValue(const CSSPropertyRule *self);

#ifdef __cplusplus
}
#endif
