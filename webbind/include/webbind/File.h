#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Blob.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(File, Blob);

File File_new0(jb_Array * fileBits, jb_String * fileName);

File File_new1(jb_Array * fileBits, jb_String * fileName, jb_Any * options);

jb_String File_name(const File *self);

long long File_lastModified(const File *self);

jb_String File_webkitRelativePath(const File *self);
