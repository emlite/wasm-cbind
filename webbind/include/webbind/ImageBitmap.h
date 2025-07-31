#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ImageBitmap, em_Val);

unsigned long ImageBitmap_width(const ImageBitmap *self);

unsigned long ImageBitmap_height(const ImageBitmap *self);

jb_Undefined ImageBitmap_close(ImageBitmap* self );
