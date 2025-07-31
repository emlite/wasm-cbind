#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "BackgroundFetchEvent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct BackgroundFetchUIOptions BackgroundFetchUIOptions;


DECLARE_EMLITE_TYPE(BackgroundFetchUIOptions, em_Val);

jb_Array BackgroundFetchUIOptions_icons(const BackgroundFetchUIOptions *self);

void BackgroundFetchUIOptions_set_icons(BackgroundFetchUIOptions* self, jb_Array * value);

jb_String BackgroundFetchUIOptions_title(const BackgroundFetchUIOptions *self);

void BackgroundFetchUIOptions_set_title(BackgroundFetchUIOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(BackgroundFetchUpdateUIEvent, BackgroundFetchEvent);

BackgroundFetchUpdateUIEvent BackgroundFetchUpdateUIEvent_new(jb_String * type, jb_Any * init);

jb_Promise BackgroundFetchUpdateUIEvent_updateUI0(BackgroundFetchUpdateUIEvent* self );

jb_Promise BackgroundFetchUpdateUIEvent_updateUI1(BackgroundFetchUpdateUIEvent* self , BackgroundFetchUIOptions * options);
