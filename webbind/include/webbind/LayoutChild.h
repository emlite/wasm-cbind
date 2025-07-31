#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct StylePropertyMapReadOnly StylePropertyMapReadOnly;
typedef struct IntrinsicSizes IntrinsicSizes;
typedef struct LayoutFragment LayoutFragment;
typedef struct LayoutConstraintsOptions LayoutConstraintsOptions;
typedef struct ChildBreakToken ChildBreakToken;


DECLARE_EMLITE_TYPE(LayoutConstraintsOptions, em_Val);

double LayoutConstraintsOptions_availableInlineSize(const LayoutConstraintsOptions *self);

void LayoutConstraintsOptions_set_availableInlineSize(LayoutConstraintsOptions* self, double value);

double LayoutConstraintsOptions_availableBlockSize(const LayoutConstraintsOptions *self);

void LayoutConstraintsOptions_set_availableBlockSize(LayoutConstraintsOptions* self, double value);

double LayoutConstraintsOptions_fixedInlineSize(const LayoutConstraintsOptions *self);

void LayoutConstraintsOptions_set_fixedInlineSize(LayoutConstraintsOptions* self, double value);

double LayoutConstraintsOptions_fixedBlockSize(const LayoutConstraintsOptions *self);

void LayoutConstraintsOptions_set_fixedBlockSize(LayoutConstraintsOptions* self, double value);

double LayoutConstraintsOptions_percentageInlineSize(const LayoutConstraintsOptions *self);

void LayoutConstraintsOptions_set_percentageInlineSize(LayoutConstraintsOptions* self, double value);

double LayoutConstraintsOptions_percentageBlockSize(const LayoutConstraintsOptions *self);

void LayoutConstraintsOptions_set_percentageBlockSize(LayoutConstraintsOptions* self, double value);

double LayoutConstraintsOptions_blockFragmentationOffset(const LayoutConstraintsOptions *self);

void LayoutConstraintsOptions_set_blockFragmentationOffset(LayoutConstraintsOptions* self, double value);

BlockFragmentationType LayoutConstraintsOptions_blockFragmentationType(const LayoutConstraintsOptions *self);

void LayoutConstraintsOptions_set_blockFragmentationType(LayoutConstraintsOptions* self, BlockFragmentationType * value);

jb_Any LayoutConstraintsOptions_data(const LayoutConstraintsOptions *self);

void LayoutConstraintsOptions_set_data(LayoutConstraintsOptions* self, jb_Any * value);
DECLARE_EMLITE_TYPE(LayoutChild, em_Val);

StylePropertyMapReadOnly LayoutChild_styleMap(const LayoutChild *self);

jb_Promise LayoutChild_intrinsicSizes(LayoutChild* self );

jb_Promise LayoutChild_layoutNextFragment(LayoutChild* self , LayoutConstraintsOptions * constraints, ChildBreakToken * breakToken);
