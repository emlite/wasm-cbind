#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Rewriter Rewriter;
typedef struct RewriterCreateOptions RewriterCreateOptions;
typedef struct RewriterCreateCoreOptions RewriterCreateCoreOptions;
typedef struct RewriterRewriteOptions RewriterRewriteOptions;
typedef struct ReadableStream ReadableStream;
typedef struct AbortSignal AbortSignal;


DECLARE_EMLITE_TYPE(RewriterCreateOptions, em_Val);

AbortSignal RewriterCreateOptions_signal(const RewriterCreateOptions *self);

void RewriterCreateOptions_set_signal(RewriterCreateOptions* self, AbortSignal * value);

jb_Function RewriterCreateOptions_monitor(const RewriterCreateOptions *self);

void RewriterCreateOptions_set_monitor(RewriterCreateOptions* self, jb_Function * value);

jb_String RewriterCreateOptions_sharedContext(const RewriterCreateOptions *self);

void RewriterCreateOptions_set_sharedContext(RewriterCreateOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(RewriterCreateCoreOptions, em_Val);

RewriterTone RewriterCreateCoreOptions_tone(const RewriterCreateCoreOptions *self);

void RewriterCreateCoreOptions_set_tone(RewriterCreateCoreOptions* self, RewriterTone * value);

RewriterFormat RewriterCreateCoreOptions_format(const RewriterCreateCoreOptions *self);

void RewriterCreateCoreOptions_set_format(RewriterCreateCoreOptions* self, RewriterFormat * value);

RewriterLength RewriterCreateCoreOptions_length(const RewriterCreateCoreOptions *self);

void RewriterCreateCoreOptions_set_length(RewriterCreateCoreOptions* self, RewriterLength * value);

jb_Array RewriterCreateCoreOptions_expectedInputLanguages(const RewriterCreateCoreOptions *self);

void RewriterCreateCoreOptions_set_expectedInputLanguages(RewriterCreateCoreOptions* self, jb_Array * value);

jb_Array RewriterCreateCoreOptions_expectedContextLanguages(const RewriterCreateCoreOptions *self);

void RewriterCreateCoreOptions_set_expectedContextLanguages(RewriterCreateCoreOptions* self, jb_Array * value);

jb_String RewriterCreateCoreOptions_outputLanguage(const RewriterCreateCoreOptions *self);

void RewriterCreateCoreOptions_set_outputLanguage(RewriterCreateCoreOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(RewriterRewriteOptions, em_Val);

jb_String RewriterRewriteOptions_context(const RewriterRewriteOptions *self);

void RewriterRewriteOptions_set_context(RewriterRewriteOptions* self, jb_String * value);

AbortSignal RewriterRewriteOptions_signal(const RewriterRewriteOptions *self);

void RewriterRewriteOptions_set_signal(RewriterRewriteOptions* self, AbortSignal * value);
DECLARE_EMLITE_TYPE(Rewriter, em_Val);

jb_Promise Rewriter_create0(Rewriter* self );

jb_Promise Rewriter_create1(Rewriter* self , RewriterCreateOptions * options);

jb_Promise Rewriter_availability0(Rewriter* self );

jb_Promise Rewriter_availability1(Rewriter* self , RewriterCreateCoreOptions * options);

jb_Promise Rewriter_rewrite0(Rewriter* self , jb_String * input);

jb_Promise Rewriter_rewrite1(Rewriter* self , jb_String * input, RewriterRewriteOptions * options);

ReadableStream Rewriter_rewriteStreaming0(Rewriter* self , jb_String * input);

ReadableStream Rewriter_rewriteStreaming1(Rewriter* self , jb_String * input, RewriterRewriteOptions * options);

jb_String Rewriter_sharedContext(const Rewriter *self);

RewriterTone Rewriter_tone(const Rewriter *self);

RewriterFormat Rewriter_format(const Rewriter *self);

RewriterLength Rewriter_length(const Rewriter *self);

jb_Array Rewriter_expectedInputLanguages(const Rewriter *self);

jb_Array Rewriter_expectedContextLanguages(const Rewriter *self);

jb_String Rewriter_outputLanguage(const Rewriter *self);

jb_Promise Rewriter_measureInputUsage0(Rewriter* self , jb_String * input);

jb_Promise Rewriter_measureInputUsage1(Rewriter* self , jb_String * input, RewriterRewriteOptions * options);

double Rewriter_inputQuota(const Rewriter *self);

jb_Undefined Rewriter_destroy(Rewriter* self );
