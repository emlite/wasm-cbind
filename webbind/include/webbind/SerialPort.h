#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;
typedef struct SerialPortInfo SerialPortInfo;
typedef struct SerialOptions SerialOptions;
typedef struct SerialOutputSignals SerialOutputSignals;
typedef struct SerialInputSignals SerialInputSignals;


DECLARE_EMLITE_TYPE(SerialPortInfo, em_Val);

unsigned short SerialPortInfo_usbVendorId(const SerialPortInfo *self);

void SerialPortInfo_set_usbVendorId(SerialPortInfo* self, unsigned short value);

unsigned short SerialPortInfo_usbProductId(const SerialPortInfo *self);

void SerialPortInfo_set_usbProductId(SerialPortInfo* self, unsigned short value);

jb_Any SerialPortInfo_bluetoothServiceClassId(const SerialPortInfo *self);

void SerialPortInfo_set_bluetoothServiceClassId(SerialPortInfo* self, jb_Any * value);
DECLARE_EMLITE_TYPE(SerialOptions, em_Val);

unsigned long SerialOptions_baudRate(const SerialOptions *self);

void SerialOptions_set_baudRate(SerialOptions* self, unsigned long value);

unsigned char SerialOptions_dataBits(const SerialOptions *self);

void SerialOptions_set_dataBits(SerialOptions* self, unsigned char value);

unsigned char SerialOptions_stopBits(const SerialOptions *self);

void SerialOptions_set_stopBits(SerialOptions* self, unsigned char value);

ParityType SerialOptions_parity(const SerialOptions *self);

void SerialOptions_set_parity(SerialOptions* self, ParityType * value);

unsigned long SerialOptions_bufferSize(const SerialOptions *self);

void SerialOptions_set_bufferSize(SerialOptions* self, unsigned long value);

FlowControlType SerialOptions_flowControl(const SerialOptions *self);

void SerialOptions_set_flowControl(SerialOptions* self, FlowControlType * value);
DECLARE_EMLITE_TYPE(SerialOutputSignals, em_Val);

bool SerialOutputSignals_dataTerminalReady(const SerialOutputSignals *self);

void SerialOutputSignals_set_dataTerminalReady(SerialOutputSignals* self, bool value);

bool SerialOutputSignals_requestToSend(const SerialOutputSignals *self);

void SerialOutputSignals_set_requestToSend(SerialOutputSignals* self, bool value);

bool SerialOutputSignals_break_(const SerialOutputSignals *self);

void SerialOutputSignals_set_break_(SerialOutputSignals* self, bool value);
DECLARE_EMLITE_TYPE(SerialInputSignals, em_Val);

bool SerialInputSignals_dataCarrierDetect(const SerialInputSignals *self);

void SerialInputSignals_set_dataCarrierDetect(SerialInputSignals* self, bool value);

bool SerialInputSignals_clearToSend(const SerialInputSignals *self);

void SerialInputSignals_set_clearToSend(SerialInputSignals* self, bool value);

bool SerialInputSignals_ringIndicator(const SerialInputSignals *self);

void SerialInputSignals_set_ringIndicator(SerialInputSignals* self, bool value);

bool SerialInputSignals_dataSetReady(const SerialInputSignals *self);

void SerialInputSignals_set_dataSetReady(SerialInputSignals* self, bool value);
DECLARE_EMLITE_TYPE(SerialPort, EventTarget);

jb_Any SerialPort_onconnect(const SerialPort *self);

void SerialPort_set_onconnect(SerialPort* self, jb_Any * value);

jb_Any SerialPort_ondisconnect(const SerialPort *self);

void SerialPort_set_ondisconnect(SerialPort* self, jb_Any * value);

bool SerialPort_connected(const SerialPort *self);

ReadableStream SerialPort_readable(const SerialPort *self);

WritableStream SerialPort_writable(const SerialPort *self);

SerialPortInfo SerialPort_getInfo(SerialPort* self );

jb_Promise SerialPort_open(SerialPort* self , SerialOptions * options);

jb_Promise SerialPort_setSignals0(SerialPort* self );

jb_Promise SerialPort_setSignals1(SerialPort* self , SerialOutputSignals * signals);

jb_Promise SerialPort_getSignals(SerialPort* self );

jb_Promise SerialPort_close(SerialPort* self );

jb_Promise SerialPort_forget(SerialPort* self );
