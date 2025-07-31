#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct RTCRtpSender RTCRtpSender;
typedef struct RTCRtpReceiver RTCRtpReceiver;
typedef struct RTCRtpCodec RTCRtpCodec;


DECLARE_EMLITE_TYPE(RTCRtpCodec, em_Val);

jb_String RTCRtpCodec_mimeType(const RTCRtpCodec *self);

void RTCRtpCodec_set_mimeType(RTCRtpCodec* self, jb_String * value);

unsigned long RTCRtpCodec_clockRate(const RTCRtpCodec *self);

void RTCRtpCodec_set_clockRate(RTCRtpCodec* self, unsigned long value);

unsigned short RTCRtpCodec_channels(const RTCRtpCodec *self);

void RTCRtpCodec_set_channels(RTCRtpCodec* self, unsigned short value);

jb_String RTCRtpCodec_sdpFmtpLine(const RTCRtpCodec *self);

void RTCRtpCodec_set_sdpFmtpLine(RTCRtpCodec* self, jb_String * value);
DECLARE_EMLITE_TYPE(RTCRtpTransceiver, em_Val);

jb_String RTCRtpTransceiver_mid(const RTCRtpTransceiver *self);

RTCRtpSender RTCRtpTransceiver_sender(const RTCRtpTransceiver *self);

RTCRtpReceiver RTCRtpTransceiver_receiver(const RTCRtpTransceiver *self);

RTCRtpTransceiverDirection RTCRtpTransceiver_direction(const RTCRtpTransceiver *self);

void RTCRtpTransceiver_set_direction(RTCRtpTransceiver* self, RTCRtpTransceiverDirection * value);

RTCRtpTransceiverDirection RTCRtpTransceiver_currentDirection(const RTCRtpTransceiver *self);

jb_Undefined RTCRtpTransceiver_stop(RTCRtpTransceiver* self );

jb_Undefined RTCRtpTransceiver_setCodecPreferences(RTCRtpTransceiver* self , jb_Array * codecs);
