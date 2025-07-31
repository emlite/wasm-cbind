#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSLayerStatementRule, CSSRule);

jb_Array CSSLayerStatementRule_nameList(const CSSLayerStatementRule *self);
