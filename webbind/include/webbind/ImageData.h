#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ImageDataSettings ImageDataSettings;


DECLARE_EMLITE_TYPE(ImageData, em_Val);

ImageData ImageData_new0(jb_Any * data, unsigned long sw);

ImageData ImageData_new1(jb_Any * data, unsigned long sw, unsigned long sh);

ImageData ImageData_new2(jb_Any * data, unsigned long sw, unsigned long sh, ImageDataSettings * settings);

unsigned long ImageData_width(const ImageData *self);

unsigned long ImageData_height(const ImageData *self);

jb_Any ImageData_data(const ImageData *self);

ImageDataPixelFormat ImageData_pixelFormat(const ImageData *self);

PredefinedColorSpace ImageData_colorSpace(const ImageData *self);
