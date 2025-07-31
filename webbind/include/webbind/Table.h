#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(Table, em_Val);

Table Table_new0(jb_Any * descriptor);

Table Table_new1(jb_Any * descriptor, jb_Any * value);

unsigned long Table_grow0(Table* self , unsigned long delta);

unsigned long Table_grow1(Table* self , unsigned long delta, jb_Any * value);

jb_Any Table_get(Table* self , unsigned long index);

jb_Undefined Table_set0(Table* self , unsigned long index);

jb_Undefined Table_set1(Table* self , unsigned long index, jb_Any * value);

unsigned long Table_length(const Table *self);
