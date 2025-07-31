#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(MediaError, em_Val);

unsigned short MediaError_code(const MediaError *self);

jb_String MediaError_message(const MediaError *self);
