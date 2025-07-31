#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(SpeechRecognitionAlternative, em_Val);

jb_String SpeechRecognitionAlternative_transcript(const SpeechRecognitionAlternative *self);

float SpeechRecognitionAlternative_confidence(const SpeechRecognitionAlternative *self);
