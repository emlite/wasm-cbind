#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SpeechSynthesisUtterance SpeechSynthesisUtterance;
typedef struct SpeechSynthesisVoice SpeechSynthesisVoice;


DECLARE_EMLITE_TYPE(SpeechSynthesis, EventTarget);

bool SpeechSynthesis_pending(const SpeechSynthesis *self);

bool SpeechSynthesis_speaking(const SpeechSynthesis *self);

bool SpeechSynthesis_paused(const SpeechSynthesis *self);

jb_Any SpeechSynthesis_onvoiceschanged(const SpeechSynthesis *self);

void SpeechSynthesis_set_onvoiceschanged(SpeechSynthesis* self, jb_Any * value);

jb_Undefined SpeechSynthesis_speak(SpeechSynthesis* self , SpeechSynthesisUtterance * utterance);

jb_Undefined SpeechSynthesis_cancel(SpeechSynthesis* self );

jb_Undefined SpeechSynthesis_pause(SpeechSynthesis* self );

jb_Undefined SpeechSynthesis_resume(SpeechSynthesis* self );

jb_Array SpeechSynthesis_getVoices(SpeechSynthesis* self );
