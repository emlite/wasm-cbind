#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMException DOMException;
typedef struct IDBTransaction IDBTransaction;


DECLARE_EMLITE_TYPE(IDBRequest, EventTarget);

jb_Any IDBRequest_result(const IDBRequest *self);

DOMException IDBRequest_error(const IDBRequest *self);

jb_Any IDBRequest_source(const IDBRequest *self);

IDBTransaction IDBRequest_transaction(const IDBRequest *self);

IDBRequestReadyState IDBRequest_readyState(const IDBRequest *self);

jb_Any IDBRequest_onsuccess(const IDBRequest *self);

void IDBRequest_set_onsuccess(IDBRequest* self, jb_Any * value);

jb_Any IDBRequest_onerror(const IDBRequest *self);

void IDBRequest_set_onerror(IDBRequest* self, jb_Any * value);
