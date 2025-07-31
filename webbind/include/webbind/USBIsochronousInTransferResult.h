#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct USBIsochronousInTransferPacket USBIsochronousInTransferPacket;


DECLARE_EMLITE_TYPE(USBIsochronousInTransferResult, em_Val);

USBIsochronousInTransferResult USBIsochronousInTransferResult_new0(jb_Array * packets);

USBIsochronousInTransferResult USBIsochronousInTransferResult_new1(jb_Array * packets, jb_DataView * data);

jb_DataView USBIsochronousInTransferResult_data(const USBIsochronousInTransferResult *self);

jb_Array USBIsochronousInTransferResult_packets(const USBIsochronousInTransferResult *self);
