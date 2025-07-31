#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(FontFacePalette, em_Val);

unsigned long FontFacePalette_length(const FontFacePalette *self);

bool FontFacePalette_usableWithLightBackground(const FontFacePalette *self);

bool FontFacePalette_usableWithDarkBackground(const FontFacePalette *self);
