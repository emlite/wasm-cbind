#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSPositionTryDescriptors CSSPositionTryDescriptors;


DECLARE_EMLITE_TYPE(CSSPositionTryRule, CSSRule);

jb_String CSSPositionTryRule_name(const CSSPositionTryRule *self);

CSSPositionTryDescriptors CSSPositionTryRule_style(const CSSPositionTryRule *self);
