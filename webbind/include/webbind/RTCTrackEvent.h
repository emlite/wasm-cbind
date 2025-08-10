#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCTrackEventInit RTCTrackEventInit;
typedef struct RTCRtpReceiver RTCRtpReceiver;
typedef struct MediaStreamTrack MediaStreamTrack;
typedef struct MediaStream MediaStream;
typedef struct RTCRtpTransceiver RTCRtpTransceiver;

DECLARE_EMLITE_TYPE(RTCTrackEvent, Event);

RTCTrackEvent RTCTrackEvent_new(jb_String * type, RTCTrackEventInit * eventInitDict);

RTCRtpReceiver RTCTrackEvent_receiver(const RTCTrackEvent *self);

MediaStreamTrack RTCTrackEvent_track(const RTCTrackEvent *self);

jb_Array RTCTrackEvent_streams(const RTCTrackEvent *self);

RTCRtpTransceiver RTCTrackEvent_transceiver(const RTCTrackEvent *self);

#ifdef __cplusplus
}
#endif
