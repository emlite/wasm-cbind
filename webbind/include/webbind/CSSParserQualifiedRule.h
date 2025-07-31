#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSParserRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSParserValue CSSParserValue;


DECLARE_EMLITE_TYPE(CSSParserQualifiedRule, CSSParserRule);

CSSParserQualifiedRule CSSParserQualifiedRule_new0(jb_Array * prelude);

CSSParserQualifiedRule CSSParserQualifiedRule_new1(jb_Array * prelude, jb_Array * body);

jb_Array CSSParserQualifiedRule_prelude(const CSSParserQualifiedRule *self);

jb_Array CSSParserQualifiedRule_body(const CSSParserQualifiedRule *self);
