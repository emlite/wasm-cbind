#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Blob Blob;
typedef struct DOMException DOMException;


DECLARE_EMLITE_TYPE(FileReader, EventTarget);

FileReader FileReader_new();

jb_Undefined FileReader_readAsArrayBuffer(FileReader* self , Blob * blob);

jb_Undefined FileReader_readAsBinaryString(FileReader* self , Blob * blob);

jb_Undefined FileReader_readAsText0(FileReader* self , Blob * blob);

jb_Undefined FileReader_readAsText1(FileReader* self , Blob * blob, jb_String * encoding);

jb_Undefined FileReader_readAsDataURL(FileReader* self , Blob * blob);

jb_Undefined FileReader_abort(FileReader* self );

unsigned short FileReader_readyState(const FileReader *self);

jb_Any FileReader_result(const FileReader *self);

DOMException FileReader_error(const FileReader *self);

jb_Any FileReader_onloadstart(const FileReader *self);

void FileReader_set_onloadstart(FileReader* self, jb_Any * value);

jb_Any FileReader_onprogress(const FileReader *self);

void FileReader_set_onprogress(FileReader* self, jb_Any * value);

jb_Any FileReader_onload(const FileReader *self);

void FileReader_set_onload(FileReader* self, jb_Any * value);

jb_Any FileReader_onabort(const FileReader *self);

void FileReader_set_onabort(FileReader* self, jb_Any * value);

jb_Any FileReader_onerror(const FileReader *self);

void FileReader_set_onerror(FileReader* self, jb_Any * value);

jb_Any FileReader_onloadend(const FileReader *self);

void FileReader_set_onloadend(FileReader* self, jb_Any * value);
