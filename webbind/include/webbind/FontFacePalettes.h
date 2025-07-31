#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct FontFacePalette FontFacePalette;


DECLARE_EMLITE_TYPE(FontFacePalettes, em_Val);

unsigned long FontFacePalettes_length(const FontFacePalettes *self);
