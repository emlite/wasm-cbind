#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Blob Blob;


DECLARE_EMLITE_TYPE(BlobEvent, Event);

BlobEvent BlobEvent_new(jb_String * type, jb_Any * eventInitDict);

Blob BlobEvent_data(const BlobEvent *self);

jb_Any BlobEvent_timecode(const BlobEvent *self);
