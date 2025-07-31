#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(USBInTransferResult, em_Val);

USBInTransferResult USBInTransferResult_new0(USBTransferStatus * status);

USBInTransferResult USBInTransferResult_new1(USBTransferStatus * status, jb_DataView * data);

jb_DataView USBInTransferResult_data(const USBInTransferResult *self);

USBTransferStatus USBInTransferResult_status(const USBInTransferResult *self);
