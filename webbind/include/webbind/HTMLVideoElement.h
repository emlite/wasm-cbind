#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLMediaElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct VideoPlaybackQuality VideoPlaybackQuality;
typedef struct PictureInPictureWindow PictureInPictureWindow;


DECLARE_EMLITE_TYPE(HTMLVideoElement, HTMLMediaElement);

HTMLVideoElement HTMLVideoElement_new();

unsigned long HTMLVideoElement_width(const HTMLVideoElement *self);

void HTMLVideoElement_set_width(HTMLVideoElement* self, unsigned long value);

unsigned long HTMLVideoElement_height(const HTMLVideoElement *self);

void HTMLVideoElement_set_height(HTMLVideoElement* self, unsigned long value);

unsigned long HTMLVideoElement_videoWidth(const HTMLVideoElement *self);

unsigned long HTMLVideoElement_videoHeight(const HTMLVideoElement *self);

jb_String HTMLVideoElement_poster(const HTMLVideoElement *self);

void HTMLVideoElement_set_poster(HTMLVideoElement* self, jb_String * value);

bool HTMLVideoElement_playsInline(const HTMLVideoElement *self);

void HTMLVideoElement_set_playsInline(HTMLVideoElement* self, bool value);

VideoPlaybackQuality HTMLVideoElement_getVideoPlaybackQuality(HTMLVideoElement* self );

jb_Promise HTMLVideoElement_requestPictureInPicture(HTMLVideoElement* self );

jb_Any HTMLVideoElement_onenterpictureinpicture(const HTMLVideoElement *self);

void HTMLVideoElement_set_onenterpictureinpicture(HTMLVideoElement* self, jb_Any * value);

jb_Any HTMLVideoElement_onleavepictureinpicture(const HTMLVideoElement *self);

void HTMLVideoElement_set_onleavepictureinpicture(HTMLVideoElement* self, jb_Any * value);

bool HTMLVideoElement_disablePictureInPicture(const HTMLVideoElement *self);

void HTMLVideoElement_set_disablePictureInPicture(HTMLVideoElement* self, bool value);

unsigned long HTMLVideoElement_requestVideoFrameCallback(HTMLVideoElement* self , jb_Function * callback);

jb_Undefined HTMLVideoElement_cancelVideoFrameCallback(HTMLVideoElement* self , unsigned long handle);
