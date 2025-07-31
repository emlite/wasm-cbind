#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSParserRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSParserValue CSSParserValue;


DECLARE_EMLITE_TYPE(CSSParserAtRule, CSSParserRule);

CSSParserAtRule CSSParserAtRule_new0(jb_String * name, jb_Array * prelude);

CSSParserAtRule CSSParserAtRule_new1(jb_String * name, jb_Array * prelude, jb_Array * body);

jb_String CSSParserAtRule_name(const CSSParserAtRule *self);

jb_Array CSSParserAtRule_prelude(const CSSParserAtRule *self);

jb_Array CSSParserAtRule_body(const CSSParserAtRule *self);
