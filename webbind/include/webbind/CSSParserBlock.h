#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSParserValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSParserBlock, CSSParserValue);

CSSParserBlock CSSParserBlock_new(jb_String * name, jb_Array * body);

jb_String CSSParserBlock_name(const CSSParserBlock *self);

jb_Array CSSParserBlock_body(const CSSParserBlock *self);
