#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct BluetoothRemoteGATTService BluetoothRemoteGATTService;
typedef struct BluetoothCharacteristicProperties BluetoothCharacteristicProperties;
typedef struct BluetoothRemoteGATTDescriptor BluetoothRemoteGATTDescriptor;
typedef struct BluetoothRemoteGATTCharacteristic BluetoothRemoteGATTCharacteristic;


DECLARE_EMLITE_TYPE(BluetoothRemoteGATTCharacteristic, EventTarget);

BluetoothRemoteGATTService BluetoothRemoteGATTCharacteristic_service(const BluetoothRemoteGATTCharacteristic *self);

jb_Any BluetoothRemoteGATTCharacteristic_uuid(const BluetoothRemoteGATTCharacteristic *self);

BluetoothCharacteristicProperties BluetoothRemoteGATTCharacteristic_properties(const BluetoothRemoteGATTCharacteristic *self);

jb_DataView BluetoothRemoteGATTCharacteristic_value(const BluetoothRemoteGATTCharacteristic *self);

jb_Promise BluetoothRemoteGATTCharacteristic_getDescriptor(BluetoothRemoteGATTCharacteristic* self , jb_Any * descriptor);

jb_Promise BluetoothRemoteGATTCharacteristic_getDescriptors0(BluetoothRemoteGATTCharacteristic* self );

jb_Promise BluetoothRemoteGATTCharacteristic_getDescriptors1(BluetoothRemoteGATTCharacteristic* self , jb_Any * descriptor);

jb_Promise BluetoothRemoteGATTCharacteristic_readValue(BluetoothRemoteGATTCharacteristic* self );

jb_Promise BluetoothRemoteGATTCharacteristic_writeValue(BluetoothRemoteGATTCharacteristic* self , jb_Any * value);

jb_Promise BluetoothRemoteGATTCharacteristic_writeValueWithResponse(BluetoothRemoteGATTCharacteristic* self , jb_Any * value);

jb_Promise BluetoothRemoteGATTCharacteristic_writeValueWithoutResponse(BluetoothRemoteGATTCharacteristic* self , jb_Any * value);

jb_Promise BluetoothRemoteGATTCharacteristic_startNotifications(BluetoothRemoteGATTCharacteristic* self );

jb_Promise BluetoothRemoteGATTCharacteristic_stopNotifications(BluetoothRemoteGATTCharacteristic* self );

jb_Any BluetoothRemoteGATTCharacteristic_oncharacteristicvaluechanged(const BluetoothRemoteGATTCharacteristic *self);

void BluetoothRemoteGATTCharacteristic_set_oncharacteristicvaluechanged(BluetoothRemoteGATTCharacteristic* self, jb_Any * value);
