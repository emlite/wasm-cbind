#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(Storage, em_Val);

unsigned long Storage_length(const Storage *self);

jb_String Storage_key(Storage* self , unsigned long index);

jb_String Storage_getItem(Storage* self , jb_String * key);

jb_Undefined Storage_setItem(Storage* self , jb_String * key, jb_String * value);

jb_Undefined Storage_removeItem(Storage* self , jb_String * key);

jb_Undefined Storage_clear(Storage* self );
