#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AbstractRange.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(StaticRange, AbstractRange);

StaticRange StaticRange_new(jb_Any * init);
