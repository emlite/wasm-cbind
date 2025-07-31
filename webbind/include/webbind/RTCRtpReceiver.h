#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "RTCRtpSender.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MediaStreamTrack MediaStreamTrack;
typedef struct RTCDtlsTransport RTCDtlsTransport;
typedef struct RTCRtpReceiveParameters RTCRtpReceiveParameters;
typedef struct RTCRtpContributingSource RTCRtpContributingSource;
typedef struct RTCRtpSynchronizationSource RTCRtpSynchronizationSource;
typedef struct RTCStatsReport RTCStatsReport;


DECLARE_EMLITE_TYPE(RTCRtpReceiveParameters, em_Val);
DECLARE_EMLITE_TYPE(RTCRtpContributingSource, em_Val);

jb_Any RTCRtpContributingSource_timestamp(const RTCRtpContributingSource *self);

void RTCRtpContributingSource_set_timestamp(RTCRtpContributingSource* self, jb_Any * value);

unsigned long RTCRtpContributingSource_source(const RTCRtpContributingSource *self);

void RTCRtpContributingSource_set_source(RTCRtpContributingSource* self, unsigned long value);

double RTCRtpContributingSource_audioLevel(const RTCRtpContributingSource *self);

void RTCRtpContributingSource_set_audioLevel(RTCRtpContributingSource* self, double value);

unsigned long RTCRtpContributingSource_rtpTimestamp(const RTCRtpContributingSource *self);

void RTCRtpContributingSource_set_rtpTimestamp(RTCRtpContributingSource* self, unsigned long value);
DECLARE_EMLITE_TYPE(RTCRtpSynchronizationSource, em_Val);
DECLARE_EMLITE_TYPE(RTCRtpReceiver, em_Val);

MediaStreamTrack RTCRtpReceiver_track(const RTCRtpReceiver *self);

RTCDtlsTransport RTCRtpReceiver_transport(const RTCRtpReceiver *self);

RTCRtpCapabilities RTCRtpReceiver_getCapabilities(RTCRtpReceiver* self , jb_String * kind);

RTCRtpReceiveParameters RTCRtpReceiver_getParameters(RTCRtpReceiver* self );

jb_Array RTCRtpReceiver_getContributingSources(RTCRtpReceiver* self );

jb_Array RTCRtpReceiver_getSynchronizationSources(RTCRtpReceiver* self );

jb_Promise RTCRtpReceiver_getStats(RTCRtpReceiver* self );

jb_Any RTCRtpReceiver_jitterBufferTarget(const RTCRtpReceiver *self);

void RTCRtpReceiver_set_jitterBufferTarget(RTCRtpReceiver* self, jb_Any * value);

jb_Any RTCRtpReceiver_transform(const RTCRtpReceiver *self);

void RTCRtpReceiver_set_transform(RTCRtpReceiver* self, jb_Any * value);
