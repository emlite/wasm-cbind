#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "IDBRequest.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(IDBOpenDBRequest, IDBRequest);

jb_Any IDBOpenDBRequest_onblocked(const IDBOpenDBRequest *self);

void IDBOpenDBRequest_set_onblocked(IDBOpenDBRequest* self, jb_Any * value);

jb_Any IDBOpenDBRequest_onupgradeneeded(const IDBOpenDBRequest *self);

void IDBOpenDBRequest_set_onupgradeneeded(IDBOpenDBRequest* self, jb_Any * value);
