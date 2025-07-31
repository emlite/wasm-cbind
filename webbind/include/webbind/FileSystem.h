#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct FileSystemDirectoryEntry FileSystemDirectoryEntry;


DECLARE_EMLITE_TYPE(FileSystem, em_Val);

jb_String FileSystem_name(const FileSystem *self);

FileSystemDirectoryEntry FileSystem_root(const FileSystem *self);
