#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(GPURenderBundle, em_Val);

jb_String GPURenderBundle_label(const GPURenderBundle *self);

void GPURenderBundle_set_label(GPURenderBundle* self, jb_String * value);
