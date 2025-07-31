#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(DOMStringList, em_Val);

unsigned long DOMStringList_length(const DOMStringList *self);

jb_String DOMStringList_item(DOMStringList* self , unsigned long index);

bool DOMStringList_contains(DOMStringList* self , jb_String * string);
