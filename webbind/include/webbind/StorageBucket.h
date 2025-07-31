#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "StorageManager.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct IDBFactory IDBFactory;
typedef struct CacheStorage CacheStorage;
typedef struct FileSystemDirectoryHandle FileSystemDirectoryHandle;


DECLARE_EMLITE_TYPE(StorageBucket, em_Val);

jb_String StorageBucket_name(const StorageBucket *self);

jb_Promise StorageBucket_persist(StorageBucket* self );

jb_Promise StorageBucket_persisted(StorageBucket* self );

jb_Promise StorageBucket_estimate(StorageBucket* self );

jb_Promise StorageBucket_setExpires(StorageBucket* self , jb_Any * expires);

jb_Promise StorageBucket_expires(StorageBucket* self );

IDBFactory StorageBucket_indexedDB(const StorageBucket *self);

CacheStorage StorageBucket_caches(const StorageBucket *self);

jb_Promise StorageBucket_getDirectory(StorageBucket* self );
