#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HandwritingStroke HandwritingStroke;
typedef struct HandwritingPrediction HandwritingPrediction;


DECLARE_EMLITE_TYPE(HandwritingPrediction, em_Val);

jb_String HandwritingPrediction_text(const HandwritingPrediction *self);

void HandwritingPrediction_set_text(HandwritingPrediction* self, jb_String * value);

jb_Array HandwritingPrediction_segmentationResult(const HandwritingPrediction *self);

void HandwritingPrediction_set_segmentationResult(HandwritingPrediction* self, jb_Array * value);
DECLARE_EMLITE_TYPE(HandwritingDrawing, em_Val);

jb_Undefined HandwritingDrawing_addStroke(HandwritingDrawing* self , HandwritingStroke * stroke);

jb_Undefined HandwritingDrawing_removeStroke(HandwritingDrawing* self , HandwritingStroke * stroke);

jb_Undefined HandwritingDrawing_clear(HandwritingDrawing* self );

jb_Array HandwritingDrawing_getStrokes(HandwritingDrawing* self );

jb_Promise HandwritingDrawing_getPrediction(HandwritingDrawing* self );
