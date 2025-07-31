#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(FencedFrameConfig, em_Val);

FencedFrameConfig FencedFrameConfig_new(jb_String * url);

jb_Undefined FencedFrameConfig_setSharedStorageContext(FencedFrameConfig* self , jb_String * contextString);
