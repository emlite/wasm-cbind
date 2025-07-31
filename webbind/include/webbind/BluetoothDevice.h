#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct BluetoothRemoteGATTServer BluetoothRemoteGATTServer;
typedef struct WatchAdvertisementsOptions WatchAdvertisementsOptions;
typedef struct AbortSignal AbortSignal;


DECLARE_EMLITE_TYPE(WatchAdvertisementsOptions, em_Val);

AbortSignal WatchAdvertisementsOptions_signal(const WatchAdvertisementsOptions *self);

void WatchAdvertisementsOptions_set_signal(WatchAdvertisementsOptions* self, AbortSignal * value);
DECLARE_EMLITE_TYPE(BluetoothDevice, EventTarget);

jb_String BluetoothDevice_id(const BluetoothDevice *self);

jb_String BluetoothDevice_name(const BluetoothDevice *self);

BluetoothRemoteGATTServer BluetoothDevice_gatt(const BluetoothDevice *self);

jb_Promise BluetoothDevice_forget(BluetoothDevice* self );

jb_Promise BluetoothDevice_watchAdvertisements0(BluetoothDevice* self );

jb_Promise BluetoothDevice_watchAdvertisements1(BluetoothDevice* self , WatchAdvertisementsOptions * options);

bool BluetoothDevice_watchingAdvertisements(const BluetoothDevice *self);

jb_Any BluetoothDevice_onadvertisementreceived(const BluetoothDevice *self);

void BluetoothDevice_set_onadvertisementreceived(BluetoothDevice* self, jb_Any * value);

jb_Any BluetoothDevice_ongattserverdisconnected(const BluetoothDevice *self);

void BluetoothDevice_set_ongattserverdisconnected(BluetoothDevice* self, jb_Any * value);

jb_Any BluetoothDevice_oncharacteristicvaluechanged(const BluetoothDevice *self);

void BluetoothDevice_set_oncharacteristicvaluechanged(BluetoothDevice* self, jb_Any * value);

jb_Any BluetoothDevice_onserviceadded(const BluetoothDevice *self);

void BluetoothDevice_set_onserviceadded(BluetoothDevice* self, jb_Any * value);

jb_Any BluetoothDevice_onservicechanged(const BluetoothDevice *self);

void BluetoothDevice_set_onservicechanged(BluetoothDevice* self, jb_Any * value);

jb_Any BluetoothDevice_onserviceremoved(const BluetoothDevice *self);

void BluetoothDevice_set_onserviceremoved(BluetoothDevice* self, jb_Any * value);
