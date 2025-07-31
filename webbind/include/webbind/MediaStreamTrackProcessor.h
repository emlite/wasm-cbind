#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ReadableStream ReadableStream;


DECLARE_EMLITE_TYPE(MediaStreamTrackProcessor, em_Val);

MediaStreamTrackProcessor MediaStreamTrackProcessor_new(jb_Any * init);

ReadableStream MediaStreamTrackProcessor_readable(const MediaStreamTrackProcessor *self);
