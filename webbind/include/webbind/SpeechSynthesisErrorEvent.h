#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SpeechSynthesisEvent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(SpeechSynthesisErrorEvent, SpeechSynthesisEvent);

SpeechSynthesisErrorEvent SpeechSynthesisErrorEvent_new(jb_String * type, jb_Any * eventInitDict);

SpeechSynthesisErrorCode SpeechSynthesisErrorEvent_error(const SpeechSynthesisErrorEvent *self);
