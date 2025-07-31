#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PushSubscriptionOptions PushSubscriptionOptions;
typedef struct PushSubscriptionJSON PushSubscriptionJSON;


DECLARE_EMLITE_TYPE(PushSubscriptionJSON, em_Val);

jb_String PushSubscriptionJSON_endpoint(const PushSubscriptionJSON *self);

void PushSubscriptionJSON_set_endpoint(PushSubscriptionJSON* self, jb_String * value);

jb_Any PushSubscriptionJSON_expirationTime(const PushSubscriptionJSON *self);

void PushSubscriptionJSON_set_expirationTime(PushSubscriptionJSON* self, jb_Any * value);

jb_Object PushSubscriptionJSON_keys(const PushSubscriptionJSON *self);

void PushSubscriptionJSON_set_keys(PushSubscriptionJSON* self, jb_Object * value);
DECLARE_EMLITE_TYPE(PushSubscription, em_Val);

jb_String PushSubscription_endpoint(const PushSubscription *self);

jb_Any PushSubscription_expirationTime(const PushSubscription *self);

PushSubscriptionOptions PushSubscription_options(const PushSubscription *self);

jb_ArrayBuffer PushSubscription_getKey(PushSubscription* self , PushEncryptionKeyName * name);

jb_Promise PushSubscription_unsubscribe(PushSubscription* self );

PushSubscriptionJSON PushSubscription_toJSON(PushSubscription* self );
