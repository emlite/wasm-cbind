#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(Lock, em_Val);

jb_String Lock_name(const Lock *self);

LockMode Lock_mode(const Lock *self);
