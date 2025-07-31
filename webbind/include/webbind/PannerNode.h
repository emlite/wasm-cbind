#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioParam AudioParam;


DECLARE_EMLITE_TYPE(PannerNode, AudioNode);

PannerNode PannerNode_new0(BaseAudioContext * context);

PannerNode PannerNode_new1(BaseAudioContext * context, jb_Any * options);

PanningModelType PannerNode_panningModel(const PannerNode *self);

void PannerNode_set_panningModel(PannerNode* self, PanningModelType * value);

AudioParam PannerNode_positionX(const PannerNode *self);

AudioParam PannerNode_positionY(const PannerNode *self);

AudioParam PannerNode_positionZ(const PannerNode *self);

AudioParam PannerNode_orientationX(const PannerNode *self);

AudioParam PannerNode_orientationY(const PannerNode *self);

AudioParam PannerNode_orientationZ(const PannerNode *self);

DistanceModelType PannerNode_distanceModel(const PannerNode *self);

void PannerNode_set_distanceModel(PannerNode* self, DistanceModelType * value);

double PannerNode_refDistance(const PannerNode *self);

void PannerNode_set_refDistance(PannerNode* self, double value);

double PannerNode_maxDistance(const PannerNode *self);

void PannerNode_set_maxDistance(PannerNode* self, double value);

double PannerNode_rolloffFactor(const PannerNode *self);

void PannerNode_set_rolloffFactor(PannerNode* self, double value);

double PannerNode_coneInnerAngle(const PannerNode *self);

void PannerNode_set_coneInnerAngle(PannerNode* self, double value);

double PannerNode_coneOuterAngle(const PannerNode *self);

void PannerNode_set_coneOuterAngle(PannerNode* self, double value);

double PannerNode_coneOuterGain(const PannerNode *self);

void PannerNode_set_coneOuterGain(PannerNode* self, double value);

jb_Undefined PannerNode_setPosition(PannerNode* self , float x, float y, float z);

jb_Undefined PannerNode_setOrientation(PannerNode* self , float x, float y, float z);
