#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MediaStream MediaStream;


DECLARE_EMLITE_TYPE(MediaRecorder, EventTarget);

MediaRecorder MediaRecorder_new0(MediaStream * stream);

MediaRecorder MediaRecorder_new1(MediaStream * stream, jb_Any * options);

MediaStream MediaRecorder_stream(const MediaRecorder *self);

jb_String MediaRecorder_mimeType(const MediaRecorder *self);

RecordingState MediaRecorder_state(const MediaRecorder *self);

jb_Any MediaRecorder_onstart(const MediaRecorder *self);

void MediaRecorder_set_onstart(MediaRecorder* self, jb_Any * value);

jb_Any MediaRecorder_onstop(const MediaRecorder *self);

void MediaRecorder_set_onstop(MediaRecorder* self, jb_Any * value);

jb_Any MediaRecorder_ondataavailable(const MediaRecorder *self);

void MediaRecorder_set_ondataavailable(MediaRecorder* self, jb_Any * value);

jb_Any MediaRecorder_onpause(const MediaRecorder *self);

void MediaRecorder_set_onpause(MediaRecorder* self, jb_Any * value);

jb_Any MediaRecorder_onresume(const MediaRecorder *self);

void MediaRecorder_set_onresume(MediaRecorder* self, jb_Any * value);

jb_Any MediaRecorder_onerror(const MediaRecorder *self);

void MediaRecorder_set_onerror(MediaRecorder* self, jb_Any * value);

unsigned long MediaRecorder_videoBitsPerSecond(const MediaRecorder *self);

unsigned long MediaRecorder_audioBitsPerSecond(const MediaRecorder *self);

BitrateMode MediaRecorder_audioBitrateMode(const MediaRecorder *self);

jb_Undefined MediaRecorder_start0(MediaRecorder* self );

jb_Undefined MediaRecorder_start1(MediaRecorder* self , unsigned long timeslice);

jb_Undefined MediaRecorder_stop(MediaRecorder* self );

jb_Undefined MediaRecorder_pause(MediaRecorder* self );

jb_Undefined MediaRecorder_resume(MediaRecorder* self );

jb_Undefined MediaRecorder_requestData(MediaRecorder* self );

bool MediaRecorder_isTypeSupported(MediaRecorder* self , jb_String * type);
