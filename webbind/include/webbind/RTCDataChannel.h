#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(RTCDataChannel, EventTarget);

jb_String RTCDataChannel_label(const RTCDataChannel *self);

bool RTCDataChannel_ordered(const RTCDataChannel *self);

unsigned short RTCDataChannel_maxPacketLifeTime(const RTCDataChannel *self);

unsigned short RTCDataChannel_maxRetransmits(const RTCDataChannel *self);

jb_String RTCDataChannel_protocol(const RTCDataChannel *self);

bool RTCDataChannel_negotiated(const RTCDataChannel *self);

unsigned short RTCDataChannel_id(const RTCDataChannel *self);

RTCDataChannelState RTCDataChannel_readyState(const RTCDataChannel *self);

unsigned long RTCDataChannel_bufferedAmount(const RTCDataChannel *self);

unsigned long RTCDataChannel_bufferedAmountLowThreshold(const RTCDataChannel *self);

void RTCDataChannel_set_bufferedAmountLowThreshold(RTCDataChannel* self, unsigned long value);

jb_Any RTCDataChannel_onopen(const RTCDataChannel *self);

void RTCDataChannel_set_onopen(RTCDataChannel* self, jb_Any * value);

jb_Any RTCDataChannel_onbufferedamountlow(const RTCDataChannel *self);

void RTCDataChannel_set_onbufferedamountlow(RTCDataChannel* self, jb_Any * value);

jb_Any RTCDataChannel_onerror(const RTCDataChannel *self);

void RTCDataChannel_set_onerror(RTCDataChannel* self, jb_Any * value);

jb_Any RTCDataChannel_onclosing(const RTCDataChannel *self);

void RTCDataChannel_set_onclosing(RTCDataChannel* self, jb_Any * value);

jb_Any RTCDataChannel_onclose(const RTCDataChannel *self);

void RTCDataChannel_set_onclose(RTCDataChannel* self, jb_Any * value);

jb_Undefined RTCDataChannel_close(RTCDataChannel* self );

jb_Any RTCDataChannel_onmessage(const RTCDataChannel *self);

void RTCDataChannel_set_onmessage(RTCDataChannel* self, jb_Any * value);

BinaryType RTCDataChannel_binaryType(const RTCDataChannel *self);

void RTCDataChannel_set_binaryType(RTCDataChannel* self, BinaryType * value);

jb_Undefined RTCDataChannel_send(RTCDataChannel* self , jb_Any * data);

RTCPriorityType RTCDataChannel_priority(const RTCDataChannel *self);
