#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct BluetoothDevice BluetoothDevice;
typedef struct BluetoothRemoteGATTServer BluetoothRemoteGATTServer;
typedef struct BluetoothRemoteGATTService BluetoothRemoteGATTService;


DECLARE_EMLITE_TYPE(BluetoothRemoteGATTServer, em_Val);

BluetoothDevice BluetoothRemoteGATTServer_device(const BluetoothRemoteGATTServer *self);

bool BluetoothRemoteGATTServer_connected(const BluetoothRemoteGATTServer *self);

jb_Promise BluetoothRemoteGATTServer_connect(BluetoothRemoteGATTServer* self );

jb_Undefined BluetoothRemoteGATTServer_disconnect(BluetoothRemoteGATTServer* self );

jb_Promise BluetoothRemoteGATTServer_getPrimaryService(BluetoothRemoteGATTServer* self , jb_Any * service);

jb_Promise BluetoothRemoteGATTServer_getPrimaryServices0(BluetoothRemoteGATTServer* self );

jb_Promise BluetoothRemoteGATTServer_getPrimaryServices1(BluetoothRemoteGATTServer* self , jb_Any * service);
