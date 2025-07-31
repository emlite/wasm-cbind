#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSStyleValue CSSStyleValue;


DECLARE_EMLITE_TYPE(CSSStyleValue, em_Val);

CSSStyleValue CSSStyleValue_parse(CSSStyleValue* self , jb_String * property, jb_String * cssText);

jb_Array CSSStyleValue_parseAll(CSSStyleValue* self , jb_String * property, jb_String * cssText);
