#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "RTCIceTransport.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(RTCIceCandidate, em_Val);

RTCIceCandidate RTCIceCandidate_new0();

RTCIceCandidate RTCIceCandidate_new1(jb_Any * candidateInitDict);

jb_String RTCIceCandidate_candidate(const RTCIceCandidate *self);

jb_String RTCIceCandidate_sdpMid(const RTCIceCandidate *self);

unsigned short RTCIceCandidate_sdpMLineIndex(const RTCIceCandidate *self);

jb_String RTCIceCandidate_foundation(const RTCIceCandidate *self);

RTCIceComponent RTCIceCandidate_component(const RTCIceCandidate *self);

unsigned long RTCIceCandidate_priority(const RTCIceCandidate *self);

jb_String RTCIceCandidate_address(const RTCIceCandidate *self);

RTCIceProtocol RTCIceCandidate_protocol(const RTCIceCandidate *self);

unsigned short RTCIceCandidate_port(const RTCIceCandidate *self);

RTCIceCandidateType RTCIceCandidate_type(const RTCIceCandidate *self);

RTCIceTcpCandidateType RTCIceCandidate_tcpType(const RTCIceCandidate *self);

jb_String RTCIceCandidate_relatedAddress(const RTCIceCandidate *self);

unsigned short RTCIceCandidate_relatedPort(const RTCIceCandidate *self);

jb_String RTCIceCandidate_usernameFragment(const RTCIceCandidate *self);

RTCIceServerTransportProtocol RTCIceCandidate_relayProtocol(const RTCIceCandidate *self);

jb_String RTCIceCandidate_url(const RTCIceCandidate *self);

RTCIceCandidateInit RTCIceCandidate_toJSON(RTCIceCandidate* self );
