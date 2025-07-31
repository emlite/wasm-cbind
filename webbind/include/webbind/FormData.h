#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Blob Blob;
typedef struct HTMLElement HTMLElement;
typedef struct HTMLFormElement HTMLFormElement;


DECLARE_EMLITE_TYPE(FormData, em_Val);

FormData FormData_new0();

FormData FormData_new1(HTMLFormElement * form);

FormData FormData_new2(HTMLFormElement * form, HTMLElement * submitter);

jb_Undefined FormData_append0(FormData* self , jb_String * name, Blob * blobValue);

jb_Undefined FormData_append1(FormData* self , jb_String * name, Blob * blobValue, jb_String * filename);

jb_Undefined FormData_delete_(FormData* self , jb_String * name);

jb_Any FormData_get(FormData* self , jb_String * name);

jb_Array FormData_getAll(FormData* self , jb_String * name);

bool FormData_has(FormData* self , jb_String * name);

jb_Undefined FormData_set0(FormData* self , jb_String * name, Blob * blobValue);

jb_Undefined FormData_set1(FormData* self , jb_String * name, Blob * blobValue, jb_String * filename);
