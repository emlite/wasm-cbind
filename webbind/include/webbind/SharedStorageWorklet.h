#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Worklet.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SharedStorageUrlWithMetadata SharedStorageUrlWithMetadata;
typedef struct SharedStorageRunOperationMethodOptions SharedStorageRunOperationMethodOptions;


DECLARE_EMLITE_TYPE(SharedStorageUrlWithMetadata, em_Val);

jb_String SharedStorageUrlWithMetadata_url(const SharedStorageUrlWithMetadata *self);

void SharedStorageUrlWithMetadata_set_url(SharedStorageUrlWithMetadata* self, jb_String * value);

jb_Object SharedStorageUrlWithMetadata_reportingMetadata(const SharedStorageUrlWithMetadata *self);

void SharedStorageUrlWithMetadata_set_reportingMetadata(SharedStorageUrlWithMetadata* self, jb_Object * value);
DECLARE_EMLITE_TYPE(SharedStorageRunOperationMethodOptions, em_Val);

jb_Object SharedStorageRunOperationMethodOptions_data(const SharedStorageRunOperationMethodOptions *self);

void SharedStorageRunOperationMethodOptions_set_data(SharedStorageRunOperationMethodOptions* self, jb_Object * value);

bool SharedStorageRunOperationMethodOptions_resolveToConfig(const SharedStorageRunOperationMethodOptions *self);

void SharedStorageRunOperationMethodOptions_set_resolveToConfig(SharedStorageRunOperationMethodOptions* self, bool value);

bool SharedStorageRunOperationMethodOptions_keepAlive(const SharedStorageRunOperationMethodOptions *self);

void SharedStorageRunOperationMethodOptions_set_keepAlive(SharedStorageRunOperationMethodOptions* self, bool value);

jb_Any SharedStorageRunOperationMethodOptions_privateAggregationConfig(const SharedStorageRunOperationMethodOptions *self);

void SharedStorageRunOperationMethodOptions_set_privateAggregationConfig(SharedStorageRunOperationMethodOptions* self, jb_Any * value);

jb_String SharedStorageRunOperationMethodOptions_savedQuery(const SharedStorageRunOperationMethodOptions *self);

void SharedStorageRunOperationMethodOptions_set_savedQuery(SharedStorageRunOperationMethodOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(SharedStorageWorklet, Worklet);

jb_Promise SharedStorageWorklet_selectURL0(SharedStorageWorklet* self , jb_String * name, jb_Array * urls);

jb_Promise SharedStorageWorklet_selectURL1(SharedStorageWorklet* self , jb_String * name, jb_Array * urls, SharedStorageRunOperationMethodOptions * options);

jb_Promise SharedStorageWorklet_run0(SharedStorageWorklet* self , jb_String * name);

jb_Promise SharedStorageWorklet_run1(SharedStorageWorklet* self , jb_String * name, SharedStorageRunOperationMethodOptions * options);
