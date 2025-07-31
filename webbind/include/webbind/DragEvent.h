#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "MouseEvent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DataTransfer DataTransfer;


DECLARE_EMLITE_TYPE(DragEvent, MouseEvent);

DragEvent DragEvent_new0(jb_String * type);

DragEvent DragEvent_new1(jb_String * type, jb_Any * eventInitDict);

DataTransfer DragEvent_dataTransfer(const DragEvent *self);
