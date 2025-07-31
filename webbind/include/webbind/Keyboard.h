#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct KeyboardLayoutMap KeyboardLayoutMap;


DECLARE_EMLITE_TYPE(Keyboard, EventTarget);

jb_Promise Keyboard_lock0(Keyboard* self );

jb_Promise Keyboard_lock1(Keyboard* self , jb_Array * keyCodes);

jb_Undefined Keyboard_unlock(Keyboard* self );

jb_Promise Keyboard_getLayoutMap(Keyboard* self );

jb_Any Keyboard_onlayoutchange(const Keyboard *self);

void Keyboard_set_onlayoutchange(Keyboard* self, jb_Any * value);
