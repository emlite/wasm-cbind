#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Node Node;


DECLARE_EMLITE_TYPE(XPathResult, em_Val);

unsigned short XPathResult_resultType(const XPathResult *self);

double XPathResult_numberValue(const XPathResult *self);

jb_String XPathResult_stringValue(const XPathResult *self);

bool XPathResult_booleanValue(const XPathResult *self);

Node XPathResult_singleNodeValue(const XPathResult *self);

bool XPathResult_invalidIteratorState(const XPathResult *self);

unsigned long XPathResult_snapshotLength(const XPathResult *self);

Node XPathResult_iterateNext(XPathResult* self );

Node XPathResult_snapshotItem(XPathResult* self , unsigned long index);
