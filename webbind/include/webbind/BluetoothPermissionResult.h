#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PermissionStatus.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BluetoothDevice BluetoothDevice;

DECLARE_EMLITE_TYPE(BluetoothPermissionResult, PermissionStatus);

jb_Array BluetoothPermissionResult_devices(const BluetoothPermissionResult *self);

void BluetoothPermissionResult_set_devices(BluetoothPermissionResult* self, jb_Array * value);

#ifdef __cplusplus
}
#endif
