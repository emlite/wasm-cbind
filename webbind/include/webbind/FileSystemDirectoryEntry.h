#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "FileSystemEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FileSystemDirectoryReader FileSystemDirectoryReader;
typedef struct FileSystemFlags FileSystemFlags;

DECLARE_EMLITE_TYPE(FileSystemDirectoryEntry, FileSystemEntry);

FileSystemDirectoryReader FileSystemDirectoryEntry_createReader(FileSystemDirectoryEntry* self );

jb_Undefined FileSystemDirectoryEntry_getFile0(FileSystemDirectoryEntry* self );

jb_Undefined FileSystemDirectoryEntry_getFile1(FileSystemDirectoryEntry* self , jb_String * path);

jb_Undefined FileSystemDirectoryEntry_getFile2(FileSystemDirectoryEntry* self , jb_String * path, FileSystemFlags * options);

jb_Undefined FileSystemDirectoryEntry_getFile3(FileSystemDirectoryEntry* self , jb_String * path, FileSystemFlags * options, jb_Function * successCallback);

jb_Undefined FileSystemDirectoryEntry_getFile4(FileSystemDirectoryEntry* self , jb_String * path, FileSystemFlags * options, jb_Function * successCallback, jb_Function * errorCallback);

jb_Undefined FileSystemDirectoryEntry_getDirectory0(FileSystemDirectoryEntry* self );

jb_Undefined FileSystemDirectoryEntry_getDirectory1(FileSystemDirectoryEntry* self , jb_String * path);

jb_Undefined FileSystemDirectoryEntry_getDirectory2(FileSystemDirectoryEntry* self , jb_String * path, FileSystemFlags * options);

jb_Undefined FileSystemDirectoryEntry_getDirectory3(FileSystemDirectoryEntry* self , jb_String * path, FileSystemFlags * options, jb_Function * successCallback);

jb_Undefined FileSystemDirectoryEntry_getDirectory4(FileSystemDirectoryEntry* self , jb_String * path, FileSystemFlags * options, jb_Function * successCallback, jb_Function * errorCallback);

#ifdef __cplusplus
}
#endif
