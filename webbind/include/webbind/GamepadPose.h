#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(GamepadPose, em_Val);

bool GamepadPose_hasOrientation(const GamepadPose *self);

bool GamepadPose_hasPosition(const GamepadPose *self);

jb_Float32Array GamepadPose_position(const GamepadPose *self);

jb_Float32Array GamepadPose_linearVelocity(const GamepadPose *self);

jb_Float32Array GamepadPose_linearAcceleration(const GamepadPose *self);

jb_Float32Array GamepadPose_orientation(const GamepadPose *self);

jb_Float32Array GamepadPose_angularVelocity(const GamepadPose *self);

jb_Float32Array GamepadPose_angularAcceleration(const GamepadPose *self);
