#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(MLTensor, em_Val);

MLOperandDataType MLTensor_dataType(const MLTensor *self);

jb_FrozenArray MLTensor_shape(const MLTensor *self);

bool MLTensor_readable(const MLTensor *self);

bool MLTensor_writable(const MLTensor *self);

bool MLTensor_constant(const MLTensor *self);

jb_Undefined MLTensor_destroy(MLTensor* self );
