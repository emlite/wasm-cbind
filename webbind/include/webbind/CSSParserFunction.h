#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSParserValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSParserFunction, CSSParserValue);

CSSParserFunction CSSParserFunction_new(jb_String * name, jb_Array * args);

jb_String CSSParserFunction_name(const CSSParserFunction *self);

jb_Array CSSParserFunction_args(const CSSParserFunction *self);
