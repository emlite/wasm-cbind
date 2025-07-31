#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct IDBKeyRange IDBKeyRange;


DECLARE_EMLITE_TYPE(IDBKeyRange, em_Val);

jb_Any IDBKeyRange_lower(const IDBKeyRange *self);

jb_Any IDBKeyRange_upper(const IDBKeyRange *self);

bool IDBKeyRange_lowerOpen(const IDBKeyRange *self);

bool IDBKeyRange_upperOpen(const IDBKeyRange *self);

IDBKeyRange IDBKeyRange_only(IDBKeyRange* self , jb_Any * value);

IDBKeyRange IDBKeyRange_lowerBound0(IDBKeyRange* self , jb_Any * lower);

IDBKeyRange IDBKeyRange_lowerBound1(IDBKeyRange* self , jb_Any * lower, bool open);

IDBKeyRange IDBKeyRange_upperBound0(IDBKeyRange* self , jb_Any * upper);

IDBKeyRange IDBKeyRange_upperBound1(IDBKeyRange* self , jb_Any * upper, bool open);

IDBKeyRange IDBKeyRange_bound0(IDBKeyRange* self , jb_Any * lower, jb_Any * upper);

IDBKeyRange IDBKeyRange_bound1(IDBKeyRange* self , jb_Any * lower, jb_Any * upper, bool lowerOpen);

IDBKeyRange IDBKeyRange_bound2(IDBKeyRange* self , jb_Any * lower, jb_Any * upper, bool lowerOpen, bool upperOpen);

bool IDBKeyRange_includes(IDBKeyRange* self , jb_Any * key);
