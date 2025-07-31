#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct RTCIceTransport RTCIceTransport;


DECLARE_EMLITE_TYPE(RTCDtlsTransport, EventTarget);

RTCIceTransport RTCDtlsTransport_iceTransport(const RTCDtlsTransport *self);

RTCDtlsTransportState RTCDtlsTransport_state(const RTCDtlsTransport *self);

jb_Array RTCDtlsTransport_getRemoteCertificates(RTCDtlsTransport* self );

jb_Any RTCDtlsTransport_onstatechange(const RTCDtlsTransport *self);

void RTCDtlsTransport_set_onstatechange(RTCDtlsTransport* self, jb_Any * value);

jb_Any RTCDtlsTransport_onerror(const RTCDtlsTransport *self);

void RTCDtlsTransport_set_onerror(RTCDtlsTransport* self, jb_Any * value);
