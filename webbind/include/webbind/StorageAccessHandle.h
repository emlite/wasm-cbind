#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "StorageManager.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Storage Storage;
typedef struct IDBFactory IDBFactory;
typedef struct LockManager LockManager;
typedef struct CacheStorage CacheStorage;
typedef struct FileSystemDirectoryHandle FileSystemDirectoryHandle;
typedef struct BroadcastChannel BroadcastChannel;
typedef struct SharedWorker SharedWorker;


DECLARE_EMLITE_TYPE(StorageAccessHandle, em_Val);

Storage StorageAccessHandle_sessionStorage(const StorageAccessHandle *self);

Storage StorageAccessHandle_localStorage(const StorageAccessHandle *self);

IDBFactory StorageAccessHandle_indexedDB(const StorageAccessHandle *self);

LockManager StorageAccessHandle_locks(const StorageAccessHandle *self);

CacheStorage StorageAccessHandle_caches(const StorageAccessHandle *self);

jb_Promise StorageAccessHandle_getDirectory(StorageAccessHandle* self );

jb_Promise StorageAccessHandle_estimate(StorageAccessHandle* self );

jb_String StorageAccessHandle_createObjectURL(StorageAccessHandle* self , jb_Any * obj);

jb_Undefined StorageAccessHandle_revokeObjectURL(StorageAccessHandle* self , jb_String * url);

BroadcastChannel StorageAccessHandle_BroadcastChannel_(StorageAccessHandle* self , jb_String * name);

SharedWorker StorageAccessHandle_SharedWorker_0(StorageAccessHandle* self , jb_String * scriptURL);

SharedWorker StorageAccessHandle_SharedWorker_1(StorageAccessHandle* self , jb_String * scriptURL, jb_Any * options);
