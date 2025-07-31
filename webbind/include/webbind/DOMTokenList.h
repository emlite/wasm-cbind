#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(DOMTokenList, em_Val);

unsigned long DOMTokenList_length(const DOMTokenList *self);

jb_String DOMTokenList_item(DOMTokenList* self , unsigned long index);

bool DOMTokenList_contains(DOMTokenList* self , jb_String * token);

jb_Undefined DOMTokenList_add(DOMTokenList* self , jb_String * tokens);

jb_Undefined DOMTokenList_remove(DOMTokenList* self , jb_String * tokens);

bool DOMTokenList_toggle0(DOMTokenList* self , jb_String * token);

bool DOMTokenList_toggle1(DOMTokenList* self , jb_String * token, bool force);

bool DOMTokenList_replace(DOMTokenList* self , jb_String * token, jb_String * newToken);

bool DOMTokenList_supports(DOMTokenList* self , jb_String * token);

jb_String DOMTokenList_value(const DOMTokenList *self);

void DOMTokenList_set_value(DOMTokenList* self, jb_String * value);
