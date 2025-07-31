#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMStringList DOMStringList;
typedef struct IDBTransaction IDBTransaction;
typedef struct IDBRequest IDBRequest;
typedef struct IDBIndex IDBIndex;
typedef struct IDBIndexParameters IDBIndexParameters;


DECLARE_EMLITE_TYPE(IDBIndexParameters, em_Val);

bool IDBIndexParameters_unique(const IDBIndexParameters *self);

void IDBIndexParameters_set_unique(IDBIndexParameters* self, bool value);

bool IDBIndexParameters_multiEntry(const IDBIndexParameters *self);

void IDBIndexParameters_set_multiEntry(IDBIndexParameters* self, bool value);
DECLARE_EMLITE_TYPE(IDBObjectStore, em_Val);

jb_String IDBObjectStore_name(const IDBObjectStore *self);

void IDBObjectStore_set_name(IDBObjectStore* self, jb_String * value);

jb_Any IDBObjectStore_keyPath(const IDBObjectStore *self);

DOMStringList IDBObjectStore_indexNames(const IDBObjectStore *self);

IDBTransaction IDBObjectStore_transaction(const IDBObjectStore *self);

bool IDBObjectStore_autoIncrement(const IDBObjectStore *self);

IDBRequest IDBObjectStore_put0(IDBObjectStore* self , jb_Any * value);

IDBRequest IDBObjectStore_put1(IDBObjectStore* self , jb_Any * value, jb_Any * key);

IDBRequest IDBObjectStore_add0(IDBObjectStore* self , jb_Any * value);

IDBRequest IDBObjectStore_add1(IDBObjectStore* self , jb_Any * value, jb_Any * key);

IDBRequest IDBObjectStore_delete_(IDBObjectStore* self , jb_Any * query);

IDBRequest IDBObjectStore_clear(IDBObjectStore* self );

IDBRequest IDBObjectStore_get(IDBObjectStore* self , jb_Any * query);

IDBRequest IDBObjectStore_getKey(IDBObjectStore* self , jb_Any * query);

IDBRequest IDBObjectStore_getAll0(IDBObjectStore* self );

IDBRequest IDBObjectStore_getAll1(IDBObjectStore* self , jb_Any * query);

IDBRequest IDBObjectStore_getAll2(IDBObjectStore* self , jb_Any * query, unsigned long count);

IDBRequest IDBObjectStore_getAllKeys0(IDBObjectStore* self );

IDBRequest IDBObjectStore_getAllKeys1(IDBObjectStore* self , jb_Any * query);

IDBRequest IDBObjectStore_getAllKeys2(IDBObjectStore* self , jb_Any * query, unsigned long count);

IDBRequest IDBObjectStore_count0(IDBObjectStore* self );

IDBRequest IDBObjectStore_count1(IDBObjectStore* self , jb_Any * query);

IDBRequest IDBObjectStore_openCursor0(IDBObjectStore* self );

IDBRequest IDBObjectStore_openCursor1(IDBObjectStore* self , jb_Any * query);

IDBRequest IDBObjectStore_openCursor2(IDBObjectStore* self , jb_Any * query, IDBCursorDirection * direction);

IDBRequest IDBObjectStore_openKeyCursor0(IDBObjectStore* self );

IDBRequest IDBObjectStore_openKeyCursor1(IDBObjectStore* self , jb_Any * query);

IDBRequest IDBObjectStore_openKeyCursor2(IDBObjectStore* self , jb_Any * query, IDBCursorDirection * direction);

IDBIndex IDBObjectStore_index(IDBObjectStore* self , jb_String * name);

IDBIndex IDBObjectStore_createIndex0(IDBObjectStore* self , jb_String * name, jb_Any * keyPath);

IDBIndex IDBObjectStore_createIndex1(IDBObjectStore* self , jb_String * name, jb_Any * keyPath, IDBIndexParameters * options);

jb_Undefined IDBObjectStore_deleteIndex(IDBObjectStore* self , jb_String * name);
