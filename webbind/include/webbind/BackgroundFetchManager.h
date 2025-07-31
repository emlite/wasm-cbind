#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct BackgroundFetchRegistration BackgroundFetchRegistration;
typedef struct BackgroundFetchOptions BackgroundFetchOptions;


DECLARE_EMLITE_TYPE(BackgroundFetchOptions, em_Val);

long long BackgroundFetchOptions_downloadTotal(const BackgroundFetchOptions *self);

void BackgroundFetchOptions_set_downloadTotal(BackgroundFetchOptions* self, long long value);
DECLARE_EMLITE_TYPE(BackgroundFetchManager, em_Val);

jb_Promise BackgroundFetchManager_fetch0(BackgroundFetchManager* self , jb_String * id, jb_Any * requests);

jb_Promise BackgroundFetchManager_fetch1(BackgroundFetchManager* self , jb_String * id, jb_Any * requests, BackgroundFetchOptions * options);

jb_Promise BackgroundFetchManager_get(BackgroundFetchManager* self , jb_String * id);

jb_Promise BackgroundFetchManager_getIds(BackgroundFetchManager* self );
