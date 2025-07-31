#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSFontPaletteValuesRule, CSSRule);

jb_String CSSFontPaletteValuesRule_name(const CSSFontPaletteValuesRule *self);

jb_String CSSFontPaletteValuesRule_fontFamily(const CSSFontPaletteValuesRule *self);

jb_String CSSFontPaletteValuesRule_basePalette(const CSSFontPaletteValuesRule *self);

jb_String CSSFontPaletteValuesRule_overrideColors(const CSSFontPaletteValuesRule *self);
