#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PaintSize, em_Val);

double PaintSize_width(const PaintSize *self);

double PaintSize_height(const PaintSize *self);
