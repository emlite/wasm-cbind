#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BluetoothAdvertisingEventInit BluetoothAdvertisingEventInit;
typedef struct BluetoothDevice BluetoothDevice;
typedef struct BluetoothManufacturerDataMap BluetoothManufacturerDataMap;
typedef struct BluetoothServiceDataMap BluetoothServiceDataMap;

DECLARE_EMLITE_TYPE(BluetoothAdvertisingEvent, Event);

BluetoothAdvertisingEvent BluetoothAdvertisingEvent_new(jb_String * type, BluetoothAdvertisingEventInit * init);

BluetoothDevice BluetoothAdvertisingEvent_device(const BluetoothAdvertisingEvent *self);

jb_Array BluetoothAdvertisingEvent_uuids(const BluetoothAdvertisingEvent *self);

jb_String BluetoothAdvertisingEvent_name(const BluetoothAdvertisingEvent *self);

unsigned short BluetoothAdvertisingEvent_appearance(const BluetoothAdvertisingEvent *self);

char BluetoothAdvertisingEvent_txPower(const BluetoothAdvertisingEvent *self);

char BluetoothAdvertisingEvent_rssi(const BluetoothAdvertisingEvent *self);

BluetoothManufacturerDataMap BluetoothAdvertisingEvent_manufacturerData(const BluetoothAdvertisingEvent *self);

BluetoothServiceDataMap BluetoothAdvertisingEvent_serviceData(const BluetoothAdvertisingEvent *self);

#ifdef __cplusplus
}
#endif
