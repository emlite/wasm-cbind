#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(TextFormat, em_Val);

TextFormat TextFormat_new0();

TextFormat TextFormat_new1(jb_Any * options);

unsigned long TextFormat_rangeStart(const TextFormat *self);

unsigned long TextFormat_rangeEnd(const TextFormat *self);

UnderlineStyle TextFormat_underlineStyle(const TextFormat *self);

UnderlineThickness TextFormat_underlineThickness(const TextFormat *self);
