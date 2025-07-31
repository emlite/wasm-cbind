#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MultiCacheQueryOptions MultiCacheQueryOptions;
typedef struct Cache Cache;


DECLARE_EMLITE_TYPE(MultiCacheQueryOptions, em_Val);

jb_String MultiCacheQueryOptions_cacheName(const MultiCacheQueryOptions *self);

void MultiCacheQueryOptions_set_cacheName(MultiCacheQueryOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(CacheStorage, em_Val);

jb_Promise CacheStorage_match0(CacheStorage* self , jb_Any * request);

jb_Promise CacheStorage_match1(CacheStorage* self , jb_Any * request, MultiCacheQueryOptions * options);

jb_Promise CacheStorage_has(CacheStorage* self , jb_String * cacheName);

jb_Promise CacheStorage_open(CacheStorage* self , jb_String * cacheName);

jb_Promise CacheStorage_delete_(CacheStorage* self , jb_String * cacheName);

jb_Promise CacheStorage_keys(CacheStorage* self );
