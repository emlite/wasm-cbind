#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMRect DOMRect;


DECLARE_EMLITE_TYPE(VirtualKeyboard, EventTarget);

jb_Undefined VirtualKeyboard_show(VirtualKeyboard* self );

jb_Undefined VirtualKeyboard_hide(VirtualKeyboard* self );

DOMRect VirtualKeyboard_boundingRect(const VirtualKeyboard *self);

bool VirtualKeyboard_overlaysContent(const VirtualKeyboard *self);

void VirtualKeyboard_set_overlaysContent(VirtualKeyboard* self, bool value);

jb_Any VirtualKeyboard_ongeometrychange(const VirtualKeyboard *self);

void VirtualKeyboard_set_ongeometrychange(VirtualKeyboard* self, jb_Any * value);
