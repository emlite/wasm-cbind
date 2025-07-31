#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "FileSystemHandle.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct FileSystemFileHandle FileSystemFileHandle;
typedef struct FileSystemGetFileOptions FileSystemGetFileOptions;
typedef struct FileSystemDirectoryHandle FileSystemDirectoryHandle;
typedef struct FileSystemGetDirectoryOptions FileSystemGetDirectoryOptions;
typedef struct FileSystemRemoveOptions FileSystemRemoveOptions;


DECLARE_EMLITE_TYPE(FileSystemGetFileOptions, em_Val);

bool FileSystemGetFileOptions_create(const FileSystemGetFileOptions *self);

void FileSystemGetFileOptions_set_create(FileSystemGetFileOptions* self, bool value);
DECLARE_EMLITE_TYPE(FileSystemGetDirectoryOptions, em_Val);

bool FileSystemGetDirectoryOptions_create(const FileSystemGetDirectoryOptions *self);

void FileSystemGetDirectoryOptions_set_create(FileSystemGetDirectoryOptions* self, bool value);
DECLARE_EMLITE_TYPE(FileSystemRemoveOptions, em_Val);

bool FileSystemRemoveOptions_recursive(const FileSystemRemoveOptions *self);

void FileSystemRemoveOptions_set_recursive(FileSystemRemoveOptions* self, bool value);
DECLARE_EMLITE_TYPE(FileSystemDirectoryHandle, FileSystemHandle);

jb_Promise FileSystemDirectoryHandle_getFileHandle0(FileSystemDirectoryHandle* self , jb_String * name);

jb_Promise FileSystemDirectoryHandle_getFileHandle1(FileSystemDirectoryHandle* self , jb_String * name, FileSystemGetFileOptions * options);

jb_Promise FileSystemDirectoryHandle_getDirectoryHandle0(FileSystemDirectoryHandle* self , jb_String * name);

jb_Promise FileSystemDirectoryHandle_getDirectoryHandle1(FileSystemDirectoryHandle* self , jb_String * name, FileSystemGetDirectoryOptions * options);

jb_Promise FileSystemDirectoryHandle_removeEntry0(FileSystemDirectoryHandle* self , jb_String * name);

jb_Promise FileSystemDirectoryHandle_removeEntry1(FileSystemDirectoryHandle* self , jb_String * name, FileSystemRemoveOptions * options);

jb_Promise FileSystemDirectoryHandle_resolve(FileSystemDirectoryHandle* self , FileSystemHandle * possibleDescendant);
