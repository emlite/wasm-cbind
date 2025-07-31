#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct BackgroundFetchRegistration BackgroundFetchRegistration;


DECLARE_EMLITE_TYPE(BackgroundFetchEvent, ExtendableEvent);

BackgroundFetchEvent BackgroundFetchEvent_new(jb_String * type, jb_Any * init);

BackgroundFetchRegistration BackgroundFetchEvent_registration(const BackgroundFetchEvent *self);
