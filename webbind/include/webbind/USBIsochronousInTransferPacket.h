#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(USBIsochronousInTransferPacket, em_Val);

USBIsochronousInTransferPacket USBIsochronousInTransferPacket_new0(USBTransferStatus * status);

USBIsochronousInTransferPacket USBIsochronousInTransferPacket_new1(USBTransferStatus * status, jb_DataView * data);

jb_DataView USBIsochronousInTransferPacket_data(const USBIsochronousInTransferPacket *self);

USBTransferStatus USBIsochronousInTransferPacket_status(const USBIsochronousInTransferPacket *self);
