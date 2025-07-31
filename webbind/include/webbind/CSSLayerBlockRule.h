#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSGroupingRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSLayerBlockRule, CSSGroupingRule);

jb_String CSSLayerBlockRule_name(const CSSLayerBlockRule *self);
