#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct File File;


DECLARE_EMLITE_TYPE(FileList, em_Val);

File FileList_item(FileList* self , unsigned long index);

unsigned long FileList_length(const FileList *self);
