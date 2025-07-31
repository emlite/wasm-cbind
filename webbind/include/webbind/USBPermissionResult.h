#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PermissionStatus.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct USBDevice USBDevice;


DECLARE_EMLITE_TYPE(USBPermissionResult, PermissionStatus);

jb_Array USBPermissionResult_devices(const USBPermissionResult *self);

void USBPermissionResult_set_devices(USBPermissionResult* self, jb_Array * value);
