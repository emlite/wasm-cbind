#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HIDDevice HIDDevice;
typedef struct HIDDeviceRequestOptions HIDDeviceRequestOptions;


DECLARE_EMLITE_TYPE(HIDDeviceRequestOptions, em_Val);

jb_Array HIDDeviceRequestOptions_filters(const HIDDeviceRequestOptions *self);

void HIDDeviceRequestOptions_set_filters(HIDDeviceRequestOptions* self, jb_Array * value);

jb_Array HIDDeviceRequestOptions_exclusionFilters(const HIDDeviceRequestOptions *self);

void HIDDeviceRequestOptions_set_exclusionFilters(HIDDeviceRequestOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(HID, EventTarget);

jb_Any HID_onconnect(const HID *self);

void HID_set_onconnect(HID* self, jb_Any * value);

jb_Any HID_ondisconnect(const HID *self);

void HID_set_ondisconnect(HID* self, jb_Any * value);

jb_Promise HID_getDevices(HID* self );

jb_Promise HID_requestDevice(HID* self , HIDDeviceRequestOptions * options);
