#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(SpeechRecognitionPhrase, em_Val);

SpeechRecognitionPhrase SpeechRecognitionPhrase_new0(jb_String * phrase);

SpeechRecognitionPhrase SpeechRecognitionPhrase_new1(jb_String * phrase, float boost);

jb_String SpeechRecognitionPhrase_phrase(const SpeechRecognitionPhrase *self);

float SpeechRecognitionPhrase_boost(const SpeechRecognitionPhrase *self);
