#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "FileSystemHandle.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct File File;
typedef struct FileSystemWritableFileStream FileSystemWritableFileStream;
typedef struct FileSystemCreateWritableOptions FileSystemCreateWritableOptions;
typedef struct FileSystemSyncAccessHandle FileSystemSyncAccessHandle;


DECLARE_EMLITE_TYPE(FileSystemCreateWritableOptions, em_Val);

bool FileSystemCreateWritableOptions_keepExistingData(const FileSystemCreateWritableOptions *self);

void FileSystemCreateWritableOptions_set_keepExistingData(FileSystemCreateWritableOptions* self, bool value);
DECLARE_EMLITE_TYPE(FileSystemFileHandle, FileSystemHandle);

jb_Promise FileSystemFileHandle_getFile(FileSystemFileHandle* self );

jb_Promise FileSystemFileHandle_createWritable0(FileSystemFileHandle* self );

jb_Promise FileSystemFileHandle_createWritable1(FileSystemFileHandle* self , FileSystemCreateWritableOptions * options);

jb_Promise FileSystemFileHandle_createSyncAccessHandle(FileSystemFileHandle* self );
