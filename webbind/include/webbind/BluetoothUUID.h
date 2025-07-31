#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(BluetoothUUID, em_Val);

jb_Any BluetoothUUID_getService(BluetoothUUID* self , jb_Any * name);

jb_Any BluetoothUUID_getCharacteristic(BluetoothUUID* self , jb_Any * name);

jb_Any BluetoothUUID_getDescriptor(BluetoothUUID* self , jb_Any * name);

jb_Any BluetoothUUID_canonicalUUID(BluetoothUUID* self , unsigned long alias);
