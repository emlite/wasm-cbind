#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MimeType MimeType;


DECLARE_EMLITE_TYPE(Plugin, em_Val);

jb_String Plugin_name(const Plugin *self);

jb_String Plugin_description(const Plugin *self);

jb_String Plugin_filename(const Plugin *self);

unsigned long Plugin_length(const Plugin *self);

MimeType Plugin_item(Plugin* self , unsigned long index);

MimeType Plugin_namedItem(Plugin* self , jb_String * name);
