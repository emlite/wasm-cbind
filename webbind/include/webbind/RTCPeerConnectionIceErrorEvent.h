#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(RTCPeerConnectionIceErrorEvent, Event);

RTCPeerConnectionIceErrorEvent RTCPeerConnectionIceErrorEvent_new(jb_String * type, jb_Any * eventInitDict);

jb_String RTCPeerConnectionIceErrorEvent_address(const RTCPeerConnectionIceErrorEvent *self);

unsigned short RTCPeerConnectionIceErrorEvent_port(const RTCPeerConnectionIceErrorEvent *self);

jb_String RTCPeerConnectionIceErrorEvent_url(const RTCPeerConnectionIceErrorEvent *self);

unsigned short RTCPeerConnectionIceErrorEvent_errorCode(const RTCPeerConnectionIceErrorEvent *self);

jb_String RTCPeerConnectionIceErrorEvent_errorText(const RTCPeerConnectionIceErrorEvent *self);
