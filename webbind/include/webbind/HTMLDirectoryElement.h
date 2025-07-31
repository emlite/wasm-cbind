#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLDirectoryElement, HTMLElement);

HTMLDirectoryElement HTMLDirectoryElement_new();

bool HTMLDirectoryElement_compact(const HTMLDirectoryElement *self);

void HTMLDirectoryElement_set_compact(HTMLDirectoryElement* self, bool value);
