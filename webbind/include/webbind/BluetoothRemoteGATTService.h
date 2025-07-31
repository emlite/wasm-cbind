#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct BluetoothDevice BluetoothDevice;
typedef struct BluetoothRemoteGATTCharacteristic BluetoothRemoteGATTCharacteristic;
typedef struct BluetoothRemoteGATTService BluetoothRemoteGATTService;


DECLARE_EMLITE_TYPE(BluetoothRemoteGATTService, EventTarget);

BluetoothDevice BluetoothRemoteGATTService_device(const BluetoothRemoteGATTService *self);

jb_Any BluetoothRemoteGATTService_uuid(const BluetoothRemoteGATTService *self);

bool BluetoothRemoteGATTService_isPrimary(const BluetoothRemoteGATTService *self);

jb_Promise BluetoothRemoteGATTService_getCharacteristic(BluetoothRemoteGATTService* self , jb_Any * characteristic);

jb_Promise BluetoothRemoteGATTService_getCharacteristics0(BluetoothRemoteGATTService* self );

jb_Promise BluetoothRemoteGATTService_getCharacteristics1(BluetoothRemoteGATTService* self , jb_Any * characteristic);

jb_Promise BluetoothRemoteGATTService_getIncludedService(BluetoothRemoteGATTService* self , jb_Any * service);

jb_Promise BluetoothRemoteGATTService_getIncludedServices0(BluetoothRemoteGATTService* self );

jb_Promise BluetoothRemoteGATTService_getIncludedServices1(BluetoothRemoteGATTService* self , jb_Any * service);

jb_Any BluetoothRemoteGATTService_oncharacteristicvaluechanged(const BluetoothRemoteGATTService *self);

void BluetoothRemoteGATTService_set_oncharacteristicvaluechanged(BluetoothRemoteGATTService* self, jb_Any * value);

jb_Any BluetoothRemoteGATTService_onserviceadded(const BluetoothRemoteGATTService *self);

void BluetoothRemoteGATTService_set_onserviceadded(BluetoothRemoteGATTService* self, jb_Any * value);

jb_Any BluetoothRemoteGATTService_onservicechanged(const BluetoothRemoteGATTService *self);

void BluetoothRemoteGATTService_set_onservicechanged(BluetoothRemoteGATTService* self, jb_Any * value);

jb_Any BluetoothRemoteGATTService_onserviceremoved(const BluetoothRemoteGATTService *self);

void BluetoothRemoteGATTService_set_onserviceremoved(BluetoothRemoteGATTService* self, jb_Any * value);
