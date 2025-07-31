#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct TimeRanges TimeRanges;
typedef struct AudioTrackList AudioTrackList;
typedef struct VideoTrackList VideoTrackList;
typedef struct TextTrackList TextTrackList;


DECLARE_EMLITE_TYPE(SourceBuffer, EventTarget);

AppendMode SourceBuffer_mode(const SourceBuffer *self);

void SourceBuffer_set_mode(SourceBuffer* self, AppendMode * value);

bool SourceBuffer_updating(const SourceBuffer *self);

TimeRanges SourceBuffer_buffered(const SourceBuffer *self);

double SourceBuffer_timestampOffset(const SourceBuffer *self);

void SourceBuffer_set_timestampOffset(SourceBuffer* self, double value);

AudioTrackList SourceBuffer_audioTracks(const SourceBuffer *self);

VideoTrackList SourceBuffer_videoTracks(const SourceBuffer *self);

TextTrackList SourceBuffer_textTracks(const SourceBuffer *self);

double SourceBuffer_appendWindowStart(const SourceBuffer *self);

void SourceBuffer_set_appendWindowStart(SourceBuffer* self, double value);

double SourceBuffer_appendWindowEnd(const SourceBuffer *self);

void SourceBuffer_set_appendWindowEnd(SourceBuffer* self, double value);

jb_Any SourceBuffer_onupdatestart(const SourceBuffer *self);

void SourceBuffer_set_onupdatestart(SourceBuffer* self, jb_Any * value);

jb_Any SourceBuffer_onupdate(const SourceBuffer *self);

void SourceBuffer_set_onupdate(SourceBuffer* self, jb_Any * value);

jb_Any SourceBuffer_onupdateend(const SourceBuffer *self);

void SourceBuffer_set_onupdateend(SourceBuffer* self, jb_Any * value);

jb_Any SourceBuffer_onerror(const SourceBuffer *self);

void SourceBuffer_set_onerror(SourceBuffer* self, jb_Any * value);

jb_Any SourceBuffer_onabort(const SourceBuffer *self);

void SourceBuffer_set_onabort(SourceBuffer* self, jb_Any * value);

jb_Undefined SourceBuffer_appendBuffer(SourceBuffer* self , jb_Any * data);

jb_Undefined SourceBuffer_abort(SourceBuffer* self );

jb_Undefined SourceBuffer_changeType(SourceBuffer* self , jb_String * type);

jb_Undefined SourceBuffer_remove(SourceBuffer* self , double start, double end);
