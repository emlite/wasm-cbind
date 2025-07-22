#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct MediaStreamTrack MediaStreamTrack;
typedef struct RTCDtlsTransport RTCDtlsTransport;
typedef struct RTCRtpCapabilities RTCRtpCapabilities;
typedef struct RTCRtpSendParameters RTCRtpSendParameters;
typedef struct RTCSetParameterOptions RTCSetParameterOptions;
typedef struct MediaStream MediaStream;
typedef struct RTCStatsReport RTCStatsReport;
typedef struct RTCDTMFSender RTCDTMFSender;
typedef struct RTCRtpCodec RTCRtpCodec;


DECLARE_EMLITE_TYPE(RTCRtpCapabilities, em_Val);

jb_Sequence RTCRtpCapabilities_codecs( const RTCRtpCapabilities *self);

void RTCRtpCapabilities_set_codecs(RTCRtpCapabilities* self, jb_Sequence * value);

jb_Sequence RTCRtpCapabilities_headerExtensions( const RTCRtpCapabilities *self);

void RTCRtpCapabilities_set_headerExtensions(RTCRtpCapabilities* self, jb_Sequence * value);
DECLARE_EMLITE_TYPE(RTCRtpSendParameters, em_Val);

jb_DOMString RTCRtpSendParameters_transactionId( const RTCRtpSendParameters *self);

void RTCRtpSendParameters_set_transactionId(RTCRtpSendParameters* self, jb_DOMString * value);

jb_Sequence RTCRtpSendParameters_encodings( const RTCRtpSendParameters *self);

void RTCRtpSendParameters_set_encodings(RTCRtpSendParameters* self, jb_Sequence * value);
DECLARE_EMLITE_TYPE(RTCSetParameterOptions, em_Val);
DECLARE_EMLITE_TYPE(RTCRtpSender, em_Val);

MediaStreamTrack RTCRtpSender_track( const RTCRtpSender *self);

RTCDtlsTransport RTCRtpSender_transport( const RTCRtpSender *self);

RTCRtpCapabilities RTCRtpSender_getCapabilities(RTCRtpSender* self , jb_DOMString * kind);

jb_Promise RTCRtpSender_setParameters0(RTCRtpSender* self , RTCRtpSendParameters * parameters);

jb_Promise RTCRtpSender_setParameters1(RTCRtpSender* self , RTCRtpSendParameters * parameters, RTCSetParameterOptions * setParameterOptions);

RTCRtpSendParameters RTCRtpSender_getParameters(RTCRtpSender* self );

jb_Promise RTCRtpSender_replaceTrack(RTCRtpSender* self , MediaStreamTrack * withTrack);

jb_Undefined RTCRtpSender_setStreams(RTCRtpSender* self , MediaStream * streams);

jb_Promise RTCRtpSender_getStats(RTCRtpSender* self );

jb_Any RTCRtpSender_transform( const RTCRtpSender *self);

void RTCRtpSender_set_transform(RTCRtpSender* self, jb_Any * value);

jb_Promise RTCRtpSender_generateKeyFrame0(RTCRtpSender* self );

jb_Promise RTCRtpSender_generateKeyFrame1(RTCRtpSender* self , jb_Sequence * rids);

RTCDTMFSender RTCRtpSender_dtmf( const RTCRtpSender *self);
