#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct StorageBucket StorageBucket;
typedef struct StorageBucketOptions StorageBucketOptions;


DECLARE_EMLITE_TYPE(StorageBucketOptions, em_Val);

bool StorageBucketOptions_persisted(const StorageBucketOptions *self);

void StorageBucketOptions_set_persisted(StorageBucketOptions* self, bool value);

long long StorageBucketOptions_quota(const StorageBucketOptions *self);

void StorageBucketOptions_set_quota(StorageBucketOptions* self, long long value);

jb_Any StorageBucketOptions_expires(const StorageBucketOptions *self);

void StorageBucketOptions_set_expires(StorageBucketOptions* self, jb_Any * value);
DECLARE_EMLITE_TYPE(StorageBucketManager, em_Val);

jb_Promise StorageBucketManager_open0(StorageBucketManager* self , jb_String * name);

jb_Promise StorageBucketManager_open1(StorageBucketManager* self , jb_String * name, StorageBucketOptions * options);

jb_Promise StorageBucketManager_keys(StorageBucketManager* self );

jb_Promise StorageBucketManager_delete_(StorageBucketManager* self , jb_String * name);
