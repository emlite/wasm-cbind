#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CountQueuingStrategy, em_Val);

CountQueuingStrategy CountQueuingStrategy_new(jb_Any * init);

double CountQueuingStrategy_highWaterMark(const CountQueuingStrategy *self);

jb_Function CountQueuingStrategy_size(const CountQueuingStrategy *self);
