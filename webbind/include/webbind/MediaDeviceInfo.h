#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(MediaDeviceInfo, em_Val);

jb_String MediaDeviceInfo_deviceId(const MediaDeviceInfo *self);

MediaDeviceKind MediaDeviceInfo_kind(const MediaDeviceInfo *self);

jb_String MediaDeviceInfo_label(const MediaDeviceInfo *self);

jb_String MediaDeviceInfo_groupId(const MediaDeviceInfo *self);

jb_Object MediaDeviceInfo_toJSON(MediaDeviceInfo* self );
