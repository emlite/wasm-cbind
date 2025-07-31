#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct NDEFScanOptions NDEFScanOptions;
typedef struct NDEFWriteOptions NDEFWriteOptions;
typedef struct NDEFMakeReadOnlyOptions NDEFMakeReadOnlyOptions;
typedef struct AbortSignal AbortSignal;


DECLARE_EMLITE_TYPE(NDEFScanOptions, em_Val);

AbortSignal NDEFScanOptions_signal(const NDEFScanOptions *self);

void NDEFScanOptions_set_signal(NDEFScanOptions* self, AbortSignal * value);
DECLARE_EMLITE_TYPE(NDEFWriteOptions, em_Val);

bool NDEFWriteOptions_overwrite(const NDEFWriteOptions *self);

void NDEFWriteOptions_set_overwrite(NDEFWriteOptions* self, bool value);

AbortSignal NDEFWriteOptions_signal(const NDEFWriteOptions *self);

void NDEFWriteOptions_set_signal(NDEFWriteOptions* self, AbortSignal * value);
DECLARE_EMLITE_TYPE(NDEFMakeReadOnlyOptions, em_Val);

AbortSignal NDEFMakeReadOnlyOptions_signal(const NDEFMakeReadOnlyOptions *self);

void NDEFMakeReadOnlyOptions_set_signal(NDEFMakeReadOnlyOptions* self, AbortSignal * value);
DECLARE_EMLITE_TYPE(NDEFReader, EventTarget);

NDEFReader NDEFReader_new();

jb_Any NDEFReader_onreading(const NDEFReader *self);

void NDEFReader_set_onreading(NDEFReader* self, jb_Any * value);

jb_Any NDEFReader_onreadingerror(const NDEFReader *self);

void NDEFReader_set_onreadingerror(NDEFReader* self, jb_Any * value);

jb_Promise NDEFReader_scan0(NDEFReader* self );

jb_Promise NDEFReader_scan1(NDEFReader* self , NDEFScanOptions * options);

jb_Promise NDEFReader_write0(NDEFReader* self , jb_Any * message);

jb_Promise NDEFReader_write1(NDEFReader* self , jb_Any * message, NDEFWriteOptions * options);

jb_Promise NDEFReader_makeReadOnly0(NDEFReader* self );

jb_Promise NDEFReader_makeReadOnly1(NDEFReader* self , NDEFMakeReadOnlyOptions * options);
