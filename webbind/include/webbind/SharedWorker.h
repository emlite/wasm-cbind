#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MessagePort MessagePort;


DECLARE_EMLITE_TYPE(SharedWorker, EventTarget);

SharedWorker SharedWorker_new0(jb_Any * scriptURL);

SharedWorker SharedWorker_new1(jb_Any * scriptURL, jb_Any * options);

jb_Any SharedWorker_port(const SharedWorker *self);

jb_Any SharedWorker_onerror(const SharedWorker *self);

void SharedWorker_set_onerror(SharedWorker* self, jb_Any * value);
