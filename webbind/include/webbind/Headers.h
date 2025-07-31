#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(Headers, em_Val);

Headers Headers_new0();

Headers Headers_new1(jb_Any * init);

jb_Undefined Headers_append(Headers* self , jb_String * name, jb_String * value);

jb_Undefined Headers_delete_(Headers* self , jb_String * name);

jb_String Headers_get(Headers* self , jb_String * name);

jb_Array Headers_getSetCookie(Headers* self );

bool Headers_has(Headers* self , jb_String * name);

jb_Undefined Headers_set(Headers* self , jb_String * name, jb_String * value);
