#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(GPUQuerySet, em_Val);

jb_Undefined GPUQuerySet_destroy(GPUQuerySet* self );

GPUQueryType GPUQuerySet_type(const GPUQuerySet *self);

jb_Any GPUQuerySet_count(const GPUQuerySet *self);

jb_String GPUQuerySet_label(const GPUQuerySet *self);

void GPUQuerySet_set_label(GPUQuerySet* self, jb_String * value);
