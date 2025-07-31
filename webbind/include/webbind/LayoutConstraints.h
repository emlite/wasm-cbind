#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(LayoutConstraints, em_Val);

double LayoutConstraints_availableInlineSize(const LayoutConstraints *self);

double LayoutConstraints_availableBlockSize(const LayoutConstraints *self);

double LayoutConstraints_fixedInlineSize(const LayoutConstraints *self);

double LayoutConstraints_fixedBlockSize(const LayoutConstraints *self);

double LayoutConstraints_percentageInlineSize(const LayoutConstraints *self);

double LayoutConstraints_percentageBlockSize(const LayoutConstraints *self);

double LayoutConstraints_blockFragmentationOffset(const LayoutConstraints *self);

BlockFragmentationType LayoutConstraints_blockFragmentationType(const LayoutConstraints *self);

jb_Any LayoutConstraints_data(const LayoutConstraints *self);
