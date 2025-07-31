#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRProjectionLayer XRProjectionLayer;
typedef struct XRProjectionLayerInit XRProjectionLayerInit;
typedef struct XRQuadLayer XRQuadLayer;
typedef struct XRQuadLayerInit XRQuadLayerInit;
typedef struct XRCylinderLayer XRCylinderLayer;
typedef struct XRCylinderLayerInit XRCylinderLayerInit;
typedef struct XREquirectLayer XREquirectLayer;
typedef struct XREquirectLayerInit XREquirectLayerInit;
typedef struct XRCubeLayer XRCubeLayer;
typedef struct XRCubeLayerInit XRCubeLayerInit;
typedef struct XRWebGLSubImage XRWebGLSubImage;
typedef struct XRCompositionLayer XRCompositionLayer;
typedef struct XRFrame XRFrame;
typedef struct XRView XRView;
typedef struct WebGLTexture WebGLTexture;
typedef struct XRCamera XRCamera;
typedef struct XRWebGLDepthInformation XRWebGLDepthInformation;
typedef struct XRLightProbe XRLightProbe;
typedef struct XRRigidTransform XRRigidTransform;
typedef struct DOMPointReadOnly DOMPointReadOnly;
typedef struct XRSession XRSession;


DECLARE_EMLITE_TYPE(XRProjectionLayerInit, em_Val);

XRTextureType XRProjectionLayerInit_textureType(const XRProjectionLayerInit *self);

void XRProjectionLayerInit_set_textureType(XRProjectionLayerInit* self, XRTextureType * value);

jb_Any XRProjectionLayerInit_colorFormat(const XRProjectionLayerInit *self);

void XRProjectionLayerInit_set_colorFormat(XRProjectionLayerInit* self, jb_Any * value);

jb_Any XRProjectionLayerInit_depthFormat(const XRProjectionLayerInit *self);

void XRProjectionLayerInit_set_depthFormat(XRProjectionLayerInit* self, jb_Any * value);

double XRProjectionLayerInit_scaleFactor(const XRProjectionLayerInit *self);

void XRProjectionLayerInit_set_scaleFactor(XRProjectionLayerInit* self, double value);

bool XRProjectionLayerInit_clearOnAccess(const XRProjectionLayerInit *self);

void XRProjectionLayerInit_set_clearOnAccess(XRProjectionLayerInit* self, bool value);
DECLARE_EMLITE_TYPE(XRQuadLayerInit, em_Val);

XRTextureType XRQuadLayerInit_textureType(const XRQuadLayerInit *self);

void XRQuadLayerInit_set_textureType(XRQuadLayerInit* self, XRTextureType * value);

XRRigidTransform XRQuadLayerInit_transform(const XRQuadLayerInit *self);

void XRQuadLayerInit_set_transform(XRQuadLayerInit* self, XRRigidTransform * value);

float XRQuadLayerInit_width(const XRQuadLayerInit *self);

void XRQuadLayerInit_set_width(XRQuadLayerInit* self, float value);

float XRQuadLayerInit_height(const XRQuadLayerInit *self);

void XRQuadLayerInit_set_height(XRQuadLayerInit* self, float value);
DECLARE_EMLITE_TYPE(XRCylinderLayerInit, em_Val);

XRTextureType XRCylinderLayerInit_textureType(const XRCylinderLayerInit *self);

void XRCylinderLayerInit_set_textureType(XRCylinderLayerInit* self, XRTextureType * value);

XRRigidTransform XRCylinderLayerInit_transform(const XRCylinderLayerInit *self);

void XRCylinderLayerInit_set_transform(XRCylinderLayerInit* self, XRRigidTransform * value);

float XRCylinderLayerInit_radius(const XRCylinderLayerInit *self);

void XRCylinderLayerInit_set_radius(XRCylinderLayerInit* self, float value);

float XRCylinderLayerInit_centralAngle(const XRCylinderLayerInit *self);

void XRCylinderLayerInit_set_centralAngle(XRCylinderLayerInit* self, float value);

float XRCylinderLayerInit_aspectRatio(const XRCylinderLayerInit *self);

void XRCylinderLayerInit_set_aspectRatio(XRCylinderLayerInit* self, float value);
DECLARE_EMLITE_TYPE(XREquirectLayerInit, em_Val);

XRTextureType XREquirectLayerInit_textureType(const XREquirectLayerInit *self);

void XREquirectLayerInit_set_textureType(XREquirectLayerInit* self, XRTextureType * value);

XRRigidTransform XREquirectLayerInit_transform(const XREquirectLayerInit *self);

void XREquirectLayerInit_set_transform(XREquirectLayerInit* self, XRRigidTransform * value);

float XREquirectLayerInit_radius(const XREquirectLayerInit *self);

void XREquirectLayerInit_set_radius(XREquirectLayerInit* self, float value);

float XREquirectLayerInit_centralHorizontalAngle(const XREquirectLayerInit *self);

void XREquirectLayerInit_set_centralHorizontalAngle(XREquirectLayerInit* self, float value);

float XREquirectLayerInit_upperVerticalAngle(const XREquirectLayerInit *self);

void XREquirectLayerInit_set_upperVerticalAngle(XREquirectLayerInit* self, float value);

float XREquirectLayerInit_lowerVerticalAngle(const XREquirectLayerInit *self);

void XREquirectLayerInit_set_lowerVerticalAngle(XREquirectLayerInit* self, float value);
DECLARE_EMLITE_TYPE(XRCubeLayerInit, em_Val);

DOMPointReadOnly XRCubeLayerInit_orientation(const XRCubeLayerInit *self);

void XRCubeLayerInit_set_orientation(XRCubeLayerInit* self, DOMPointReadOnly * value);
DECLARE_EMLITE_TYPE(XRWebGLBinding, em_Val);

XRWebGLBinding XRWebGLBinding_new(XRSession * session, jb_Any * context);

double XRWebGLBinding_nativeProjectionScaleFactor(const XRWebGLBinding *self);

bool XRWebGLBinding_usesDepthValues(const XRWebGLBinding *self);

XRProjectionLayer XRWebGLBinding_createProjectionLayer0(XRWebGLBinding* self );

XRProjectionLayer XRWebGLBinding_createProjectionLayer1(XRWebGLBinding* self , XRProjectionLayerInit * init);

XRQuadLayer XRWebGLBinding_createQuadLayer0(XRWebGLBinding* self );

XRQuadLayer XRWebGLBinding_createQuadLayer1(XRWebGLBinding* self , XRQuadLayerInit * init);

XRCylinderLayer XRWebGLBinding_createCylinderLayer0(XRWebGLBinding* self );

XRCylinderLayer XRWebGLBinding_createCylinderLayer1(XRWebGLBinding* self , XRCylinderLayerInit * init);

XREquirectLayer XRWebGLBinding_createEquirectLayer0(XRWebGLBinding* self );

XREquirectLayer XRWebGLBinding_createEquirectLayer1(XRWebGLBinding* self , XREquirectLayerInit * init);

XRCubeLayer XRWebGLBinding_createCubeLayer0(XRWebGLBinding* self );

XRCubeLayer XRWebGLBinding_createCubeLayer1(XRWebGLBinding* self , XRCubeLayerInit * init);

XRWebGLSubImage XRWebGLBinding_getSubImage0(XRWebGLBinding* self , XRCompositionLayer * layer, XRFrame * frame);

XRWebGLSubImage XRWebGLBinding_getSubImage1(XRWebGLBinding* self , XRCompositionLayer * layer, XRFrame * frame, XREye * eye);

XRWebGLSubImage XRWebGLBinding_getViewSubImage(XRWebGLBinding* self , XRProjectionLayer * layer, XRView * view);

jb_Undefined XRWebGLBinding_foveateBoundTexture(XRWebGLBinding* self , jb_Any * target, float fixed_foveation);

WebGLTexture XRWebGLBinding_getCameraImage(XRWebGLBinding* self , XRCamera * camera);

XRWebGLDepthInformation XRWebGLBinding_getDepthInformation(XRWebGLBinding* self , XRView * view);

WebGLTexture XRWebGLBinding_getReflectionCubeMap(XRWebGLBinding* self , XRLightProbe * lightProbe);
