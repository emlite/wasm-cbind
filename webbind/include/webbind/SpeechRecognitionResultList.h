#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SpeechRecognitionResult SpeechRecognitionResult;


DECLARE_EMLITE_TYPE(SpeechRecognitionResultList, em_Val);

unsigned long SpeechRecognitionResultList_length(const SpeechRecognitionResultList *self);

SpeechRecognitionResult SpeechRecognitionResultList_item(SpeechRecognitionResultList* self , unsigned long index);
