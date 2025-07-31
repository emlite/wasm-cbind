#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(SpeechRecognitionErrorEvent, Event);

SpeechRecognitionErrorEvent SpeechRecognitionErrorEvent_new(jb_String * type, jb_Any * eventInitDict);

SpeechRecognitionErrorCode SpeechRecognitionErrorEvent_error(const SpeechRecognitionErrorEvent *self);

jb_String SpeechRecognitionErrorEvent_message(const SpeechRecognitionErrorEvent *self);
