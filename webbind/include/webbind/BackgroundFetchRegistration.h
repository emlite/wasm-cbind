#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct BackgroundFetchRecord BackgroundFetchRecord;
typedef struct CacheQueryOptions CacheQueryOptions;


DECLARE_EMLITE_TYPE(CacheQueryOptions, em_Val);

bool CacheQueryOptions_ignoreSearch(const CacheQueryOptions *self);

void CacheQueryOptions_set_ignoreSearch(CacheQueryOptions* self, bool value);

bool CacheQueryOptions_ignoreMethod(const CacheQueryOptions *self);

void CacheQueryOptions_set_ignoreMethod(CacheQueryOptions* self, bool value);

bool CacheQueryOptions_ignoreVary(const CacheQueryOptions *self);

void CacheQueryOptions_set_ignoreVary(CacheQueryOptions* self, bool value);
DECLARE_EMLITE_TYPE(BackgroundFetchRegistration, EventTarget);

jb_String BackgroundFetchRegistration_id(const BackgroundFetchRegistration *self);

long long BackgroundFetchRegistration_uploadTotal(const BackgroundFetchRegistration *self);

long long BackgroundFetchRegistration_uploaded(const BackgroundFetchRegistration *self);

long long BackgroundFetchRegistration_downloadTotal(const BackgroundFetchRegistration *self);

long long BackgroundFetchRegistration_downloaded(const BackgroundFetchRegistration *self);

BackgroundFetchResult BackgroundFetchRegistration_result(const BackgroundFetchRegistration *self);

BackgroundFetchFailureReason BackgroundFetchRegistration_failureReason(const BackgroundFetchRegistration *self);

bool BackgroundFetchRegistration_recordsAvailable(const BackgroundFetchRegistration *self);

jb_Any BackgroundFetchRegistration_onprogress(const BackgroundFetchRegistration *self);

void BackgroundFetchRegistration_set_onprogress(BackgroundFetchRegistration* self, jb_Any * value);

jb_Promise BackgroundFetchRegistration_abort(BackgroundFetchRegistration* self );

jb_Promise BackgroundFetchRegistration_match0(BackgroundFetchRegistration* self , jb_Any * request);

jb_Promise BackgroundFetchRegistration_match1(BackgroundFetchRegistration* self , jb_Any * request, CacheQueryOptions * options);

jb_Promise BackgroundFetchRegistration_matchAll0(BackgroundFetchRegistration* self );

jb_Promise BackgroundFetchRegistration_matchAll1(BackgroundFetchRegistration* self , jb_Any * request);

jb_Promise BackgroundFetchRegistration_matchAll2(BackgroundFetchRegistration* self , jb_Any * request, CacheQueryOptions * options);
