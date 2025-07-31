#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SpeechGrammarList SpeechGrammarList;
typedef struct SpeechRecognitionPhraseList SpeechRecognitionPhraseList;
typedef struct MediaStreamTrack MediaStreamTrack;
typedef struct SpeechRecognitionOptions SpeechRecognitionOptions;


DECLARE_EMLITE_TYPE(SpeechRecognitionOptions, em_Val);

jb_Array SpeechRecognitionOptions_langs(const SpeechRecognitionOptions *self);

void SpeechRecognitionOptions_set_langs(SpeechRecognitionOptions* self, jb_Array * value);

bool SpeechRecognitionOptions_processLocally(const SpeechRecognitionOptions *self);

void SpeechRecognitionOptions_set_processLocally(SpeechRecognitionOptions* self, bool value);
DECLARE_EMLITE_TYPE(SpeechRecognition, EventTarget);

SpeechRecognition SpeechRecognition_new();

SpeechGrammarList SpeechRecognition_grammars(const SpeechRecognition *self);

void SpeechRecognition_set_grammars(SpeechRecognition* self, SpeechGrammarList * value);

jb_String SpeechRecognition_lang(const SpeechRecognition *self);

void SpeechRecognition_set_lang(SpeechRecognition* self, jb_String * value);

bool SpeechRecognition_continuous(const SpeechRecognition *self);

void SpeechRecognition_set_continuous(SpeechRecognition* self, bool value);

bool SpeechRecognition_interimResults(const SpeechRecognition *self);

void SpeechRecognition_set_interimResults(SpeechRecognition* self, bool value);

unsigned long SpeechRecognition_maxAlternatives(const SpeechRecognition *self);

void SpeechRecognition_set_maxAlternatives(SpeechRecognition* self, unsigned long value);

bool SpeechRecognition_processLocally(const SpeechRecognition *self);

void SpeechRecognition_set_processLocally(SpeechRecognition* self, bool value);

jb_Array SpeechRecognition_phrases(const SpeechRecognition *self);

void SpeechRecognition_set_phrases(SpeechRecognition* self, jb_Array * value);

jb_Undefined SpeechRecognition_start(SpeechRecognition* self , MediaStreamTrack * audioTrack);

jb_Undefined SpeechRecognition_stop(SpeechRecognition* self );

jb_Undefined SpeechRecognition_abort(SpeechRecognition* self );

jb_Promise SpeechRecognition_available(SpeechRecognition* self , SpeechRecognitionOptions * options);

jb_Promise SpeechRecognition_install(SpeechRecognition* self , SpeechRecognitionOptions * options);

jb_Any SpeechRecognition_onaudiostart(const SpeechRecognition *self);

void SpeechRecognition_set_onaudiostart(SpeechRecognition* self, jb_Any * value);

jb_Any SpeechRecognition_onsoundstart(const SpeechRecognition *self);

void SpeechRecognition_set_onsoundstart(SpeechRecognition* self, jb_Any * value);

jb_Any SpeechRecognition_onspeechstart(const SpeechRecognition *self);

void SpeechRecognition_set_onspeechstart(SpeechRecognition* self, jb_Any * value);

jb_Any SpeechRecognition_onspeechend(const SpeechRecognition *self);

void SpeechRecognition_set_onspeechend(SpeechRecognition* self, jb_Any * value);

jb_Any SpeechRecognition_onsoundend(const SpeechRecognition *self);

void SpeechRecognition_set_onsoundend(SpeechRecognition* self, jb_Any * value);

jb_Any SpeechRecognition_onaudioend(const SpeechRecognition *self);

void SpeechRecognition_set_onaudioend(SpeechRecognition* self, jb_Any * value);

jb_Any SpeechRecognition_onresult(const SpeechRecognition *self);

void SpeechRecognition_set_onresult(SpeechRecognition* self, jb_Any * value);

jb_Any SpeechRecognition_onnomatch(const SpeechRecognition *self);

void SpeechRecognition_set_onnomatch(SpeechRecognition* self, jb_Any * value);

jb_Any SpeechRecognition_onerror(const SpeechRecognition *self);

void SpeechRecognition_set_onerror(SpeechRecognition* self, jb_Any * value);

jb_Any SpeechRecognition_onstart(const SpeechRecognition *self);

void SpeechRecognition_set_onstart(SpeechRecognition* self, jb_Any * value);

jb_Any SpeechRecognition_onend(const SpeechRecognition *self);

void SpeechRecognition_set_onend(SpeechRecognition* self, jb_Any * value);
