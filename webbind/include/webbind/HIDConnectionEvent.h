#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HIDDevice HIDDevice;


DECLARE_EMLITE_TYPE(HIDConnectionEvent, Event);

HIDConnectionEvent HIDConnectionEvent_new(jb_String * type, jb_Any * eventInitDict);

HIDDevice HIDConnectionEvent_device(const HIDConnectionEvent *self);
