#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SpeechGrammar SpeechGrammar;


DECLARE_EMLITE_TYPE(SpeechGrammarList, em_Val);

SpeechGrammarList SpeechGrammarList_new();

unsigned long SpeechGrammarList_length(const SpeechGrammarList *self);

SpeechGrammar SpeechGrammarList_item(SpeechGrammarList* self , unsigned long index);

jb_Undefined SpeechGrammarList_addFromURI0(SpeechGrammarList* self , jb_String * src);

jb_Undefined SpeechGrammarList_addFromURI1(SpeechGrammarList* self , jb_String * src, float weight);

jb_Undefined SpeechGrammarList_addFromString0(SpeechGrammarList* self , jb_String * string);

jb_Undefined SpeechGrammarList_addFromString1(SpeechGrammarList* self , jb_String * string, float weight);
