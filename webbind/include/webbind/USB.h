#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct USBDevice USBDevice;
typedef struct USBDeviceRequestOptions USBDeviceRequestOptions;


DECLARE_EMLITE_TYPE(USBDeviceRequestOptions, em_Val);

jb_Array USBDeviceRequestOptions_filters(const USBDeviceRequestOptions *self);

void USBDeviceRequestOptions_set_filters(USBDeviceRequestOptions* self, jb_Array * value);

jb_Array USBDeviceRequestOptions_exclusionFilters(const USBDeviceRequestOptions *self);

void USBDeviceRequestOptions_set_exclusionFilters(USBDeviceRequestOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(USB, EventTarget);

jb_Any USB_onconnect(const USB *self);

void USB_set_onconnect(USB* self, jb_Any * value);

jb_Any USB_ondisconnect(const USB *self);

void USB_set_ondisconnect(USB* self, jb_Any * value);

jb_Promise USB_getDevices(USB* self );

jb_Promise USB_requestDevice(USB* self , USBDeviceRequestOptions * options);
