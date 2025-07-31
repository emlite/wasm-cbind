#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Storage Storage;


DECLARE_EMLITE_TYPE(StorageEvent, Event);

StorageEvent StorageEvent_new0(jb_String * type);

StorageEvent StorageEvent_new1(jb_String * type, jb_Any * eventInitDict);

jb_String StorageEvent_key(const StorageEvent *self);

jb_String StorageEvent_oldValue(const StorageEvent *self);

jb_String StorageEvent_newValue(const StorageEvent *self);

jb_String StorageEvent_url(const StorageEvent *self);

Storage StorageEvent_storageArea(const StorageEvent *self);

jb_Undefined StorageEvent_initStorageEvent0(StorageEvent* self , jb_String * type);

jb_Undefined StorageEvent_initStorageEvent1(StorageEvent* self , jb_String * type, bool bubbles);

jb_Undefined StorageEvent_initStorageEvent2(StorageEvent* self , jb_String * type, bool bubbles, bool cancelable);

jb_Undefined StorageEvent_initStorageEvent3(StorageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_String * key);

jb_Undefined StorageEvent_initStorageEvent4(StorageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_String * key, jb_String * oldValue);

jb_Undefined StorageEvent_initStorageEvent5(StorageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_String * key, jb_String * oldValue, jb_String * newValue);

jb_Undefined StorageEvent_initStorageEvent6(StorageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_String * key, jb_String * oldValue, jb_String * newValue, jb_String * url);

jb_Undefined StorageEvent_initStorageEvent7(StorageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_String * key, jb_String * oldValue, jb_String * newValue, jb_String * url, Storage * storageArea);
