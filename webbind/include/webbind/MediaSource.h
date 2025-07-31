#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MediaSourceHandle MediaSourceHandle;
typedef struct SourceBufferList SourceBufferList;
typedef struct SourceBuffer SourceBuffer;


DECLARE_EMLITE_TYPE(MediaSource, EventTarget);

MediaSource MediaSource_new();

MediaSourceHandle MediaSource_handle(const MediaSource *self);

SourceBufferList MediaSource_sourceBuffers(const MediaSource *self);

SourceBufferList MediaSource_activeSourceBuffers(const MediaSource *self);

ReadyState MediaSource_readyState(const MediaSource *self);

double MediaSource_duration(const MediaSource *self);

void MediaSource_set_duration(MediaSource* self, double value);

jb_Any MediaSource_onsourceopen(const MediaSource *self);

void MediaSource_set_onsourceopen(MediaSource* self, jb_Any * value);

jb_Any MediaSource_onsourceended(const MediaSource *self);

void MediaSource_set_onsourceended(MediaSource* self, jb_Any * value);

jb_Any MediaSource_onsourceclose(const MediaSource *self);

void MediaSource_set_onsourceclose(MediaSource* self, jb_Any * value);

bool MediaSource_canConstructInDedicatedWorker(const MediaSource *self);

SourceBuffer MediaSource_addSourceBuffer(MediaSource* self , jb_String * type);

jb_Undefined MediaSource_removeSourceBuffer(MediaSource* self , SourceBuffer * sourceBuffer);

jb_Undefined MediaSource_endOfStream0(MediaSource* self );

jb_Undefined MediaSource_endOfStream1(MediaSource* self , EndOfStreamError * error);

jb_Undefined MediaSource_setLiveSeekableRange(MediaSource* self , double start, double end);

jb_Undefined MediaSource_clearLiveSeekableRange(MediaSource* self );

bool MediaSource_isTypeSupported(MediaSource* self , jb_String * type);
