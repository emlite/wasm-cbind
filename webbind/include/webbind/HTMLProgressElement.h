#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct NodeList NodeList;


DECLARE_EMLITE_TYPE(HTMLProgressElement, HTMLElement);

HTMLProgressElement HTMLProgressElement_new();

double HTMLProgressElement_value(const HTMLProgressElement *self);

void HTMLProgressElement_set_value(HTMLProgressElement* self, double value);

double HTMLProgressElement_max(const HTMLProgressElement *self);

void HTMLProgressElement_set_max(HTMLProgressElement* self, double value);

double HTMLProgressElement_position(const HTMLProgressElement *self);

NodeList HTMLProgressElement_labels(const HTMLProgressElement *self);
