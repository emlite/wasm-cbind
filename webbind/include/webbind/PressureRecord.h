#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PressureRecord, em_Val);

PressureSource PressureRecord_source(const PressureRecord *self);

PressureState PressureRecord_state(const PressureRecord *self);

jb_Any PressureRecord_time(const PressureRecord *self);

jb_Object PressureRecord_toJSON(PressureRecord* self );
