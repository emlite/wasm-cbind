#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "RTCIceTransport.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct RTCOfferOptions RTCOfferOptions;
typedef struct RTCLocalSessionDescriptionInit RTCLocalSessionDescriptionInit;
typedef struct RTCSessionDescription RTCSessionDescription;
typedef struct RTCSessionDescriptionInit RTCSessionDescriptionInit;
typedef struct RTCConfiguration RTCConfiguration;
typedef struct RTCIdentityProviderOptions RTCIdentityProviderOptions;
typedef struct RTCIdentityAssertion RTCIdentityAssertion;
typedef struct RTCCertificate RTCCertificate;
typedef struct RTCRtpSender RTCRtpSender;
typedef struct RTCRtpReceiver RTCRtpReceiver;
typedef struct RTCRtpTransceiver RTCRtpTransceiver;
typedef struct MediaStreamTrack MediaStreamTrack;
typedef struct MediaStream MediaStream;
typedef struct RTCRtpTransceiverInit RTCRtpTransceiverInit;
typedef struct RTCSctpTransport RTCSctpTransport;
typedef struct RTCDataChannel RTCDataChannel;
typedef struct RTCDataChannelInit RTCDataChannelInit;
typedef struct RTCStatsReport RTCStatsReport;


DECLARE_EMLITE_TYPE(RTCOfferOptions, em_Val);

bool RTCOfferOptions_offerToReceiveAudio(const RTCOfferOptions *self);

void RTCOfferOptions_set_offerToReceiveAudio(RTCOfferOptions* self, bool value);

bool RTCOfferOptions_offerToReceiveVideo(const RTCOfferOptions *self);

void RTCOfferOptions_set_offerToReceiveVideo(RTCOfferOptions* self, bool value);
DECLARE_EMLITE_TYPE(RTCLocalSessionDescriptionInit, em_Val);

RTCSdpType RTCLocalSessionDescriptionInit_type(const RTCLocalSessionDescriptionInit *self);

void RTCLocalSessionDescriptionInit_set_type(RTCLocalSessionDescriptionInit* self, RTCSdpType * value);

jb_String RTCLocalSessionDescriptionInit_sdp(const RTCLocalSessionDescriptionInit *self);

void RTCLocalSessionDescriptionInit_set_sdp(RTCLocalSessionDescriptionInit* self, jb_String * value);
DECLARE_EMLITE_TYPE(RTCSessionDescriptionInit, em_Val);

RTCSdpType RTCSessionDescriptionInit_type(const RTCSessionDescriptionInit *self);

void RTCSessionDescriptionInit_set_type(RTCSessionDescriptionInit* self, RTCSdpType * value);

jb_String RTCSessionDescriptionInit_sdp(const RTCSessionDescriptionInit *self);

void RTCSessionDescriptionInit_set_sdp(RTCSessionDescriptionInit* self, jb_String * value);
DECLARE_EMLITE_TYPE(RTCConfiguration, em_Val);

jb_Array RTCConfiguration_iceServers(const RTCConfiguration *self);

void RTCConfiguration_set_iceServers(RTCConfiguration* self, jb_Array * value);

RTCIceTransportPolicy RTCConfiguration_iceTransportPolicy(const RTCConfiguration *self);

void RTCConfiguration_set_iceTransportPolicy(RTCConfiguration* self, RTCIceTransportPolicy * value);

RTCBundlePolicy RTCConfiguration_bundlePolicy(const RTCConfiguration *self);

void RTCConfiguration_set_bundlePolicy(RTCConfiguration* self, RTCBundlePolicy * value);

RTCRtcpMuxPolicy RTCConfiguration_rtcpMuxPolicy(const RTCConfiguration *self);

void RTCConfiguration_set_rtcpMuxPolicy(RTCConfiguration* self, RTCRtcpMuxPolicy * value);

jb_Array RTCConfiguration_certificates(const RTCConfiguration *self);

void RTCConfiguration_set_certificates(RTCConfiguration* self, jb_Array * value);

unsigned char RTCConfiguration_iceCandidatePoolSize(const RTCConfiguration *self);

void RTCConfiguration_set_iceCandidatePoolSize(RTCConfiguration* self, unsigned char value);
DECLARE_EMLITE_TYPE(RTCIdentityProviderOptions, em_Val);

jb_String RTCIdentityProviderOptions_protocol(const RTCIdentityProviderOptions *self);

void RTCIdentityProviderOptions_set_protocol(RTCIdentityProviderOptions* self, jb_String * value);

jb_String RTCIdentityProviderOptions_usernameHint(const RTCIdentityProviderOptions *self);

void RTCIdentityProviderOptions_set_usernameHint(RTCIdentityProviderOptions* self, jb_String * value);

jb_String RTCIdentityProviderOptions_peerIdentity(const RTCIdentityProviderOptions *self);

void RTCIdentityProviderOptions_set_peerIdentity(RTCIdentityProviderOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(RTCRtpTransceiverInit, em_Val);

RTCRtpTransceiverDirection RTCRtpTransceiverInit_direction(const RTCRtpTransceiverInit *self);

void RTCRtpTransceiverInit_set_direction(RTCRtpTransceiverInit* self, RTCRtpTransceiverDirection * value);

jb_Array RTCRtpTransceiverInit_streams(const RTCRtpTransceiverInit *self);

void RTCRtpTransceiverInit_set_streams(RTCRtpTransceiverInit* self, jb_Array * value);

jb_Array RTCRtpTransceiverInit_sendEncodings(const RTCRtpTransceiverInit *self);

void RTCRtpTransceiverInit_set_sendEncodings(RTCRtpTransceiverInit* self, jb_Array * value);
DECLARE_EMLITE_TYPE(RTCDataChannelInit, em_Val);

bool RTCDataChannelInit_ordered(const RTCDataChannelInit *self);

void RTCDataChannelInit_set_ordered(RTCDataChannelInit* self, bool value);

unsigned short RTCDataChannelInit_maxPacketLifeTime(const RTCDataChannelInit *self);

void RTCDataChannelInit_set_maxPacketLifeTime(RTCDataChannelInit* self, unsigned short value);

unsigned short RTCDataChannelInit_maxRetransmits(const RTCDataChannelInit *self);

void RTCDataChannelInit_set_maxRetransmits(RTCDataChannelInit* self, unsigned short value);

jb_String RTCDataChannelInit_protocol(const RTCDataChannelInit *self);

void RTCDataChannelInit_set_protocol(RTCDataChannelInit* self, jb_String * value);

bool RTCDataChannelInit_negotiated(const RTCDataChannelInit *self);

void RTCDataChannelInit_set_negotiated(RTCDataChannelInit* self, bool value);

unsigned short RTCDataChannelInit_id(const RTCDataChannelInit *self);

void RTCDataChannelInit_set_id(RTCDataChannelInit* self, unsigned short value);
DECLARE_EMLITE_TYPE(RTCPeerConnection, EventTarget);

RTCPeerConnection RTCPeerConnection_new0();

RTCPeerConnection RTCPeerConnection_new1(RTCConfiguration * configuration);

jb_Promise RTCPeerConnection_createOffer0(RTCPeerConnection* self , jb_Function * successCallback, jb_Function * failureCallback);

jb_Promise RTCPeerConnection_createOffer1(RTCPeerConnection* self , jb_Function * successCallback, jb_Function * failureCallback, RTCOfferOptions * options);

jb_Promise RTCPeerConnection_createAnswer(RTCPeerConnection* self , jb_Function * successCallback, jb_Function * failureCallback);

jb_Promise RTCPeerConnection_setLocalDescription(RTCPeerConnection* self , RTCLocalSessionDescriptionInit * description, jb_Any * successCallback, jb_Function * failureCallback);

RTCSessionDescription RTCPeerConnection_localDescription(const RTCPeerConnection *self);

RTCSessionDescription RTCPeerConnection_currentLocalDescription(const RTCPeerConnection *self);

RTCSessionDescription RTCPeerConnection_pendingLocalDescription(const RTCPeerConnection *self);

jb_Promise RTCPeerConnection_setRemoteDescription(RTCPeerConnection* self , RTCSessionDescriptionInit * description, jb_Any * successCallback, jb_Function * failureCallback);

RTCSessionDescription RTCPeerConnection_remoteDescription(const RTCPeerConnection *self);

RTCSessionDescription RTCPeerConnection_currentRemoteDescription(const RTCPeerConnection *self);

RTCSessionDescription RTCPeerConnection_pendingRemoteDescription(const RTCPeerConnection *self);

jb_Promise RTCPeerConnection_addIceCandidate(RTCPeerConnection* self , RTCIceCandidateInit * candidate, jb_Any * successCallback, jb_Function * failureCallback);

RTCSignalingState RTCPeerConnection_signalingState(const RTCPeerConnection *self);

RTCIceGatheringState RTCPeerConnection_iceGatheringState(const RTCPeerConnection *self);

RTCIceConnectionState RTCPeerConnection_iceConnectionState(const RTCPeerConnection *self);

RTCPeerConnectionState RTCPeerConnection_connectionState(const RTCPeerConnection *self);

bool RTCPeerConnection_canTrickleIceCandidates(const RTCPeerConnection *self);

jb_Undefined RTCPeerConnection_restartIce(RTCPeerConnection* self );

RTCConfiguration RTCPeerConnection_getConfiguration(RTCPeerConnection* self );

jb_Undefined RTCPeerConnection_setConfiguration0(RTCPeerConnection* self );

jb_Undefined RTCPeerConnection_setConfiguration1(RTCPeerConnection* self , RTCConfiguration * configuration);

jb_Undefined RTCPeerConnection_close(RTCPeerConnection* self );

jb_Any RTCPeerConnection_onnegotiationneeded(const RTCPeerConnection *self);

void RTCPeerConnection_set_onnegotiationneeded(RTCPeerConnection* self, jb_Any * value);

jb_Any RTCPeerConnection_onicecandidate(const RTCPeerConnection *self);

void RTCPeerConnection_set_onicecandidate(RTCPeerConnection* self, jb_Any * value);

jb_Any RTCPeerConnection_onicecandidateerror(const RTCPeerConnection *self);

void RTCPeerConnection_set_onicecandidateerror(RTCPeerConnection* self, jb_Any * value);

jb_Any RTCPeerConnection_onsignalingstatechange(const RTCPeerConnection *self);

void RTCPeerConnection_set_onsignalingstatechange(RTCPeerConnection* self, jb_Any * value);

jb_Any RTCPeerConnection_oniceconnectionstatechange(const RTCPeerConnection *self);

void RTCPeerConnection_set_oniceconnectionstatechange(RTCPeerConnection* self, jb_Any * value);

jb_Any RTCPeerConnection_onicegatheringstatechange(const RTCPeerConnection *self);

void RTCPeerConnection_set_onicegatheringstatechange(RTCPeerConnection* self, jb_Any * value);

jb_Any RTCPeerConnection_onconnectionstatechange(const RTCPeerConnection *self);

void RTCPeerConnection_set_onconnectionstatechange(RTCPeerConnection* self, jb_Any * value);

jb_Undefined RTCPeerConnection_setIdentityProvider0(RTCPeerConnection* self , jb_String * provider);

jb_Undefined RTCPeerConnection_setIdentityProvider1(RTCPeerConnection* self , jb_String * provider, RTCIdentityProviderOptions * options);

jb_Promise RTCPeerConnection_getIdentityAssertion(RTCPeerConnection* self );

jb_Promise RTCPeerConnection_peerIdentity(const RTCPeerConnection *self);

jb_String RTCPeerConnection_idpLoginUrl(const RTCPeerConnection *self);

jb_String RTCPeerConnection_idpErrorInfo(const RTCPeerConnection *self);

jb_Promise RTCPeerConnection_generateCertificate(RTCPeerConnection* self , jb_Any * keygenAlgorithm);

jb_Array RTCPeerConnection_getSenders(RTCPeerConnection* self );

jb_Array RTCPeerConnection_getReceivers(RTCPeerConnection* self );

jb_Array RTCPeerConnection_getTransceivers(RTCPeerConnection* self );

RTCRtpSender RTCPeerConnection_addTrack(RTCPeerConnection* self , MediaStreamTrack * track, MediaStream * streams);

jb_Undefined RTCPeerConnection_removeTrack(RTCPeerConnection* self , RTCRtpSender * sender);

RTCRtpTransceiver RTCPeerConnection_addTransceiver0(RTCPeerConnection* self , jb_Any * trackOrKind);

RTCRtpTransceiver RTCPeerConnection_addTransceiver1(RTCPeerConnection* self , jb_Any * trackOrKind, RTCRtpTransceiverInit * init);

jb_Any RTCPeerConnection_ontrack(const RTCPeerConnection *self);

void RTCPeerConnection_set_ontrack(RTCPeerConnection* self, jb_Any * value);

RTCSctpTransport RTCPeerConnection_sctp(const RTCPeerConnection *self);

RTCDataChannel RTCPeerConnection_createDataChannel0(RTCPeerConnection* self , jb_String * label);

RTCDataChannel RTCPeerConnection_createDataChannel1(RTCPeerConnection* self , jb_String * label, RTCDataChannelInit * dataChannelDict);

jb_Any RTCPeerConnection_ondatachannel(const RTCPeerConnection *self);

void RTCPeerConnection_set_ondatachannel(RTCPeerConnection* self, jb_Any * value);

jb_Promise RTCPeerConnection_getStats0(RTCPeerConnection* self );

jb_Promise RTCPeerConnection_getStats1(RTCPeerConnection* self , MediaStreamTrack * selector);
