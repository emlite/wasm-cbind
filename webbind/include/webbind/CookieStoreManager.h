#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CookieStore.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CookieStoreManager, em_Val);

jb_Promise CookieStoreManager_subscribe(CookieStoreManager* self , jb_Array * subscriptions);

jb_Promise CookieStoreManager_getSubscriptions(CookieStoreManager* self );

jb_Promise CookieStoreManager_unsubscribe(CookieStoreManager* self , jb_Array * subscriptions);
