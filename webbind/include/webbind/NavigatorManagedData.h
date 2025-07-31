#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(NavigatorManagedData, EventTarget);

jb_Promise NavigatorManagedData_getManagedConfiguration(NavigatorManagedData* self , jb_Array * keys);

jb_Any NavigatorManagedData_onmanagedconfigurationchange(const NavigatorManagedData *self);

void NavigatorManagedData_set_onmanagedconfigurationchange(NavigatorManagedData* self, jb_Any * value);

jb_Promise NavigatorManagedData_getAnnotatedAssetId(NavigatorManagedData* self );

jb_Promise NavigatorManagedData_getAnnotatedLocation(NavigatorManagedData* self );

jb_Promise NavigatorManagedData_getDirectoryId(NavigatorManagedData* self );

jb_Promise NavigatorManagedData_getHostname(NavigatorManagedData* self );

jb_Promise NavigatorManagedData_getSerialNumber(NavigatorManagedData* self );
