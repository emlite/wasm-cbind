#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct BluetoothRemoteGATTCharacteristic BluetoothRemoteGATTCharacteristic;


DECLARE_EMLITE_TYPE(BluetoothRemoteGATTDescriptor, em_Val);

BluetoothRemoteGATTCharacteristic BluetoothRemoteGATTDescriptor_characteristic(const BluetoothRemoteGATTDescriptor *self);

jb_Any BluetoothRemoteGATTDescriptor_uuid(const BluetoothRemoteGATTDescriptor *self);

jb_DataView BluetoothRemoteGATTDescriptor_value(const BluetoothRemoteGATTDescriptor *self);

jb_Promise BluetoothRemoteGATTDescriptor_readValue(BluetoothRemoteGATTDescriptor* self );

jb_Promise BluetoothRemoteGATTDescriptor_writeValue(BluetoothRemoteGATTDescriptor* self , jb_Any * value);
