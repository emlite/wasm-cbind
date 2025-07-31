#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SerialPort SerialPort;
typedef struct SerialPortRequestOptions SerialPortRequestOptions;


DECLARE_EMLITE_TYPE(SerialPortRequestOptions, em_Val);

jb_Array SerialPortRequestOptions_filters(const SerialPortRequestOptions *self);

void SerialPortRequestOptions_set_filters(SerialPortRequestOptions* self, jb_Array * value);

jb_Array SerialPortRequestOptions_allowedBluetoothServiceClassIds(const SerialPortRequestOptions *self);

void SerialPortRequestOptions_set_allowedBluetoothServiceClassIds(SerialPortRequestOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(Serial, EventTarget);

jb_Any Serial_onconnect(const Serial *self);

void Serial_set_onconnect(Serial* self, jb_Any * value);

jb_Any Serial_ondisconnect(const Serial *self);

void Serial_set_ondisconnect(Serial* self, jb_Any * value);

jb_Promise Serial_getPorts(Serial* self );

jb_Promise Serial_requestPort0(Serial* self );

jb_Promise Serial_requestPort1(Serial* self , SerialPortRequestOptions * options);
