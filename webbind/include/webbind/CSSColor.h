#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSColorValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSColor, CSSColorValue);

CSSColor CSSColor_new0(jb_Any * colorSpace, jb_Array * channels);

CSSColor CSSColor_new1(jb_Any * colorSpace, jb_Array * channels, jb_Any * alpha);

jb_Any CSSColor_colorSpace(const CSSColor *self);

void CSSColor_set_colorSpace(CSSColor* self, jb_Any * value);

jb_Array CSSColor_channels(const CSSColor *self);

void CSSColor_set_channels(CSSColor* self, jb_Array * value);

jb_Any CSSColor_alpha(const CSSColor *self);

void CSSColor_set_alpha(CSSColor* self, jb_Any * value);
