#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Blob Blob;


DECLARE_EMLITE_TYPE(FontData, em_Val);

jb_Promise FontData_blob(FontData* self );

jb_String FontData_postscriptName(const FontData *self);

jb_String FontData_fullName(const FontData *self);

jb_String FontData_family(const FontData *self);

jb_String FontData_style(const FontData *self);
