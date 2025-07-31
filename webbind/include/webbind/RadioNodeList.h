#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "NodeList.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(RadioNodeList, NodeList);

jb_String RadioNodeList_value(const RadioNodeList *self);

void RadioNodeList_set_value(RadioNodeList* self, jb_String * value);
