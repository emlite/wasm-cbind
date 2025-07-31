#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(GamepadButton, em_Val);

bool GamepadButton_pressed(const GamepadButton *self);

bool GamepadButton_touched(const GamepadButton *self);

double GamepadButton_value(const GamepadButton *self);
