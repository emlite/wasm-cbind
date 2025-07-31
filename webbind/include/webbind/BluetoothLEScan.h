#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct BluetoothLEScanFilter BluetoothLEScanFilter;


DECLARE_EMLITE_TYPE(BluetoothLEScan, em_Val);

jb_Array BluetoothLEScan_filters(const BluetoothLEScan *self);

bool BluetoothLEScan_keepRepeatedDevices(const BluetoothLEScan *self);

bool BluetoothLEScan_acceptAllAdvertisements(const BluetoothLEScan *self);

bool BluetoothLEScan_active(const BluetoothLEScan *self);

jb_Undefined BluetoothLEScan_stop(BluetoothLEScan* self );
