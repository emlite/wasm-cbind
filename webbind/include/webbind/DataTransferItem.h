#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct File File;
typedef struct FileSystemEntry FileSystemEntry;
typedef struct FileSystemHandle FileSystemHandle;


DECLARE_EMLITE_TYPE(DataTransferItem, em_Val);

jb_String DataTransferItem_kind(const DataTransferItem *self);

jb_String DataTransferItem_type(const DataTransferItem *self);

jb_Undefined DataTransferItem_getAsString(DataTransferItem* self , jb_Any * callback);

File DataTransferItem_getAsFile(DataTransferItem* self );

FileSystemEntry DataTransferItem_webkitGetAsEntry(DataTransferItem* self );

jb_Promise DataTransferItem_getAsFileSystemHandle(DataTransferItem* self );
