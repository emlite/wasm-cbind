#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMStringList DOMStringList;
typedef struct IDBDatabase IDBDatabase;
typedef struct DOMException DOMException;
typedef struct IDBObjectStore IDBObjectStore;


DECLARE_EMLITE_TYPE(IDBTransaction, EventTarget);

DOMStringList IDBTransaction_objectStoreNames(const IDBTransaction *self);

IDBTransactionMode IDBTransaction_mode(const IDBTransaction *self);

IDBTransactionDurability IDBTransaction_durability(const IDBTransaction *self);

IDBDatabase IDBTransaction_db(const IDBTransaction *self);

DOMException IDBTransaction_error(const IDBTransaction *self);

IDBObjectStore IDBTransaction_objectStore(IDBTransaction* self , jb_String * name);

jb_Undefined IDBTransaction_commit(IDBTransaction* self );

jb_Undefined IDBTransaction_abort(IDBTransaction* self );

jb_Any IDBTransaction_onabort(const IDBTransaction *self);

void IDBTransaction_set_onabort(IDBTransaction* self, jb_Any * value);

jb_Any IDBTransaction_oncomplete(const IDBTransaction *self);

void IDBTransaction_set_oncomplete(IDBTransaction* self, jb_Any * value);

jb_Any IDBTransaction_onerror(const IDBTransaction *self);

void IDBTransaction_set_onerror(IDBTransaction* self, jb_Any * value);
