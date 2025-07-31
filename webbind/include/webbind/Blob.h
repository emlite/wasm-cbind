#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Blob Blob;
typedef struct ReadableStream ReadableStream;


DECLARE_EMLITE_TYPE(Blob, em_Val);

Blob Blob_new0();

Blob Blob_new1(jb_Array * blobParts);

Blob Blob_new2(jb_Array * blobParts, jb_Any * options);

long long Blob_size(const Blob *self);

jb_String Blob_type(const Blob *self);

Blob Blob_slice0(Blob* self );

Blob Blob_slice1(Blob* self , long long start);

Blob Blob_slice2(Blob* self , long long start, long long end);

Blob Blob_slice3(Blob* self , long long start, long long end, jb_String * contentType);

ReadableStream Blob_stream(Blob* self );

jb_Promise Blob_text(Blob* self );

jb_Promise Blob_arrayBuffer(Blob* self );

jb_Promise Blob_bytes(Blob* self );
