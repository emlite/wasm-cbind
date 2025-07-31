#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(URLSearchParams, em_Val);

URLSearchParams URLSearchParams_new0();

URLSearchParams URLSearchParams_new1(jb_Any * init);

unsigned long URLSearchParams_size(const URLSearchParams *self);

jb_Undefined URLSearchParams_append(URLSearchParams* self , jb_String * name, jb_String * value);

jb_Undefined URLSearchParams_delete_0(URLSearchParams* self , jb_String * name);

jb_Undefined URLSearchParams_delete_1(URLSearchParams* self , jb_String * name, jb_String * value);

jb_String URLSearchParams_get(URLSearchParams* self , jb_String * name);

jb_Array URLSearchParams_getAll(URLSearchParams* self , jb_String * name);

bool URLSearchParams_has0(URLSearchParams* self , jb_String * name);

bool URLSearchParams_has1(URLSearchParams* self , jb_String * name, jb_String * value);

jb_Undefined URLSearchParams_set(URLSearchParams* self , jb_String * name, jb_String * value);

jb_Undefined URLSearchParams_sort(URLSearchParams* self );
