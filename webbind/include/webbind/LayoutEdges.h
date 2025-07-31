#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(LayoutEdges, em_Val);

double LayoutEdges_inlineStart(const LayoutEdges *self);

double LayoutEdges_inlineEnd(const LayoutEdges *self);

double LayoutEdges_blockStart(const LayoutEdges *self);

double LayoutEdges_blockEnd(const LayoutEdges *self);

double LayoutEdges_inline_(const LayoutEdges *self);

double LayoutEdges_block(const LayoutEdges *self);
