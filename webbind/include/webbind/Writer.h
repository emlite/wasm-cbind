#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Writer Writer;
typedef struct WriterCreateOptions WriterCreateOptions;
typedef struct WriterCreateCoreOptions WriterCreateCoreOptions;
typedef struct WriterWriteOptions WriterWriteOptions;
typedef struct ReadableStream ReadableStream;
typedef struct AbortSignal AbortSignal;


DECLARE_EMLITE_TYPE(WriterCreateOptions, em_Val);

AbortSignal WriterCreateOptions_signal(const WriterCreateOptions *self);

void WriterCreateOptions_set_signal(WriterCreateOptions* self, AbortSignal * value);

jb_Function WriterCreateOptions_monitor(const WriterCreateOptions *self);

void WriterCreateOptions_set_monitor(WriterCreateOptions* self, jb_Function * value);

jb_String WriterCreateOptions_sharedContext(const WriterCreateOptions *self);

void WriterCreateOptions_set_sharedContext(WriterCreateOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(WriterCreateCoreOptions, em_Val);

WriterTone WriterCreateCoreOptions_tone(const WriterCreateCoreOptions *self);

void WriterCreateCoreOptions_set_tone(WriterCreateCoreOptions* self, WriterTone * value);

WriterFormat WriterCreateCoreOptions_format(const WriterCreateCoreOptions *self);

void WriterCreateCoreOptions_set_format(WriterCreateCoreOptions* self, WriterFormat * value);

WriterLength WriterCreateCoreOptions_length(const WriterCreateCoreOptions *self);

void WriterCreateCoreOptions_set_length(WriterCreateCoreOptions* self, WriterLength * value);

jb_Array WriterCreateCoreOptions_expectedInputLanguages(const WriterCreateCoreOptions *self);

void WriterCreateCoreOptions_set_expectedInputLanguages(WriterCreateCoreOptions* self, jb_Array * value);

jb_Array WriterCreateCoreOptions_expectedContextLanguages(const WriterCreateCoreOptions *self);

void WriterCreateCoreOptions_set_expectedContextLanguages(WriterCreateCoreOptions* self, jb_Array * value);

jb_String WriterCreateCoreOptions_outputLanguage(const WriterCreateCoreOptions *self);

void WriterCreateCoreOptions_set_outputLanguage(WriterCreateCoreOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(WriterWriteOptions, em_Val);

jb_String WriterWriteOptions_context(const WriterWriteOptions *self);

void WriterWriteOptions_set_context(WriterWriteOptions* self, jb_String * value);

AbortSignal WriterWriteOptions_signal(const WriterWriteOptions *self);

void WriterWriteOptions_set_signal(WriterWriteOptions* self, AbortSignal * value);
DECLARE_EMLITE_TYPE(Writer, em_Val);

jb_Promise Writer_create0(Writer* self );

jb_Promise Writer_create1(Writer* self , WriterCreateOptions * options);

jb_Promise Writer_availability0(Writer* self );

jb_Promise Writer_availability1(Writer* self , WriterCreateCoreOptions * options);

jb_Promise Writer_write0(Writer* self , jb_String * input);

jb_Promise Writer_write1(Writer* self , jb_String * input, WriterWriteOptions * options);

ReadableStream Writer_writeStreaming0(Writer* self , jb_String * input);

ReadableStream Writer_writeStreaming1(Writer* self , jb_String * input, WriterWriteOptions * options);

jb_String Writer_sharedContext(const Writer *self);

WriterTone Writer_tone(const Writer *self);

WriterFormat Writer_format(const Writer *self);

WriterLength Writer_length(const Writer *self);

jb_Array Writer_expectedInputLanguages(const Writer *self);

jb_Array Writer_expectedContextLanguages(const Writer *self);

jb_String Writer_outputLanguage(const Writer *self);

jb_Promise Writer_measureInputUsage0(Writer* self , jb_String * input);

jb_Promise Writer_measureInputUsage1(Writer* self , jb_String * input, WriterWriteOptions * options);

double Writer_inputQuota(const Writer *self);

jb_Undefined Writer_destroy(Writer* self );
