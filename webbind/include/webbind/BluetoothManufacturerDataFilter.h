#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BluetoothManufacturerDataFilter, em_Val);

BluetoothManufacturerDataFilter BluetoothManufacturerDataFilter_new0();

BluetoothManufacturerDataFilter BluetoothManufacturerDataFilter_new1(jb_Object * init);

#ifdef __cplusplus
}
#endif
