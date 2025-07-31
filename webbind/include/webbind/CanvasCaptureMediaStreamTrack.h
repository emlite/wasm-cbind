#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "MediaStreamTrack.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HTMLCanvasElement HTMLCanvasElement;


DECLARE_EMLITE_TYPE(CanvasCaptureMediaStreamTrack, MediaStreamTrack);

HTMLCanvasElement CanvasCaptureMediaStreamTrack_canvas(const CanvasCaptureMediaStreamTrack *self);

jb_Undefined CanvasCaptureMediaStreamTrack_requestFrame(CanvasCaptureMediaStreamTrack* self );
