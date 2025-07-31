#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct LanguageDetector LanguageDetector;
typedef struct LanguageDetectorCreateOptions LanguageDetectorCreateOptions;
typedef struct LanguageDetectorCreateCoreOptions LanguageDetectorCreateCoreOptions;
typedef struct LanguageDetectionResult LanguageDetectionResult;
typedef struct LanguageDetectorDetectOptions LanguageDetectorDetectOptions;
typedef struct AbortSignal AbortSignal;


DECLARE_EMLITE_TYPE(LanguageDetectorCreateOptions, em_Val);

AbortSignal LanguageDetectorCreateOptions_signal(const LanguageDetectorCreateOptions *self);

void LanguageDetectorCreateOptions_set_signal(LanguageDetectorCreateOptions* self, AbortSignal * value);

jb_Function LanguageDetectorCreateOptions_monitor(const LanguageDetectorCreateOptions *self);

void LanguageDetectorCreateOptions_set_monitor(LanguageDetectorCreateOptions* self, jb_Function * value);
DECLARE_EMLITE_TYPE(LanguageDetectorCreateCoreOptions, em_Val);

jb_Array LanguageDetectorCreateCoreOptions_expectedInputLanguages(const LanguageDetectorCreateCoreOptions *self);

void LanguageDetectorCreateCoreOptions_set_expectedInputLanguages(LanguageDetectorCreateCoreOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(LanguageDetectionResult, em_Val);

jb_String LanguageDetectionResult_detectedLanguage(const LanguageDetectionResult *self);

void LanguageDetectionResult_set_detectedLanguage(LanguageDetectionResult* self, jb_String * value);

double LanguageDetectionResult_confidence(const LanguageDetectionResult *self);

void LanguageDetectionResult_set_confidence(LanguageDetectionResult* self, double value);
DECLARE_EMLITE_TYPE(LanguageDetectorDetectOptions, em_Val);

AbortSignal LanguageDetectorDetectOptions_signal(const LanguageDetectorDetectOptions *self);

void LanguageDetectorDetectOptions_set_signal(LanguageDetectorDetectOptions* self, AbortSignal * value);
DECLARE_EMLITE_TYPE(LanguageDetector, em_Val);

jb_Promise LanguageDetector_create0(LanguageDetector* self );

jb_Promise LanguageDetector_create1(LanguageDetector* self , LanguageDetectorCreateOptions * options);

jb_Promise LanguageDetector_availability0(LanguageDetector* self );

jb_Promise LanguageDetector_availability1(LanguageDetector* self , LanguageDetectorCreateCoreOptions * options);

jb_Promise LanguageDetector_detect0(LanguageDetector* self , jb_String * input);

jb_Promise LanguageDetector_detect1(LanguageDetector* self , jb_String * input, LanguageDetectorDetectOptions * options);

jb_Array LanguageDetector_expectedInputLanguages(const LanguageDetector *self);

jb_Promise LanguageDetector_measureInputUsage0(LanguageDetector* self , jb_String * input);

jb_Promise LanguageDetector_measureInputUsage1(LanguageDetector* self , jb_String * input, LanguageDetectorDetectOptions * options);

double LanguageDetector_inputQuota(const LanguageDetector *self);

jb_Undefined LanguageDetector_destroy(LanguageDetector* self );
