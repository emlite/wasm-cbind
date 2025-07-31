#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSFontFaceDescriptors CSSFontFaceDescriptors;


DECLARE_EMLITE_TYPE(CSSFontFaceRule, CSSRule);

CSSFontFaceDescriptors CSSFontFaceRule_style(const CSSFontFaceRule *self);
