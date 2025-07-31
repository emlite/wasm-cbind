#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PromptResponseObject PromptResponseObject;


DECLARE_EMLITE_TYPE(PromptResponseObject, em_Val);

AppBannerPromptOutcome PromptResponseObject_userChoice(const PromptResponseObject *self);

void PromptResponseObject_set_userChoice(PromptResponseObject* self, AppBannerPromptOutcome * value);
DECLARE_EMLITE_TYPE(BeforeInstallPromptEvent, Event);

BeforeInstallPromptEvent BeforeInstallPromptEvent_new0(jb_String * type);

BeforeInstallPromptEvent BeforeInstallPromptEvent_new1(jb_String * type, jb_Any * eventInitDict);

jb_Promise BeforeInstallPromptEvent_prompt(BeforeInstallPromptEvent* self );
