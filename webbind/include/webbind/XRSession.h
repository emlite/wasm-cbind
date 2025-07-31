#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRRenderState XRRenderState;
typedef struct XRInputSourceArray XRInputSourceArray;
typedef struct XRRenderStateInit XRRenderStateInit;
typedef struct XRReferenceSpace XRReferenceSpace;
typedef struct XRAnchor XRAnchor;
typedef struct XRDOMOverlayState XRDOMOverlayState;
typedef struct XRHitTestSource XRHitTestSource;
typedef struct XRHitTestOptionsInit XRHitTestOptionsInit;
typedef struct XRTransientInputHitTestSource XRTransientInputHitTestSource;
typedef struct XRTransientInputHitTestOptionsInit XRTransientInputHitTestOptionsInit;
typedef struct XRLightProbe XRLightProbe;
typedef struct XRLightProbeInit XRLightProbeInit;
typedef struct XRRay XRRay;
typedef struct XRLayer XRLayer;
typedef struct XRSpace XRSpace;
typedef struct XRWebGLLayer XRWebGLLayer;


DECLARE_EMLITE_TYPE(XRRenderStateInit, em_Val);

double XRRenderStateInit_depthNear(const XRRenderStateInit *self);

void XRRenderStateInit_set_depthNear(XRRenderStateInit* self, double value);

double XRRenderStateInit_depthFar(const XRRenderStateInit *self);

void XRRenderStateInit_set_depthFar(XRRenderStateInit* self, double value);

bool XRRenderStateInit_passthroughFullyObscured(const XRRenderStateInit *self);

void XRRenderStateInit_set_passthroughFullyObscured(XRRenderStateInit* self, bool value);

double XRRenderStateInit_inlineVerticalFieldOfView(const XRRenderStateInit *self);

void XRRenderStateInit_set_inlineVerticalFieldOfView(XRRenderStateInit* self, double value);

XRWebGLLayer XRRenderStateInit_baseLayer(const XRRenderStateInit *self);

void XRRenderStateInit_set_baseLayer(XRRenderStateInit* self, XRWebGLLayer * value);

jb_Array XRRenderStateInit_layers(const XRRenderStateInit *self);

void XRRenderStateInit_set_layers(XRRenderStateInit* self, jb_Array * value);
DECLARE_EMLITE_TYPE(XRDOMOverlayState, em_Val);

XRDOMOverlayType XRDOMOverlayState_type(const XRDOMOverlayState *self);

void XRDOMOverlayState_set_type(XRDOMOverlayState* self, XRDOMOverlayType * value);
DECLARE_EMLITE_TYPE(XRHitTestOptionsInit, em_Val);

XRSpace XRHitTestOptionsInit_space(const XRHitTestOptionsInit *self);

void XRHitTestOptionsInit_set_space(XRHitTestOptionsInit* self, XRSpace * value);

jb_Array XRHitTestOptionsInit_entityTypes(const XRHitTestOptionsInit *self);

void XRHitTestOptionsInit_set_entityTypes(XRHitTestOptionsInit* self, jb_Array * value);

XRRay XRHitTestOptionsInit_offsetRay(const XRHitTestOptionsInit *self);

void XRHitTestOptionsInit_set_offsetRay(XRHitTestOptionsInit* self, XRRay * value);
DECLARE_EMLITE_TYPE(XRTransientInputHitTestOptionsInit, em_Val);

jb_String XRTransientInputHitTestOptionsInit_profile(const XRTransientInputHitTestOptionsInit *self);

void XRTransientInputHitTestOptionsInit_set_profile(XRTransientInputHitTestOptionsInit* self, jb_String * value);

jb_Array XRTransientInputHitTestOptionsInit_entityTypes(const XRTransientInputHitTestOptionsInit *self);

void XRTransientInputHitTestOptionsInit_set_entityTypes(XRTransientInputHitTestOptionsInit* self, jb_Array * value);

XRRay XRTransientInputHitTestOptionsInit_offsetRay(const XRTransientInputHitTestOptionsInit *self);

void XRTransientInputHitTestOptionsInit_set_offsetRay(XRTransientInputHitTestOptionsInit* self, XRRay * value);
DECLARE_EMLITE_TYPE(XRLightProbeInit, em_Val);

XRReflectionFormat XRLightProbeInit_reflectionFormat(const XRLightProbeInit *self);

void XRLightProbeInit_set_reflectionFormat(XRLightProbeInit* self, XRReflectionFormat * value);
DECLARE_EMLITE_TYPE(XRSession, EventTarget);

XRVisibilityState XRSession_visibilityState(const XRSession *self);

float XRSession_frameRate(const XRSession *self);

jb_Float32Array XRSession_supportedFrameRates(const XRSession *self);

XRRenderState XRSession_renderState(const XRSession *self);

XRInputSourceArray XRSession_inputSources(const XRSession *self);

XRInputSourceArray XRSession_trackedSources(const XRSession *self);

jb_Array XRSession_enabledFeatures(const XRSession *self);

bool XRSession_isSystemKeyboardSupported(const XRSession *self);

jb_Undefined XRSession_updateRenderState0(XRSession* self );

jb_Undefined XRSession_updateRenderState1(XRSession* self , XRRenderStateInit * state);

jb_Promise XRSession_updateTargetFrameRate(XRSession* self , float rate);

jb_Promise XRSession_requestReferenceSpace(XRSession* self , XRReferenceSpaceType * type);

unsigned long XRSession_requestAnimationFrame(XRSession* self , jb_Function * callback);

jb_Undefined XRSession_cancelAnimationFrame(XRSession* self , unsigned long handle);

jb_Promise XRSession_end(XRSession* self );

jb_Any XRSession_onend(const XRSession *self);

void XRSession_set_onend(XRSession* self, jb_Any * value);

jb_Any XRSession_oninputsourceschange(const XRSession *self);

void XRSession_set_oninputsourceschange(XRSession* self, jb_Any * value);

jb_Any XRSession_onselect(const XRSession *self);

void XRSession_set_onselect(XRSession* self, jb_Any * value);

jb_Any XRSession_onselectstart(const XRSession *self);

void XRSession_set_onselectstart(XRSession* self, jb_Any * value);

jb_Any XRSession_onselectend(const XRSession *self);

void XRSession_set_onselectend(XRSession* self, jb_Any * value);

jb_Any XRSession_onsqueeze(const XRSession *self);

void XRSession_set_onsqueeze(XRSession* self, jb_Any * value);

jb_Any XRSession_onsqueezestart(const XRSession *self);

void XRSession_set_onsqueezestart(XRSession* self, jb_Any * value);

jb_Any XRSession_onsqueezeend(const XRSession *self);

void XRSession_set_onsqueezeend(XRSession* self, jb_Any * value);

jb_Any XRSession_onvisibilitychange(const XRSession *self);

void XRSession_set_onvisibilitychange(XRSession* self, jb_Any * value);

jb_Any XRSession_onframeratechange(const XRSession *self);

void XRSession_set_onframeratechange(XRSession* self, jb_Any * value);

jb_Array XRSession_persistentAnchors(const XRSession *self);

jb_Promise XRSession_restorePersistentAnchor(XRSession* self , jb_String * uuid);

jb_Promise XRSession_deletePersistentAnchor(XRSession* self , jb_String * uuid);

XREnvironmentBlendMode XRSession_environmentBlendMode(const XRSession *self);

XRInteractionMode XRSession_interactionMode(const XRSession *self);

XRDepthUsage XRSession_depthUsage(const XRSession *self);

XRDepthDataFormat XRSession_depthDataFormat(const XRSession *self);

XRDepthType XRSession_depthType(const XRSession *self);

bool XRSession_depthActive(const XRSession *self);

jb_Undefined XRSession_pauseDepthSensing(XRSession* self );

jb_Undefined XRSession_resumeDepthSensing(XRSession* self );

XRDOMOverlayState XRSession_domOverlayState(const XRSession *self);

jb_Promise XRSession_requestHitTestSource(XRSession* self , XRHitTestOptionsInit * options);

jb_Promise XRSession_requestHitTestSourceForTransientInput(XRSession* self , XRTransientInputHitTestOptionsInit * options);

jb_Promise XRSession_requestLightProbe0(XRSession* self );

jb_Promise XRSession_requestLightProbe1(XRSession* self , XRLightProbeInit * options);

XRReflectionFormat XRSession_preferredReflectionFormat(const XRSession *self);

jb_Promise XRSession_initiateRoomCapture(XRSession* self );
