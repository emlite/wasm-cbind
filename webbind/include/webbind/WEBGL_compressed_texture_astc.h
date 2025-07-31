#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(WEBGL_compressed_texture_astc, em_Val);

jb_Array WEBGL_compressed_texture_astc_getSupportedProfiles(WEBGL_compressed_texture_astc* self );
