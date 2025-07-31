#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Summarizer Summarizer;
typedef struct SummarizerCreateOptions SummarizerCreateOptions;
typedef struct SummarizerCreateCoreOptions SummarizerCreateCoreOptions;
typedef struct SummarizerSummarizeOptions SummarizerSummarizeOptions;
typedef struct ReadableStream ReadableStream;
typedef struct AbortSignal AbortSignal;


DECLARE_EMLITE_TYPE(SummarizerCreateOptions, em_Val);

AbortSignal SummarizerCreateOptions_signal(const SummarizerCreateOptions *self);

void SummarizerCreateOptions_set_signal(SummarizerCreateOptions* self, AbortSignal * value);

jb_Function SummarizerCreateOptions_monitor(const SummarizerCreateOptions *self);

void SummarizerCreateOptions_set_monitor(SummarizerCreateOptions* self, jb_Function * value);

jb_String SummarizerCreateOptions_sharedContext(const SummarizerCreateOptions *self);

void SummarizerCreateOptions_set_sharedContext(SummarizerCreateOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(SummarizerCreateCoreOptions, em_Val);

SummarizerType SummarizerCreateCoreOptions_type(const SummarizerCreateCoreOptions *self);

void SummarizerCreateCoreOptions_set_type(SummarizerCreateCoreOptions* self, SummarizerType * value);

SummarizerFormat SummarizerCreateCoreOptions_format(const SummarizerCreateCoreOptions *self);

void SummarizerCreateCoreOptions_set_format(SummarizerCreateCoreOptions* self, SummarizerFormat * value);

SummarizerLength SummarizerCreateCoreOptions_length(const SummarizerCreateCoreOptions *self);

void SummarizerCreateCoreOptions_set_length(SummarizerCreateCoreOptions* self, SummarizerLength * value);

jb_Array SummarizerCreateCoreOptions_expectedInputLanguages(const SummarizerCreateCoreOptions *self);

void SummarizerCreateCoreOptions_set_expectedInputLanguages(SummarizerCreateCoreOptions* self, jb_Array * value);

jb_Array SummarizerCreateCoreOptions_expectedContextLanguages(const SummarizerCreateCoreOptions *self);

void SummarizerCreateCoreOptions_set_expectedContextLanguages(SummarizerCreateCoreOptions* self, jb_Array * value);

jb_String SummarizerCreateCoreOptions_outputLanguage(const SummarizerCreateCoreOptions *self);

void SummarizerCreateCoreOptions_set_outputLanguage(SummarizerCreateCoreOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(SummarizerSummarizeOptions, em_Val);

AbortSignal SummarizerSummarizeOptions_signal(const SummarizerSummarizeOptions *self);

void SummarizerSummarizeOptions_set_signal(SummarizerSummarizeOptions* self, AbortSignal * value);

jb_String SummarizerSummarizeOptions_context(const SummarizerSummarizeOptions *self);

void SummarizerSummarizeOptions_set_context(SummarizerSummarizeOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(Summarizer, em_Val);

jb_Promise Summarizer_create0(Summarizer* self );

jb_Promise Summarizer_create1(Summarizer* self , SummarizerCreateOptions * options);

jb_Promise Summarizer_availability0(Summarizer* self );

jb_Promise Summarizer_availability1(Summarizer* self , SummarizerCreateCoreOptions * options);

jb_Promise Summarizer_summarize0(Summarizer* self , jb_String * input);

jb_Promise Summarizer_summarize1(Summarizer* self , jb_String * input, SummarizerSummarizeOptions * options);

ReadableStream Summarizer_summarizeStreaming0(Summarizer* self , jb_String * input);

ReadableStream Summarizer_summarizeStreaming1(Summarizer* self , jb_String * input, SummarizerSummarizeOptions * options);

jb_String Summarizer_sharedContext(const Summarizer *self);

SummarizerType Summarizer_type(const Summarizer *self);

SummarizerFormat Summarizer_format(const Summarizer *self);

SummarizerLength Summarizer_length(const Summarizer *self);

jb_Array Summarizer_expectedInputLanguages(const Summarizer *self);

jb_Array Summarizer_expectedContextLanguages(const Summarizer *self);

jb_String Summarizer_outputLanguage(const Summarizer *self);

jb_Promise Summarizer_measureInputUsage0(Summarizer* self , jb_String * input);

jb_Promise Summarizer_measureInputUsage1(Summarizer* self , jb_String * input, SummarizerSummarizeOptions * options);

double Summarizer_inputQuota(const Summarizer *self);

jb_Undefined Summarizer_destroy(Summarizer* self );
