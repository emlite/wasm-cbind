#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ContentDescription ContentDescription;


DECLARE_EMLITE_TYPE(ContentDescription, em_Val);

jb_String ContentDescription_id(const ContentDescription *self);

void ContentDescription_set_id(ContentDescription* self, jb_String * value);

jb_String ContentDescription_title(const ContentDescription *self);

void ContentDescription_set_title(ContentDescription* self, jb_String * value);

jb_String ContentDescription_description(const ContentDescription *self);

void ContentDescription_set_description(ContentDescription* self, jb_String * value);

ContentCategory ContentDescription_category(const ContentDescription *self);

void ContentDescription_set_category(ContentDescription* self, ContentCategory * value);

jb_Array ContentDescription_icons(const ContentDescription *self);

void ContentDescription_set_icons(ContentDescription* self, jb_Array * value);

jb_String ContentDescription_url(const ContentDescription *self);

void ContentDescription_set_url(ContentDescription* self, jb_String * value);
DECLARE_EMLITE_TYPE(ContentIndex, em_Val);

jb_Promise ContentIndex_add(ContentIndex* self , ContentDescription * description);

jb_Promise ContentIndex_delete_(ContentIndex* self , jb_String * id);

jb_Promise ContentIndex_getAll(ContentIndex* self );
