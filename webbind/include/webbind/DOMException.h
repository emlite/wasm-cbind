#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(DOMException, em_Val);

DOMException DOMException_new0();

DOMException DOMException_new1(jb_String * message);

DOMException DOMException_new2(jb_String * message, jb_String * name);

jb_String DOMException_name(const DOMException *self);

jb_String DOMException_message(const DOMException *self);

unsigned short DOMException_code(const DOMException *self);
