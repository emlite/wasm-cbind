#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(USBOutTransferResult, em_Val);

USBOutTransferResult USBOutTransferResult_new0(USBTransferStatus * status);

USBOutTransferResult USBOutTransferResult_new1(USBTransferStatus * status, unsigned long bytesWritten);

unsigned long USBOutTransferResult_bytesWritten(const USBOutTransferResult *self);

USBTransferStatus USBOutTransferResult_status(const USBOutTransferResult *self);
