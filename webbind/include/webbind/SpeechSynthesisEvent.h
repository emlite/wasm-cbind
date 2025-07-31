#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SpeechSynthesisUtterance SpeechSynthesisUtterance;


DECLARE_EMLITE_TYPE(SpeechSynthesisEvent, Event);

SpeechSynthesisEvent SpeechSynthesisEvent_new(jb_String * type, jb_Any * eventInitDict);

SpeechSynthesisUtterance SpeechSynthesisEvent_utterance(const SpeechSynthesisEvent *self);

unsigned long SpeechSynthesisEvent_charIndex(const SpeechSynthesisEvent *self);

unsigned long SpeechSynthesisEvent_charLength(const SpeechSynthesisEvent *self);

float SpeechSynthesisEvent_elapsedTime(const SpeechSynthesisEvent *self);

jb_String SpeechSynthesisEvent_name(const SpeechSynthesisEvent *self);
