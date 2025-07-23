#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(ResizeObserverSize, em_Val);

double ResizeObserverSize_inlineSize(const ResizeObserverSize *self);

double ResizeObserverSize_blockSize(const ResizeObserverSize *self);
