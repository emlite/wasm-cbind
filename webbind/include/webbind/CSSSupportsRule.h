#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSConditionRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSSupportsRule, CSSConditionRule);

bool CSSSupportsRule_matches(const CSSSupportsRule *self);
