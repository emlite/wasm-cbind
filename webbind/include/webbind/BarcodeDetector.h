#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DetectedBarcode DetectedBarcode;
typedef struct DOMRectReadOnly DOMRectReadOnly;


DECLARE_EMLITE_TYPE(DetectedBarcode, em_Val);

DOMRectReadOnly DetectedBarcode_boundingBox(const DetectedBarcode *self);

void DetectedBarcode_set_boundingBox(DetectedBarcode* self, DOMRectReadOnly * value);

jb_String DetectedBarcode_rawValue(const DetectedBarcode *self);

void DetectedBarcode_set_rawValue(DetectedBarcode* self, jb_String * value);

BarcodeFormat DetectedBarcode_format(const DetectedBarcode *self);

void DetectedBarcode_set_format(DetectedBarcode* self, BarcodeFormat * value);

jb_Array DetectedBarcode_cornerPoints(const DetectedBarcode *self);

void DetectedBarcode_set_cornerPoints(DetectedBarcode* self, jb_Array * value);
DECLARE_EMLITE_TYPE(BarcodeDetector, em_Val);

BarcodeDetector BarcodeDetector_new0();

BarcodeDetector BarcodeDetector_new1(jb_Any * barcodeDetectorOptions);

jb_Promise BarcodeDetector_getSupportedFormats(BarcodeDetector* self );

jb_Promise BarcodeDetector_detect(BarcodeDetector* self , jb_Any * image);
