#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(USBIsochronousOutTransferPacket, em_Val);

USBIsochronousOutTransferPacket USBIsochronousOutTransferPacket_new0(USBTransferStatus * status);

USBIsochronousOutTransferPacket USBIsochronousOutTransferPacket_new1(USBTransferStatus * status, unsigned long bytesWritten);

unsigned long USBIsochronousOutTransferPacket_bytesWritten(const USBIsochronousOutTransferPacket *self);

USBTransferStatus USBIsochronousOutTransferPacket_status(const USBIsochronousOutTransferPacket *self);
