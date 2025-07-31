#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSStyleValue CSSStyleValue;


DECLARE_EMLITE_TYPE(StylePropertyMapReadOnly, em_Val);

jb_Any StylePropertyMapReadOnly_get(StylePropertyMapReadOnly* self , jb_String * property);

jb_Array StylePropertyMapReadOnly_getAll(StylePropertyMapReadOnly* self , jb_String * property);

bool StylePropertyMapReadOnly_has(StylePropertyMapReadOnly* self , jb_String * property);

unsigned long StylePropertyMapReadOnly_size(const StylePropertyMapReadOnly *self);
