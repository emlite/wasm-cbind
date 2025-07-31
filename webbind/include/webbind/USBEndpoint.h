#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct USBAlternateInterface USBAlternateInterface;


DECLARE_EMLITE_TYPE(USBEndpoint, em_Val);

USBEndpoint USBEndpoint_new(USBAlternateInterface * alternate, unsigned char endpointNumber, USBDirection * direction);

unsigned char USBEndpoint_endpointNumber(const USBEndpoint *self);

USBDirection USBEndpoint_direction(const USBEndpoint *self);

USBEndpointType USBEndpoint_type(const USBEndpoint *self);

unsigned long USBEndpoint_packetSize(const USBEndpoint *self);
