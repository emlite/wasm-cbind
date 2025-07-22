#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct USBConfiguration USBConfiguration;
typedef struct USBInTransferResult USBInTransferResult;
typedef struct USBControlTransferParameters USBControlTransferParameters;
typedef struct USBOutTransferResult USBOutTransferResult;
typedef struct USBIsochronousInTransferResult USBIsochronousInTransferResult;
typedef struct USBIsochronousOutTransferResult USBIsochronousOutTransferResult;


typedef struct {
  em_Val inner;
} USBControlTransferParameters;


DECLARE_EMLITE_TYPE(USBControlTransferParameters, em_Val);

USBRequestType USBControlTransferParameters_requestType( const USBControlTransferParameters *self);

void USBControlTransferParameters_set_requestType(USBControlTransferParameters* self, const USBRequestType* value);

USBRecipient USBControlTransferParameters_recipient( const USBControlTransferParameters *self);

void USBControlTransferParameters_set_recipient(USBControlTransferParameters* self, const USBRecipient* value);

unsigned char USBControlTransferParameters_request( const USBControlTransferParameters *self);

void USBControlTransferParameters_set_request(USBControlTransferParameters* self, unsigned char value);

unsigned short USBControlTransferParameters_value( const USBControlTransferParameters *self);

void USBControlTransferParameters_set_value(USBControlTransferParameters* self, unsigned short value);

unsigned short USBControlTransferParameters_index( const USBControlTransferParameters *self);

void USBControlTransferParameters_set_index(USBControlTransferParameters* self, unsigned short value);
typedef struct {
  em_Val inner;
} USBDevice;


DECLARE_EMLITE_TYPE(USBDevice, em_Val);

unsigned char USBDevice_usbVersionMajor( const USBDevice *self);

unsigned char USBDevice_usbVersionMinor( const USBDevice *self);

unsigned char USBDevice_usbVersionSubminor( const USBDevice *self);

unsigned char USBDevice_deviceClass( const USBDevice *self);

unsigned char USBDevice_deviceSubclass( const USBDevice *self);

unsigned char USBDevice_deviceProtocol( const USBDevice *self);

unsigned short USBDevice_vendorId( const USBDevice *self);

unsigned short USBDevice_productId( const USBDevice *self);

unsigned char USBDevice_deviceVersionMajor( const USBDevice *self);

unsigned char USBDevice_deviceVersionMinor( const USBDevice *self);

unsigned char USBDevice_deviceVersionSubminor( const USBDevice *self);

jb_DOMString USBDevice_manufacturerName( const USBDevice *self);

jb_DOMString USBDevice_productName( const USBDevice *self);

jb_DOMString USBDevice_serialNumber( const USBDevice *self);

USBConfiguration USBDevice_configuration( const USBDevice *self);

jb_FrozenArray USBDevice_configurations( const USBDevice *self);

bool USBDevice_opened( const USBDevice *self);

jb_Promise USBDevice_open(USBDevice* self );

jb_Promise USBDevice_close(USBDevice* self );

jb_Promise USBDevice_forget(USBDevice* self );

jb_Promise USBDevice_selectConfiguration(USBDevice* self , unsigned char configurationValue);

jb_Promise USBDevice_claimInterface(USBDevice* self , unsigned char interfaceNumber);

jb_Promise USBDevice_releaseInterface(USBDevice* self , unsigned char interfaceNumber);

jb_Promise USBDevice_selectAlternateInterface(USBDevice* self , unsigned char interfaceNumber, unsigned char alternateSetting);

jb_Promise USBDevice_controlTransferIn(USBDevice* self , const USBControlTransferParameters* setup, unsigned short length);

jb_Promise USBDevice_controlTransferOut(USBDevice* self , const USBControlTransferParameters* setup);

jb_Promise USBDevice_controlTransferOut(USBDevice* self , const USBControlTransferParameters* setup, const jb_Any* data);

jb_Promise USBDevice_clearHalt(USBDevice* self , const USBDirection* direction, unsigned char endpointNumber);

jb_Promise USBDevice_transferIn(USBDevice* self , unsigned char endpointNumber, unsigned long length);

jb_Promise USBDevice_transferOut(USBDevice* self , unsigned char endpointNumber, const jb_Any* data);

jb_Promise USBDevice_isochronousTransferIn(USBDevice* self , unsigned char endpointNumber, const jb_Sequence* packetLengths);

jb_Promise USBDevice_isochronousTransferOut(USBDevice* self , unsigned char endpointNumber, const jb_Any* data, const jb_Sequence* packetLengths);

jb_Promise USBDevice_reset(USBDevice* self );
