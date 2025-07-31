#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DetectedFace DetectedFace;
typedef struct DOMRectReadOnly DOMRectReadOnly;


DECLARE_EMLITE_TYPE(DetectedFace, em_Val);

DOMRectReadOnly DetectedFace_boundingBox(const DetectedFace *self);

void DetectedFace_set_boundingBox(DetectedFace* self, DOMRectReadOnly * value);

jb_Array DetectedFace_landmarks(const DetectedFace *self);

void DetectedFace_set_landmarks(DetectedFace* self, jb_Array * value);
DECLARE_EMLITE_TYPE(FaceDetector, em_Val);

FaceDetector FaceDetector_new0();

FaceDetector FaceDetector_new1(jb_Any * faceDetectorOptions);

jb_Promise FaceDetector_detect(FaceDetector* self , jb_Any * image);
