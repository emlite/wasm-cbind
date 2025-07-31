#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DataTransferItem DataTransferItem;
typedef struct File File;


DECLARE_EMLITE_TYPE(DataTransferItemList, em_Val);

unsigned long DataTransferItemList_length(const DataTransferItemList *self);

DataTransferItem DataTransferItemList_add(DataTransferItemList* self , File * data);

jb_Undefined DataTransferItemList_remove(DataTransferItemList* self , unsigned long index);

jb_Undefined DataTransferItemList_clear(DataTransferItemList* self );
