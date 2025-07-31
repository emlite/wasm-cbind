#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct USBAlternateInterface USBAlternateInterface;
typedef struct USBConfiguration USBConfiguration;


DECLARE_EMLITE_TYPE(USBInterface, em_Val);

USBInterface USBInterface_new(USBConfiguration * configuration, unsigned char interfaceNumber);

unsigned char USBInterface_interfaceNumber(const USBInterface *self);

USBAlternateInterface USBInterface_alternate(const USBInterface *self);

jb_Array USBInterface_alternates(const USBInterface *self);

bool USBInterface_claimed(const USBInterface *self);
