#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct FileSystemHandle FileSystemHandle;
typedef struct FileSystemHandlePermissionDescriptor FileSystemHandlePermissionDescriptor;


DECLARE_EMLITE_TYPE(FileSystemHandlePermissionDescriptor, em_Val);

FileSystemPermissionMode FileSystemHandlePermissionDescriptor_mode(const FileSystemHandlePermissionDescriptor *self);

void FileSystemHandlePermissionDescriptor_set_mode(FileSystemHandlePermissionDescriptor* self, FileSystemPermissionMode * value);
DECLARE_EMLITE_TYPE(FileSystemHandle, em_Val);

FileSystemHandleKind FileSystemHandle_kind(const FileSystemHandle *self);

jb_String FileSystemHandle_name(const FileSystemHandle *self);

jb_Promise FileSystemHandle_isSameEntry(FileSystemHandle* self , FileSystemHandle * other);

jb_Promise FileSystemHandle_queryPermission0(FileSystemHandle* self );

jb_Promise FileSystemHandle_queryPermission1(FileSystemHandle* self , FileSystemHandlePermissionDescriptor * descriptor);

jb_Promise FileSystemHandle_requestPermission0(FileSystemHandle* self );

jb_Promise FileSystemHandle_requestPermission1(FileSystemHandle* self , FileSystemHandlePermissionDescriptor * descriptor);
