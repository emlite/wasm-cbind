#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Plugin Plugin;


DECLARE_EMLITE_TYPE(MimeType, em_Val);

jb_String MimeType_type(const MimeType *self);

jb_String MimeType_description(const MimeType *self);

jb_String MimeType_suffixes(const MimeType *self);

Plugin MimeType_enabledPlugin(const MimeType *self);
