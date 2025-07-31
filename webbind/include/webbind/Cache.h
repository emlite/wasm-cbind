#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "BackgroundFetchRegistration.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Response Response;
typedef struct Request Request;


DECLARE_EMLITE_TYPE(Cache, em_Val);

jb_Promise Cache_match0(Cache* self , jb_Any * request);

jb_Promise Cache_match1(Cache* self , jb_Any * request, CacheQueryOptions * options);

jb_Promise Cache_matchAll0(Cache* self );

jb_Promise Cache_matchAll1(Cache* self , jb_Any * request);

jb_Promise Cache_matchAll2(Cache* self , jb_Any * request, CacheQueryOptions * options);

jb_Promise Cache_add(Cache* self , jb_Any * request);

jb_Promise Cache_addAll(Cache* self , jb_Array * requests);

jb_Promise Cache_put(Cache* self , jb_Any * request, Response * response);

jb_Promise Cache_delete_0(Cache* self , jb_Any * request);

jb_Promise Cache_delete_1(Cache* self , jb_Any * request, CacheQueryOptions * options);

jb_Promise Cache_keys0(Cache* self );

jb_Promise Cache_keys1(Cache* self , jb_Any * request);

jb_Promise Cache_keys2(Cache* self , jb_Any * request, CacheQueryOptions * options);
