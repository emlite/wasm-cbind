#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct FileSystemReadWriteOptions FileSystemReadWriteOptions;


DECLARE_EMLITE_TYPE(FileSystemReadWriteOptions, em_Val);

long long FileSystemReadWriteOptions_at(const FileSystemReadWriteOptions *self);

void FileSystemReadWriteOptions_set_at(FileSystemReadWriteOptions* self, long long value);
DECLARE_EMLITE_TYPE(FileSystemSyncAccessHandle, em_Val);

long long FileSystemSyncAccessHandle_read0(FileSystemSyncAccessHandle* self , jb_Any * buffer);

long long FileSystemSyncAccessHandle_read1(FileSystemSyncAccessHandle* self , jb_Any * buffer, FileSystemReadWriteOptions * options);

long long FileSystemSyncAccessHandle_write0(FileSystemSyncAccessHandle* self , jb_Any * buffer);

long long FileSystemSyncAccessHandle_write1(FileSystemSyncAccessHandle* self , jb_Any * buffer, FileSystemReadWriteOptions * options);

jb_Undefined FileSystemSyncAccessHandle_truncate(FileSystemSyncAccessHandle* self , long long newSize);

long long FileSystemSyncAccessHandle_getSize(FileSystemSyncAccessHandle* self );

jb_Undefined FileSystemSyncAccessHandle_flush(FileSystemSyncAccessHandle* self );

jb_Undefined FileSystemSyncAccessHandle_close(FileSystemSyncAccessHandle* self );
