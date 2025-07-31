#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct IDBObjectStore IDBObjectStore;
typedef struct IDBRequest IDBRequest;


DECLARE_EMLITE_TYPE(IDBIndex, em_Val);

jb_String IDBIndex_name(const IDBIndex *self);

void IDBIndex_set_name(IDBIndex* self, jb_String * value);

IDBObjectStore IDBIndex_objectStore(const IDBIndex *self);

jb_Any IDBIndex_keyPath(const IDBIndex *self);

bool IDBIndex_multiEntry(const IDBIndex *self);

bool IDBIndex_unique(const IDBIndex *self);

IDBRequest IDBIndex_get(IDBIndex* self , jb_Any * query);

IDBRequest IDBIndex_getKey(IDBIndex* self , jb_Any * query);

IDBRequest IDBIndex_getAll0(IDBIndex* self );

IDBRequest IDBIndex_getAll1(IDBIndex* self , jb_Any * query);

IDBRequest IDBIndex_getAll2(IDBIndex* self , jb_Any * query, unsigned long count);

IDBRequest IDBIndex_getAllKeys0(IDBIndex* self );

IDBRequest IDBIndex_getAllKeys1(IDBIndex* self , jb_Any * query);

IDBRequest IDBIndex_getAllKeys2(IDBIndex* self , jb_Any * query, unsigned long count);

IDBRequest IDBIndex_count0(IDBIndex* self );

IDBRequest IDBIndex_count1(IDBIndex* self , jb_Any * query);

IDBRequest IDBIndex_openCursor0(IDBIndex* self );

IDBRequest IDBIndex_openCursor1(IDBIndex* self , jb_Any * query);

IDBRequest IDBIndex_openCursor2(IDBIndex* self , jb_Any * query, IDBCursorDirection * direction);

IDBRequest IDBIndex_openKeyCursor0(IDBIndex* self );

IDBRequest IDBIndex_openKeyCursor1(IDBIndex* self , jb_Any * query);

IDBRequest IDBIndex_openKeyCursor2(IDBIndex* self , jb_Any * query, IDBCursorDirection * direction);
