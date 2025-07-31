#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(FileSystemDirectoryReader, em_Val);

jb_Undefined FileSystemDirectoryReader_readEntries0(FileSystemDirectoryReader* self , jb_Function * successCallback);

jb_Undefined FileSystemDirectoryReader_readEntries1(FileSystemDirectoryReader* self , jb_Function * successCallback, jb_Function * errorCallback);
