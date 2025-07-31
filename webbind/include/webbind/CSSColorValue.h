#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSStyleValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSColorValue, CSSStyleValue);

jb_Any CSSColorValue_parse(CSSColorValue* self , jb_String * cssText);
