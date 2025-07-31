#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ChildBreakToken ChildBreakToken;


DECLARE_EMLITE_TYPE(LayoutFragment, em_Val);

double LayoutFragment_inlineSize(const LayoutFragment *self);

double LayoutFragment_blockSize(const LayoutFragment *self);

double LayoutFragment_inlineOffset(const LayoutFragment *self);

void LayoutFragment_set_inlineOffset(LayoutFragment* self, double value);

double LayoutFragment_blockOffset(const LayoutFragment *self);

void LayoutFragment_set_blockOffset(LayoutFragment* self, double value);

jb_Any LayoutFragment_data(const LayoutFragment *self);

ChildBreakToken LayoutFragment_breakToken(const LayoutFragment *self);
