#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSColorProfileRule, CSSRule);

jb_String CSSColorProfileRule_name(const CSSColorProfileRule *self);

jb_String CSSColorProfileRule_src(const CSSColorProfileRule *self);

jb_String CSSColorProfileRule_renderingIntent(const CSSColorProfileRule *self);

jb_String CSSColorProfileRule_components(const CSSColorProfileRule *self);
