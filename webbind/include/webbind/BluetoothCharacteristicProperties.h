#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(BluetoothCharacteristicProperties, em_Val);

bool BluetoothCharacteristicProperties_broadcast(const BluetoothCharacteristicProperties *self);

bool BluetoothCharacteristicProperties_read(const BluetoothCharacteristicProperties *self);

bool BluetoothCharacteristicProperties_writeWithoutResponse(const BluetoothCharacteristicProperties *self);

bool BluetoothCharacteristicProperties_write(const BluetoothCharacteristicProperties *self);

bool BluetoothCharacteristicProperties_notify(const BluetoothCharacteristicProperties *self);

bool BluetoothCharacteristicProperties_indicate(const BluetoothCharacteristicProperties *self);

bool BluetoothCharacteristicProperties_authenticatedSignedWrites(const BluetoothCharacteristicProperties *self);

bool BluetoothCharacteristicProperties_reliableWrite(const BluetoothCharacteristicProperties *self);

bool BluetoothCharacteristicProperties_writableAuxiliaries(const BluetoothCharacteristicProperties *self);
