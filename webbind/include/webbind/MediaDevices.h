#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MediaDeviceInfo MediaDeviceInfo;
typedef struct AudioOutputOptions AudioOutputOptions;
typedef struct CaptureHandleConfig CaptureHandleConfig;
typedef struct MediaTrackSupportedConstraints MediaTrackSupportedConstraints;
typedef struct MediaStream MediaStream;
typedef struct MediaStreamConstraints MediaStreamConstraints;
typedef struct DisplayMediaStreamOptions DisplayMediaStreamOptions;
typedef struct CaptureController CaptureController;


DECLARE_EMLITE_TYPE(AudioOutputOptions, em_Val);

jb_String AudioOutputOptions_deviceId(const AudioOutputOptions *self);

void AudioOutputOptions_set_deviceId(AudioOutputOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(CaptureHandleConfig, em_Val);

bool CaptureHandleConfig_exposeOrigin(const CaptureHandleConfig *self);

void CaptureHandleConfig_set_exposeOrigin(CaptureHandleConfig* self, bool value);

jb_String CaptureHandleConfig_handle(const CaptureHandleConfig *self);

void CaptureHandleConfig_set_handle(CaptureHandleConfig* self, jb_String * value);

jb_Array CaptureHandleConfig_permittedOrigins(const CaptureHandleConfig *self);

void CaptureHandleConfig_set_permittedOrigins(CaptureHandleConfig* self, jb_Array * value);
DECLARE_EMLITE_TYPE(MediaTrackSupportedConstraints, em_Val);

bool MediaTrackSupportedConstraints_displaySurface(const MediaTrackSupportedConstraints *self);

void MediaTrackSupportedConstraints_set_displaySurface(MediaTrackSupportedConstraints* self, bool value);

bool MediaTrackSupportedConstraints_logicalSurface(const MediaTrackSupportedConstraints *self);

void MediaTrackSupportedConstraints_set_logicalSurface(MediaTrackSupportedConstraints* self, bool value);

bool MediaTrackSupportedConstraints_cursor(const MediaTrackSupportedConstraints *self);

void MediaTrackSupportedConstraints_set_cursor(MediaTrackSupportedConstraints* self, bool value);

bool MediaTrackSupportedConstraints_restrictOwnAudio(const MediaTrackSupportedConstraints *self);

void MediaTrackSupportedConstraints_set_restrictOwnAudio(MediaTrackSupportedConstraints* self, bool value);

bool MediaTrackSupportedConstraints_suppressLocalAudioPlayback(const MediaTrackSupportedConstraints *self);

void MediaTrackSupportedConstraints_set_suppressLocalAudioPlayback(MediaTrackSupportedConstraints* self, bool value);
DECLARE_EMLITE_TYPE(MediaStreamConstraints, em_Val);

jb_String MediaStreamConstraints_peerIdentity(const MediaStreamConstraints *self);

void MediaStreamConstraints_set_peerIdentity(MediaStreamConstraints* self, jb_String * value);
DECLARE_EMLITE_TYPE(DisplayMediaStreamOptions, em_Val);

jb_Any DisplayMediaStreamOptions_video(const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_video(DisplayMediaStreamOptions* self, jb_Any * value);

jb_Any DisplayMediaStreamOptions_audio(const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_audio(DisplayMediaStreamOptions* self, jb_Any * value);

CaptureController DisplayMediaStreamOptions_controller(const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_controller(DisplayMediaStreamOptions* self, CaptureController * value);

SelfCapturePreferenceEnum DisplayMediaStreamOptions_selfBrowserSurface(const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_selfBrowserSurface(DisplayMediaStreamOptions* self, SelfCapturePreferenceEnum * value);

SystemAudioPreferenceEnum DisplayMediaStreamOptions_systemAudio(const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_systemAudio(DisplayMediaStreamOptions* self, SystemAudioPreferenceEnum * value);

WindowAudioPreferenceEnum DisplayMediaStreamOptions_windowAudio(const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_windowAudio(DisplayMediaStreamOptions* self, WindowAudioPreferenceEnum * value);

SurfaceSwitchingPreferenceEnum DisplayMediaStreamOptions_surfaceSwitching(const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_surfaceSwitching(DisplayMediaStreamOptions* self, SurfaceSwitchingPreferenceEnum * value);

MonitorTypeSurfacesEnum DisplayMediaStreamOptions_monitorTypeSurfaces(const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_monitorTypeSurfaces(DisplayMediaStreamOptions* self, MonitorTypeSurfacesEnum * value);
DECLARE_EMLITE_TYPE(MediaDevices, EventTarget);

jb_Any MediaDevices_ondevicechange(const MediaDevices *self);

void MediaDevices_set_ondevicechange(MediaDevices* self, jb_Any * value);

jb_Promise MediaDevices_enumerateDevices(MediaDevices* self );

jb_Promise MediaDevices_selectAudioOutput0(MediaDevices* self );

jb_Promise MediaDevices_selectAudioOutput1(MediaDevices* self , AudioOutputOptions * options);

jb_Undefined MediaDevices_setCaptureHandleConfig0(MediaDevices* self );

jb_Undefined MediaDevices_setCaptureHandleConfig1(MediaDevices* self , CaptureHandleConfig * config);

jb_Undefined MediaDevices_setSupportedCaptureActions(MediaDevices* self , jb_Array * actions);

jb_Any MediaDevices_oncaptureaction(const MediaDevices *self);

void MediaDevices_set_oncaptureaction(MediaDevices* self, jb_Any * value);

MediaTrackSupportedConstraints MediaDevices_getSupportedConstraints(MediaDevices* self );

jb_Promise MediaDevices_getUserMedia0(MediaDevices* self );

jb_Promise MediaDevices_getUserMedia1(MediaDevices* self , MediaStreamConstraints * constraints);

jb_Promise MediaDevices_getViewportMedia0(MediaDevices* self );

jb_Promise MediaDevices_getViewportMedia1(MediaDevices* self , DisplayMediaStreamOptions * options);

jb_Promise MediaDevices_getDisplayMedia0(MediaDevices* self );

jb_Promise MediaDevices_getDisplayMedia1(MediaDevices* self , DisplayMediaStreamOptions * options);
