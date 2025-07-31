#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct USBIsochronousOutTransferPacket USBIsochronousOutTransferPacket;


DECLARE_EMLITE_TYPE(USBIsochronousOutTransferResult, em_Val);

USBIsochronousOutTransferResult USBIsochronousOutTransferResult_new(jb_Array * packets);

jb_Array USBIsochronousOutTransferResult_packets(const USBIsochronousOutTransferResult *self);
