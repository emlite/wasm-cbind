#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MediaDeviceInfo MediaDeviceInfo;


DECLARE_EMLITE_TYPE(DeviceChangeEvent, Event);

DeviceChangeEvent DeviceChangeEvent_new0(jb_String * type);

DeviceChangeEvent DeviceChangeEvent_new1(jb_String * type, jb_Any * eventInitDict);

jb_Array DeviceChangeEvent_devices(const DeviceChangeEvent *self);

jb_Array DeviceChangeEvent_userInsertedDevices(const DeviceChangeEvent *self);
