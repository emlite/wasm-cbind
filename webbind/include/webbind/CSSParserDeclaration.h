#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSParserRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSParserValue CSSParserValue;


DECLARE_EMLITE_TYPE(CSSParserDeclaration, CSSParserRule);

CSSParserDeclaration CSSParserDeclaration_new0(jb_String * name);

CSSParserDeclaration CSSParserDeclaration_new1(jb_String * name, jb_Array * body);

jb_String CSSParserDeclaration_name(const CSSParserDeclaration *self);

jb_Array CSSParserDeclaration_body(const CSSParserDeclaration *self);
