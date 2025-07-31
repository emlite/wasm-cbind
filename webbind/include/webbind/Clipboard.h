#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ClipboardUnsanitizedFormats ClipboardUnsanitizedFormats;


DECLARE_EMLITE_TYPE(ClipboardUnsanitizedFormats, em_Val);

jb_Array ClipboardUnsanitizedFormats_unsanitized(const ClipboardUnsanitizedFormats *self);

void ClipboardUnsanitizedFormats_set_unsanitized(ClipboardUnsanitizedFormats* self, jb_Array * value);
DECLARE_EMLITE_TYPE(Clipboard, EventTarget);

jb_Promise Clipboard_read0(Clipboard* self );

jb_Promise Clipboard_read1(Clipboard* self , ClipboardUnsanitizedFormats * formats);

jb_Promise Clipboard_readText(Clipboard* self );

jb_Promise Clipboard_write(Clipboard* self , jb_Any * data);

jb_Promise Clipboard_writeText(Clipboard* self , jb_String * data);
