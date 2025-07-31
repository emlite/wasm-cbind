#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSFontFeatureValuesMap CSSFontFeatureValuesMap;


DECLARE_EMLITE_TYPE(CSSFontFeatureValuesRule, CSSRule);

jb_String CSSFontFeatureValuesRule_fontFamily(const CSSFontFeatureValuesRule *self);

void CSSFontFeatureValuesRule_set_fontFamily(CSSFontFeatureValuesRule* self, jb_String * value);

CSSFontFeatureValuesMap CSSFontFeatureValuesRule_annotation(const CSSFontFeatureValuesRule *self);

CSSFontFeatureValuesMap CSSFontFeatureValuesRule_ornaments(const CSSFontFeatureValuesRule *self);

CSSFontFeatureValuesMap CSSFontFeatureValuesRule_stylistic(const CSSFontFeatureValuesRule *self);

CSSFontFeatureValuesMap CSSFontFeatureValuesRule_swash(const CSSFontFeatureValuesRule *self);

CSSFontFeatureValuesMap CSSFontFeatureValuesRule_characterVariant(const CSSFontFeatureValuesRule *self);

CSSFontFeatureValuesMap CSSFontFeatureValuesRule_styleset(const CSSFontFeatureValuesRule *self);

CSSFontFeatureValuesMap CSSFontFeatureValuesRule_historicalForms(const CSSFontFeatureValuesRule *self);
