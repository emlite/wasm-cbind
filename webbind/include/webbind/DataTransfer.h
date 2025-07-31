#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DataTransferItemList DataTransferItemList;
typedef struct Element Element;
typedef struct FileList FileList;


DECLARE_EMLITE_TYPE(DataTransfer, em_Val);

DataTransfer DataTransfer_new();

jb_String DataTransfer_dropEffect(const DataTransfer *self);

void DataTransfer_set_dropEffect(DataTransfer* self, jb_String * value);

jb_String DataTransfer_effectAllowed(const DataTransfer *self);

void DataTransfer_set_effectAllowed(DataTransfer* self, jb_String * value);

DataTransferItemList DataTransfer_items(const DataTransfer *self);

jb_Undefined DataTransfer_setDragImage(DataTransfer* self , Element * image, long x, long y);

jb_Array DataTransfer_types(const DataTransfer *self);

jb_String DataTransfer_getData(DataTransfer* self , jb_String * format);

jb_Undefined DataTransfer_setData(DataTransfer* self , jb_String * format, jb_String * data);

jb_Undefined DataTransfer_clearData0(DataTransfer* self );

jb_Undefined DataTransfer_clearData1(DataTransfer* self , jb_String * format);

FileList DataTransfer_files(const DataTransfer *self);
