#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct RTCIceCandidate RTCIceCandidate;
typedef struct RTCIceCandidatePair RTCIceCandidatePair;
typedef struct RTCIceParameters RTCIceParameters;
typedef struct RTCIceGatherOptions RTCIceGatherOptions;
typedef struct RTCIceCandidateInit RTCIceCandidateInit;


DECLARE_EMLITE_TYPE(RTCIceParameters, em_Val);

jb_String RTCIceParameters_usernameFragment(const RTCIceParameters *self);

void RTCIceParameters_set_usernameFragment(RTCIceParameters* self, jb_String * value);

jb_String RTCIceParameters_password(const RTCIceParameters *self);

void RTCIceParameters_set_password(RTCIceParameters* self, jb_String * value);
DECLARE_EMLITE_TYPE(RTCIceGatherOptions, em_Val);

RTCIceTransportPolicy RTCIceGatherOptions_gatherPolicy(const RTCIceGatherOptions *self);

void RTCIceGatherOptions_set_gatherPolicy(RTCIceGatherOptions* self, RTCIceTransportPolicy * value);

jb_Array RTCIceGatherOptions_iceServers(const RTCIceGatherOptions *self);

void RTCIceGatherOptions_set_iceServers(RTCIceGatherOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(RTCIceCandidateInit, em_Val);

jb_String RTCIceCandidateInit_candidate(const RTCIceCandidateInit *self);

void RTCIceCandidateInit_set_candidate(RTCIceCandidateInit* self, jb_String * value);

jb_String RTCIceCandidateInit_sdpMid(const RTCIceCandidateInit *self);

void RTCIceCandidateInit_set_sdpMid(RTCIceCandidateInit* self, jb_String * value);

unsigned short RTCIceCandidateInit_sdpMLineIndex(const RTCIceCandidateInit *self);

void RTCIceCandidateInit_set_sdpMLineIndex(RTCIceCandidateInit* self, unsigned short value);

jb_String RTCIceCandidateInit_usernameFragment(const RTCIceCandidateInit *self);

void RTCIceCandidateInit_set_usernameFragment(RTCIceCandidateInit* self, jb_String * value);
DECLARE_EMLITE_TYPE(RTCIceTransport, EventTarget);

RTCIceRole RTCIceTransport_role(const RTCIceTransport *self);

RTCIceComponent RTCIceTransport_component(const RTCIceTransport *self);

RTCIceTransportState RTCIceTransport_state(const RTCIceTransport *self);

RTCIceGathererState RTCIceTransport_gatheringState(const RTCIceTransport *self);

jb_Array RTCIceTransport_getLocalCandidates(RTCIceTransport* self );

jb_Array RTCIceTransport_getRemoteCandidates(RTCIceTransport* self );

RTCIceCandidatePair RTCIceTransport_getSelectedCandidatePair(RTCIceTransport* self );

RTCIceParameters RTCIceTransport_getLocalParameters(RTCIceTransport* self );

RTCIceParameters RTCIceTransport_getRemoteParameters(RTCIceTransport* self );

jb_Any RTCIceTransport_onstatechange(const RTCIceTransport *self);

void RTCIceTransport_set_onstatechange(RTCIceTransport* self, jb_Any * value);

jb_Any RTCIceTransport_ongatheringstatechange(const RTCIceTransport *self);

void RTCIceTransport_set_ongatheringstatechange(RTCIceTransport* self, jb_Any * value);

jb_Any RTCIceTransport_onselectedcandidatepairchange(const RTCIceTransport *self);

void RTCIceTransport_set_onselectedcandidatepairchange(RTCIceTransport* self, jb_Any * value);

RTCIceTransport RTCIceTransport_new();

jb_Undefined RTCIceTransport_gather0(RTCIceTransport* self );

jb_Undefined RTCIceTransport_gather1(RTCIceTransport* self , RTCIceGatherOptions * options);

jb_Undefined RTCIceTransport_start0(RTCIceTransport* self );

jb_Undefined RTCIceTransport_start1(RTCIceTransport* self , RTCIceParameters * remoteParameters);

jb_Undefined RTCIceTransport_start2(RTCIceTransport* self , RTCIceParameters * remoteParameters, RTCIceRole * role);

jb_Undefined RTCIceTransport_stop(RTCIceTransport* self );

jb_Undefined RTCIceTransport_addRemoteCandidate0(RTCIceTransport* self );

jb_Undefined RTCIceTransport_addRemoteCandidate1(RTCIceTransport* self , RTCIceCandidateInit * remoteCandidate);

jb_Any RTCIceTransport_onerror(const RTCIceTransport *self);

void RTCIceTransport_set_onerror(RTCIceTransport* self, jb_Any * value);

jb_Any RTCIceTransport_onicecandidate(const RTCIceTransport *self);

void RTCIceTransport_set_onicecandidate(RTCIceTransport* self, jb_Any * value);
