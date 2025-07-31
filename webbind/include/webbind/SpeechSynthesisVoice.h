#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(SpeechSynthesisVoice, em_Val);

jb_String SpeechSynthesisVoice_voiceURI(const SpeechSynthesisVoice *self);

jb_String SpeechSynthesisVoice_name(const SpeechSynthesisVoice *self);

jb_String SpeechSynthesisVoice_lang(const SpeechSynthesisVoice *self);

bool SpeechSynthesisVoice_localService(const SpeechSynthesisVoice *self);

bool SpeechSynthesisVoice_default_(const SpeechSynthesisVoice *self);
