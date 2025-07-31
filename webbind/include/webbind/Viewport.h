#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMRect DOMRect;


DECLARE_EMLITE_TYPE(Viewport, em_Val);

jb_Array Viewport_segments(const Viewport *self);
