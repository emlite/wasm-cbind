#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct StorageEstimate StorageEstimate;
typedef struct FileSystemDirectoryHandle FileSystemDirectoryHandle;


DECLARE_EMLITE_TYPE(StorageEstimate, em_Val);

long long StorageEstimate_usage(const StorageEstimate *self);

void StorageEstimate_set_usage(StorageEstimate* self, long long value);

long long StorageEstimate_quota(const StorageEstimate *self);

void StorageEstimate_set_quota(StorageEstimate* self, long long value);
DECLARE_EMLITE_TYPE(StorageManager, em_Val);

jb_Promise StorageManager_persisted(StorageManager* self );

jb_Promise StorageManager_persist(StorageManager* self );

jb_Promise StorageManager_estimate(StorageManager* self );

jb_Promise StorageManager_getDirectory(StorageManager* self );
