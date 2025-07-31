#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DelegatedInkTrailPresenter DelegatedInkTrailPresenter;
typedef struct InkPresenterParam InkPresenterParam;
typedef struct Element Element;


DECLARE_EMLITE_TYPE(InkPresenterParam, em_Val);

Element InkPresenterParam_presentationArea(const InkPresenterParam *self);

void InkPresenterParam_set_presentationArea(InkPresenterParam* self, Element * value);
DECLARE_EMLITE_TYPE(Ink, em_Val);

jb_Promise Ink_requestPresenter0(Ink* self );

jb_Promise Ink_requestPresenter1(Ink* self , InkPresenterParam * param);
