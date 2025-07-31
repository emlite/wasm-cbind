#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Translator Translator;
typedef struct TranslatorCreateOptions TranslatorCreateOptions;
typedef struct TranslatorCreateCoreOptions TranslatorCreateCoreOptions;
typedef struct TranslatorTranslateOptions TranslatorTranslateOptions;
typedef struct ReadableStream ReadableStream;
typedef struct AbortSignal AbortSignal;


DECLARE_EMLITE_TYPE(TranslatorCreateOptions, em_Val);

AbortSignal TranslatorCreateOptions_signal(const TranslatorCreateOptions *self);

void TranslatorCreateOptions_set_signal(TranslatorCreateOptions* self, AbortSignal * value);

jb_Function TranslatorCreateOptions_monitor(const TranslatorCreateOptions *self);

void TranslatorCreateOptions_set_monitor(TranslatorCreateOptions* self, jb_Function * value);
DECLARE_EMLITE_TYPE(TranslatorCreateCoreOptions, em_Val);

jb_String TranslatorCreateCoreOptions_sourceLanguage(const TranslatorCreateCoreOptions *self);

void TranslatorCreateCoreOptions_set_sourceLanguage(TranslatorCreateCoreOptions* self, jb_String * value);

jb_String TranslatorCreateCoreOptions_targetLanguage(const TranslatorCreateCoreOptions *self);

void TranslatorCreateCoreOptions_set_targetLanguage(TranslatorCreateCoreOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(TranslatorTranslateOptions, em_Val);

AbortSignal TranslatorTranslateOptions_signal(const TranslatorTranslateOptions *self);

void TranslatorTranslateOptions_set_signal(TranslatorTranslateOptions* self, AbortSignal * value);
DECLARE_EMLITE_TYPE(Translator, em_Val);

jb_Promise Translator_create(Translator* self , TranslatorCreateOptions * options);

jb_Promise Translator_availability(Translator* self , TranslatorCreateCoreOptions * options);

jb_Promise Translator_translate0(Translator* self , jb_String * input);

jb_Promise Translator_translate1(Translator* self , jb_String * input, TranslatorTranslateOptions * options);

ReadableStream Translator_translateStreaming0(Translator* self , jb_String * input);

ReadableStream Translator_translateStreaming1(Translator* self , jb_String * input, TranslatorTranslateOptions * options);

jb_String Translator_sourceLanguage(const Translator *self);

jb_String Translator_targetLanguage(const Translator *self);

jb_Promise Translator_measureInputUsage0(Translator* self , jb_String * input);

jb_Promise Translator_measureInputUsage1(Translator* self , jb_String * input, TranslatorTranslateOptions * options);

double Translator_inputQuota(const Translator *self);

jb_Undefined Translator_destroy(Translator* self );
