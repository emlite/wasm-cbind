#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(FragmentResult, em_Val);

FragmentResult FragmentResult_new0();

FragmentResult FragmentResult_new1(jb_Any * options);

double FragmentResult_inlineSize(const FragmentResult *self);

double FragmentResult_blockSize(const FragmentResult *self);
