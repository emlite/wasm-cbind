#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SpeechRecognitionAlternative SpeechRecognitionAlternative;


DECLARE_EMLITE_TYPE(SpeechRecognitionResult, em_Val);

unsigned long SpeechRecognitionResult_length(const SpeechRecognitionResult *self);

SpeechRecognitionAlternative SpeechRecognitionResult_item(SpeechRecognitionResult* self , unsigned long index);

bool SpeechRecognitionResult_isFinal(const SpeechRecognitionResult *self);
