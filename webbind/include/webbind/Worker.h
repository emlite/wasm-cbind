#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "MessagePort.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(Worker, EventTarget);

Worker Worker_new0(jb_Any * scriptURL);

Worker Worker_new1(jb_Any * scriptURL, jb_Any * options);

jb_Undefined Worker_terminate(Worker* self );

jb_Undefined Worker_postMessage0(Worker* self , jb_Any * message);

jb_Undefined Worker_postMessage1(Worker* self , jb_Any * message, StructuredSerializeOptions * options);

jb_Any Worker_onerror(const Worker *self);

void Worker_set_onerror(Worker* self, jb_Any * value);

jb_Any Worker_onmessage(const Worker *self);

void Worker_set_onmessage(Worker* self, jb_Any * value);

jb_Any Worker_onmessageerror(const Worker *self);

void Worker_set_onmessageerror(Worker* self, jb_Any * value);
