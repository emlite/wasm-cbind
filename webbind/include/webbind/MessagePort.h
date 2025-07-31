#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct StructuredSerializeOptions StructuredSerializeOptions;


DECLARE_EMLITE_TYPE(StructuredSerializeOptions, em_Val);

jb_Array StructuredSerializeOptions_transfer(const StructuredSerializeOptions *self);

void StructuredSerializeOptions_set_transfer(StructuredSerializeOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(MessagePort, EventTarget);

jb_Undefined MessagePort_postMessage0(MessagePort* self , jb_Any * message);

jb_Undefined MessagePort_postMessage1(MessagePort* self , jb_Any * message, StructuredSerializeOptions * options);

jb_Undefined MessagePort_start(MessagePort* self );

jb_Undefined MessagePort_close(MessagePort* self );

jb_Any MessagePort_onclose(const MessagePort *self);

void MessagePort_set_onclose(MessagePort* self, jb_Any * value);

jb_Any MessagePort_onmessage(const MessagePort *self);

void MessagePort_set_onmessage(MessagePort* self, jb_Any * value);

jb_Any MessagePort_onmessageerror(const MessagePort *self);

void MessagePort_set_onmessageerror(MessagePort* self, jb_Any * value);
