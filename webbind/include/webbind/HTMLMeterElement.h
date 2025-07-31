#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct NodeList NodeList;


DECLARE_EMLITE_TYPE(HTMLMeterElement, HTMLElement);

HTMLMeterElement HTMLMeterElement_new();

double HTMLMeterElement_value(const HTMLMeterElement *self);

void HTMLMeterElement_set_value(HTMLMeterElement* self, double value);

double HTMLMeterElement_min(const HTMLMeterElement *self);

void HTMLMeterElement_set_min(HTMLMeterElement* self, double value);

double HTMLMeterElement_max(const HTMLMeterElement *self);

void HTMLMeterElement_set_max(HTMLMeterElement* self, double value);

double HTMLMeterElement_low(const HTMLMeterElement *self);

void HTMLMeterElement_set_low(HTMLMeterElement* self, double value);

double HTMLMeterElement_high(const HTMLMeterElement *self);

void HTMLMeterElement_set_high(HTMLMeterElement* self, double value);

double HTMLMeterElement_optimum(const HTMLMeterElement *self);

void HTMLMeterElement_set_optimum(HTMLMeterElement* self, double value);

NodeList HTMLMeterElement_labels(const HTMLMeterElement *self);
