#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Blob Blob;


DECLARE_EMLITE_TYPE(PushMessageData, em_Val);

jb_ArrayBuffer PushMessageData_arrayBuffer(PushMessageData* self );

Blob PushMessageData_blob(PushMessageData* self );

jb_Uint8Array PushMessageData_bytes(PushMessageData* self );

jb_Any PushMessageData_json(PushMessageData* self );

jb_String PushMessageData_text(PushMessageData* self );
