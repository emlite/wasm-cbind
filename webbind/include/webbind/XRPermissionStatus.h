#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PermissionStatus.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(XRPermissionStatus, PermissionStatus);

jb_Array XRPermissionStatus_granted(const XRPermissionStatus *self);

void XRPermissionStatus_set_granted(XRPermissionStatus* self, jb_Array * value);
