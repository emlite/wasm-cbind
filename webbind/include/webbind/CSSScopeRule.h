#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSGroupingRule.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(CSSScopeRule, CSSGroupingRule);

jb_String CSSScopeRule_start(const CSSScopeRule *self);

jb_String CSSScopeRule_end(const CSSScopeRule *self);
