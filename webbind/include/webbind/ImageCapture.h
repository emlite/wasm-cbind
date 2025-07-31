#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Blob Blob;
typedef struct PhotoSettings PhotoSettings;
typedef struct PhotoCapabilities PhotoCapabilities;
typedef struct ImageBitmap ImageBitmap;
typedef struct MediaStreamTrack MediaStreamTrack;


DECLARE_EMLITE_TYPE(PhotoSettings, em_Val);

FillLightMode PhotoSettings_fillLightMode(const PhotoSettings *self);

void PhotoSettings_set_fillLightMode(PhotoSettings* self, FillLightMode * value);

double PhotoSettings_imageHeight(const PhotoSettings *self);

void PhotoSettings_set_imageHeight(PhotoSettings* self, double value);

double PhotoSettings_imageWidth(const PhotoSettings *self);

void PhotoSettings_set_imageWidth(PhotoSettings* self, double value);

bool PhotoSettings_redEyeReduction(const PhotoSettings *self);

void PhotoSettings_set_redEyeReduction(PhotoSettings* self, bool value);
DECLARE_EMLITE_TYPE(PhotoCapabilities, em_Val);

RedEyeReduction PhotoCapabilities_redEyeReduction(const PhotoCapabilities *self);

void PhotoCapabilities_set_redEyeReduction(PhotoCapabilities* self, RedEyeReduction * value);

jb_Any PhotoCapabilities_imageHeight(const PhotoCapabilities *self);

void PhotoCapabilities_set_imageHeight(PhotoCapabilities* self, jb_Any * value);

jb_Any PhotoCapabilities_imageWidth(const PhotoCapabilities *self);

void PhotoCapabilities_set_imageWidth(PhotoCapabilities* self, jb_Any * value);

jb_Array PhotoCapabilities_fillLightMode(const PhotoCapabilities *self);

void PhotoCapabilities_set_fillLightMode(PhotoCapabilities* self, jb_Array * value);
DECLARE_EMLITE_TYPE(ImageCapture, em_Val);

ImageCapture ImageCapture_new(MediaStreamTrack * videoTrack);

jb_Promise ImageCapture_takePhoto0(ImageCapture* self );

jb_Promise ImageCapture_takePhoto1(ImageCapture* self , PhotoSettings * photoSettings);

jb_Promise ImageCapture_getPhotoCapabilities(ImageCapture* self );

jb_Promise ImageCapture_getPhotoSettings(ImageCapture* self );

jb_Promise ImageCapture_grabFrame(ImageCapture* self );

MediaStreamTrack ImageCapture_track(const ImageCapture *self);
