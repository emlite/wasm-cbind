#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ByteLengthQueuingStrategy, em_Val);

ByteLengthQueuingStrategy ByteLengthQueuingStrategy_new(jb_Any * init);

double ByteLengthQueuingStrategy_highWaterMark(const ByteLengthQueuingStrategy *self);

jb_Function ByteLengthQueuingStrategy_size(const ByteLengthQueuingStrategy *self);
