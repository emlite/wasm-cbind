#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct GamepadButton GamepadButton;
typedef struct GamepadTouch GamepadTouch;
typedef struct GamepadHapticActuator GamepadHapticActuator;
typedef struct GamepadPose GamepadPose;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct DOMPointReadOnly DOMPointReadOnly;


typedef struct {
  em_Val inner;
} GamepadTouch;


DECLARE_EMLITE_TYPE(GamepadTouch, em_Val);

unsigned long GamepadTouch_touchId( const GamepadTouch *self);

void GamepadTouch_set_touchId(GamepadTouch* self, unsigned long value);

unsigned char GamepadTouch_surfaceId( const GamepadTouch *self);

void GamepadTouch_set_surfaceId(GamepadTouch* self, unsigned char value);

DOMPointReadOnly GamepadTouch_position( const GamepadTouch *self);

void GamepadTouch_set_position(GamepadTouch* self, const DOMPointReadOnly* value);

DOMRectReadOnly GamepadTouch_surfaceDimensions( const GamepadTouch *self);

void GamepadTouch_set_surfaceDimensions(GamepadTouch* self, const DOMRectReadOnly* value);
typedef struct {
  em_Val inner;
} Gamepad;


DECLARE_EMLITE_TYPE(Gamepad, em_Val);

jb_DOMString Gamepad_id( const Gamepad *self);

long Gamepad_index( const Gamepad *self);

bool Gamepad_connected( const Gamepad *self);

jb_Any Gamepad_timestamp( const Gamepad *self);

GamepadMappingType Gamepad_mapping( const Gamepad *self);

jb_FrozenArray Gamepad_axes( const Gamepad *self);

jb_FrozenArray Gamepad_buttons( const Gamepad *self);

jb_FrozenArray Gamepad_touches( const Gamepad *self);

GamepadHapticActuator Gamepad_vibrationActuator( const Gamepad *self);

GamepadHand Gamepad_hand( const Gamepad *self);

jb_FrozenArray Gamepad_hapticActuators( const Gamepad *self);

GamepadPose Gamepad_pose( const Gamepad *self);
