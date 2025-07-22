#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(BluetoothServiceDataFilter, em_Val);

BluetoothServiceDataFilter BluetoothServiceDataFilter_new0();

BluetoothServiceDataFilter BluetoothServiceDataFilter_new1(jb_Object * init);
