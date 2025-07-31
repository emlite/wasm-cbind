#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct RTCDtlsTransport RTCDtlsTransport;


DECLARE_EMLITE_TYPE(RTCSctpTransport, EventTarget);

RTCDtlsTransport RTCSctpTransport_transport(const RTCSctpTransport *self);

RTCSctpTransportState RTCSctpTransport_state(const RTCSctpTransport *self);

double RTCSctpTransport_maxMessageSize(const RTCSctpTransport *self);

unsigned short RTCSctpTransport_maxChannels(const RTCSctpTransport *self);

jb_Any RTCSctpTransport_onstatechange(const RTCSctpTransport *self);

void RTCSctpTransport_set_onstatechange(RTCSctpTransport* self, jb_Any * value);
