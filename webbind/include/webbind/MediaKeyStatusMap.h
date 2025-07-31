#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(MediaKeyStatusMap, em_Val);

unsigned long MediaKeyStatusMap_size(const MediaKeyStatusMap *self);

bool MediaKeyStatusMap_has(MediaKeyStatusMap* self , jb_Any * keyId);

jb_Any MediaKeyStatusMap_get(MediaKeyStatusMap* self , jb_Any * keyId);
