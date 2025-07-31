#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(InputDeviceCapabilities, em_Val);

InputDeviceCapabilities InputDeviceCapabilities_new0();

InputDeviceCapabilities InputDeviceCapabilities_new1(jb_Any * deviceInitDict);

bool InputDeviceCapabilities_firesTouchEvents(const InputDeviceCapabilities *self);

bool InputDeviceCapabilities_pointerMovementScrolls(const InputDeviceCapabilities *self);
