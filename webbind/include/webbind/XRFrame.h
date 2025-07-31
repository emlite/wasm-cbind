#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRSession XRSession;
typedef struct XRViewerPose XRViewerPose;
typedef struct XRReferenceSpace XRReferenceSpace;
typedef struct XRPose XRPose;
typedef struct XRSpace XRSpace;
typedef struct XRAnchor XRAnchor;
typedef struct XRRigidTransform XRRigidTransform;
typedef struct XRAnchorSet XRAnchorSet;
typedef struct XRMeshSet XRMeshSet;
typedef struct XRCPUDepthInformation XRCPUDepthInformation;
typedef struct XRView XRView;
typedef struct XRJointPose XRJointPose;
typedef struct XRJointSpace XRJointSpace;
typedef struct XRHitTestResult XRHitTestResult;
typedef struct XRHitTestSource XRHitTestSource;
typedef struct XRTransientInputHitTestResult XRTransientInputHitTestResult;
typedef struct XRTransientInputHitTestSource XRTransientInputHitTestSource;
typedef struct XRLightEstimate XRLightEstimate;
typedef struct XRLightProbe XRLightProbe;
typedef struct XRPlaneSet XRPlaneSet;


DECLARE_EMLITE_TYPE(XRFrame, em_Val);

XRSession XRFrame_session(const XRFrame *self);

jb_Any XRFrame_predictedDisplayTime(const XRFrame *self);

XRViewerPose XRFrame_getViewerPose(XRFrame* self , XRReferenceSpace * referenceSpace);

XRPose XRFrame_getPose(XRFrame* self , XRSpace * space, XRSpace * baseSpace);

jb_Promise XRFrame_createAnchor(XRFrame* self , XRRigidTransform * pose, XRSpace * space);

XRAnchorSet XRFrame_trackedAnchors(const XRFrame *self);

XRMeshSet XRFrame_detectedMeshes(const XRFrame *self);

XRCPUDepthInformation XRFrame_getDepthInformation(XRFrame* self , XRView * view);

XRJointPose XRFrame_getJointPose(XRFrame* self , XRJointSpace * joint, XRSpace * baseSpace);

bool XRFrame_fillJointRadii(XRFrame* self , jb_Array * jointSpaces, jb_Float32Array * radii);

bool XRFrame_fillPoses(XRFrame* self , jb_Array * spaces, XRSpace * baseSpace, jb_Float32Array * transforms);

jb_Array XRFrame_getHitTestResults(XRFrame* self , XRHitTestSource * hitTestSource);

jb_Array XRFrame_getHitTestResultsForTransientInput(XRFrame* self , XRTransientInputHitTestSource * hitTestSource);

XRLightEstimate XRFrame_getLightEstimate(XRFrame* self , XRLightProbe * lightProbe);

XRPlaneSet XRFrame_detectedPlanes(const XRFrame *self);
