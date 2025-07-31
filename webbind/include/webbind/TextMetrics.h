#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(TextMetrics, em_Val);

double TextMetrics_width(const TextMetrics *self);

double TextMetrics_actualBoundingBoxLeft(const TextMetrics *self);

double TextMetrics_actualBoundingBoxRight(const TextMetrics *self);

double TextMetrics_fontBoundingBoxAscent(const TextMetrics *self);

double TextMetrics_fontBoundingBoxDescent(const TextMetrics *self);

double TextMetrics_actualBoundingBoxAscent(const TextMetrics *self);

double TextMetrics_actualBoundingBoxDescent(const TextMetrics *self);

double TextMetrics_emHeightAscent(const TextMetrics *self);

double TextMetrics_emHeightDescent(const TextMetrics *self);

double TextMetrics_hangingBaseline(const TextMetrics *self);

double TextMetrics_alphabeticBaseline(const TextMetrics *self);

double TextMetrics_ideographicBaseline(const TextMetrics *self);
