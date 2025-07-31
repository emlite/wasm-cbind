#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SpeechSynthesisVoice SpeechSynthesisVoice;


DECLARE_EMLITE_TYPE(SpeechSynthesisUtterance, EventTarget);

SpeechSynthesisUtterance SpeechSynthesisUtterance_new0();

SpeechSynthesisUtterance SpeechSynthesisUtterance_new1(jb_String * text);

jb_String SpeechSynthesisUtterance_text(const SpeechSynthesisUtterance *self);

void SpeechSynthesisUtterance_set_text(SpeechSynthesisUtterance* self, jb_String * value);

jb_String SpeechSynthesisUtterance_lang(const SpeechSynthesisUtterance *self);

void SpeechSynthesisUtterance_set_lang(SpeechSynthesisUtterance* self, jb_String * value);

SpeechSynthesisVoice SpeechSynthesisUtterance_voice(const SpeechSynthesisUtterance *self);

void SpeechSynthesisUtterance_set_voice(SpeechSynthesisUtterance* self, SpeechSynthesisVoice * value);

float SpeechSynthesisUtterance_volume(const SpeechSynthesisUtterance *self);

void SpeechSynthesisUtterance_set_volume(SpeechSynthesisUtterance* self, float value);

float SpeechSynthesisUtterance_rate(const SpeechSynthesisUtterance *self);

void SpeechSynthesisUtterance_set_rate(SpeechSynthesisUtterance* self, float value);

float SpeechSynthesisUtterance_pitch(const SpeechSynthesisUtterance *self);

void SpeechSynthesisUtterance_set_pitch(SpeechSynthesisUtterance* self, float value);

jb_Any SpeechSynthesisUtterance_onstart(const SpeechSynthesisUtterance *self);

void SpeechSynthesisUtterance_set_onstart(SpeechSynthesisUtterance* self, jb_Any * value);

jb_Any SpeechSynthesisUtterance_onend(const SpeechSynthesisUtterance *self);

void SpeechSynthesisUtterance_set_onend(SpeechSynthesisUtterance* self, jb_Any * value);

jb_Any SpeechSynthesisUtterance_onerror(const SpeechSynthesisUtterance *self);

void SpeechSynthesisUtterance_set_onerror(SpeechSynthesisUtterance* self, jb_Any * value);

jb_Any SpeechSynthesisUtterance_onpause(const SpeechSynthesisUtterance *self);

void SpeechSynthesisUtterance_set_onpause(SpeechSynthesisUtterance* self, jb_Any * value);

jb_Any SpeechSynthesisUtterance_onresume(const SpeechSynthesisUtterance *self);

void SpeechSynthesisUtterance_set_onresume(SpeechSynthesisUtterance* self, jb_Any * value);

jb_Any SpeechSynthesisUtterance_onmark(const SpeechSynthesisUtterance *self);

void SpeechSynthesisUtterance_set_onmark(SpeechSynthesisUtterance* self, jb_Any * value);

jb_Any SpeechSynthesisUtterance_onboundary(const SpeechSynthesisUtterance *self);

void SpeechSynthesisUtterance_set_onboundary(SpeechSynthesisUtterance* self, jb_Any * value);
