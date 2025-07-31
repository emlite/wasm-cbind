#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct WebGLTexture WebGLTexture;
typedef struct WebGLProgram WebGLProgram;
typedef struct WebGLUniformLocation WebGLUniformLocation;
typedef struct WebGLQuery WebGLQuery;
typedef struct WebGLSampler WebGLSampler;
typedef struct WebGLSync WebGLSync;
typedef struct WebGLTransformFeedback WebGLTransformFeedback;
typedef struct WebGLActiveInfo WebGLActiveInfo;
typedef struct WebGLBuffer WebGLBuffer;
typedef struct WebGLVertexArrayObject WebGLVertexArrayObject;


DECLARE_EMLITE_TYPE(WebGL2RenderingContext, em_Val);

jb_Promise WebGL2RenderingContext_makeXRCompatible(WebGL2RenderingContext* self );

jb_Undefined WebGL2RenderingContext_copyBufferSubData(WebGL2RenderingContext* self , jb_Any * readTarget, jb_Any * writeTarget, jb_Any * readOffset, jb_Any * writeOffset, jb_Any * size);

jb_Undefined WebGL2RenderingContext_getBufferSubData0(WebGL2RenderingContext* self , jb_Any * target, jb_Any * srcByteOffset, jb_Any * dstBuffer);

jb_Undefined WebGL2RenderingContext_getBufferSubData1(WebGL2RenderingContext* self , jb_Any * target, jb_Any * srcByteOffset, jb_Any * dstBuffer, long long dstOffset);

jb_Undefined WebGL2RenderingContext_getBufferSubData2(WebGL2RenderingContext* self , jb_Any * target, jb_Any * srcByteOffset, jb_Any * dstBuffer, long long dstOffset, jb_Any * length);

jb_Undefined WebGL2RenderingContext_blitFramebuffer(WebGL2RenderingContext* self , jb_Any * srcX0, jb_Any * srcY0, jb_Any * srcX1, jb_Any * srcY1, jb_Any * dstX0, jb_Any * dstY0, jb_Any * dstX1, jb_Any * dstY1, jb_Any * mask, jb_Any * filter);

jb_Undefined WebGL2RenderingContext_framebufferTextureLayer(WebGL2RenderingContext* self , jb_Any * target, jb_Any * attachment, WebGLTexture * texture, jb_Any * level, jb_Any * layer);

jb_Undefined WebGL2RenderingContext_invalidateFramebuffer(WebGL2RenderingContext* self , jb_Any * target, jb_Array * attachments);

jb_Undefined WebGL2RenderingContext_invalidateSubFramebuffer(WebGL2RenderingContext* self , jb_Any * target, jb_Array * attachments, jb_Any * x, jb_Any * y, jb_Any * width, jb_Any * height);

jb_Undefined WebGL2RenderingContext_readBuffer(WebGL2RenderingContext* self , jb_Any * src);

jb_Any WebGL2RenderingContext_getInternalformatParameter(WebGL2RenderingContext* self , jb_Any * target, jb_Any * internalformat, jb_Any * pname);

jb_Undefined WebGL2RenderingContext_renderbufferStorageMultisample(WebGL2RenderingContext* self , jb_Any * target, jb_Any * samples, jb_Any * internalformat, jb_Any * width, jb_Any * height);

jb_Undefined WebGL2RenderingContext_texStorage2D(WebGL2RenderingContext* self , jb_Any * target, jb_Any * levels, jb_Any * internalformat, jb_Any * width, jb_Any * height);

jb_Undefined WebGL2RenderingContext_texStorage3D(WebGL2RenderingContext* self , jb_Any * target, jb_Any * levels, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * depth);

jb_Undefined WebGL2RenderingContext_texImage3D(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * depth, jb_Any * border, jb_Any * format, jb_Any * type, jb_Any * srcData, long long srcOffset);

jb_Undefined WebGL2RenderingContext_texSubImage3D0(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * zoffset, jb_Any * width, jb_Any * height, jb_Any * depth, jb_Any * format, jb_Any * type, jb_Any * srcData);

jb_Undefined WebGL2RenderingContext_texSubImage3D1(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * zoffset, jb_Any * width, jb_Any * height, jb_Any * depth, jb_Any * format, jb_Any * type, jb_Any * srcData, long long srcOffset);

jb_Undefined WebGL2RenderingContext_copyTexSubImage3D(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * zoffset, jb_Any * x, jb_Any * y, jb_Any * width, jb_Any * height);

jb_Undefined WebGL2RenderingContext_compressedTexImage3D0(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * depth, jb_Any * border, jb_Any * srcData);

jb_Undefined WebGL2RenderingContext_compressedTexImage3D1(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * depth, jb_Any * border, jb_Any * srcData, long long srcOffset);

jb_Undefined WebGL2RenderingContext_compressedTexImage3D2(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * depth, jb_Any * border, jb_Any * srcData, long long srcOffset, jb_Any * srcLengthOverride);

jb_Undefined WebGL2RenderingContext_compressedTexSubImage3D0(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * zoffset, jb_Any * width, jb_Any * height, jb_Any * depth, jb_Any * format, jb_Any * srcData);

jb_Undefined WebGL2RenderingContext_compressedTexSubImage3D1(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * zoffset, jb_Any * width, jb_Any * height, jb_Any * depth, jb_Any * format, jb_Any * srcData, long long srcOffset);

jb_Undefined WebGL2RenderingContext_compressedTexSubImage3D2(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * zoffset, jb_Any * width, jb_Any * height, jb_Any * depth, jb_Any * format, jb_Any * srcData, long long srcOffset, jb_Any * srcLengthOverride);

jb_Any WebGL2RenderingContext_getFragDataLocation(WebGL2RenderingContext* self , WebGLProgram * program, jb_String * name);

jb_Undefined WebGL2RenderingContext_uniform1ui(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * v0);

jb_Undefined WebGL2RenderingContext_uniform2ui(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * v0, jb_Any * v1);

jb_Undefined WebGL2RenderingContext_uniform3ui(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * v0, jb_Any * v1, jb_Any * v2);

jb_Undefined WebGL2RenderingContext_uniform4ui(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * v0, jb_Any * v1, jb_Any * v2, jb_Any * v3);

jb_Undefined WebGL2RenderingContext_uniform1uiv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniform1uiv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform1uiv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniform2uiv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniform2uiv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform2uiv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniform3uiv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniform3uiv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform3uiv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniform4uiv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniform4uiv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform4uiv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniformMatrix3x2fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniformMatrix3x2fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniformMatrix3x2fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniformMatrix4x2fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniformMatrix4x2fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniformMatrix4x2fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniformMatrix2x3fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniformMatrix2x3fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniformMatrix2x3fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniformMatrix4x3fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniformMatrix4x3fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniformMatrix4x3fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniformMatrix2x4fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniformMatrix2x4fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniformMatrix2x4fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniformMatrix3x4fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniformMatrix3x4fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniformMatrix3x4fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_vertexAttribI4i(WebGL2RenderingContext* self , jb_Any * index, jb_Any * x, jb_Any * y, jb_Any * z, jb_Any * w);

jb_Undefined WebGL2RenderingContext_vertexAttribI4iv(WebGL2RenderingContext* self , jb_Any * index, jb_Any * values);

jb_Undefined WebGL2RenderingContext_vertexAttribI4ui(WebGL2RenderingContext* self , jb_Any * index, jb_Any * x, jb_Any * y, jb_Any * z, jb_Any * w);

jb_Undefined WebGL2RenderingContext_vertexAttribI4uiv(WebGL2RenderingContext* self , jb_Any * index, jb_Any * values);

jb_Undefined WebGL2RenderingContext_vertexAttribIPointer(WebGL2RenderingContext* self , jb_Any * index, jb_Any * size, jb_Any * type, jb_Any * stride, jb_Any * offset);

jb_Undefined WebGL2RenderingContext_vertexAttribDivisor(WebGL2RenderingContext* self , jb_Any * index, jb_Any * divisor);

jb_Undefined WebGL2RenderingContext_drawArraysInstanced(WebGL2RenderingContext* self , jb_Any * mode, jb_Any * first, jb_Any * count, jb_Any * instanceCount);

jb_Undefined WebGL2RenderingContext_drawElementsInstanced(WebGL2RenderingContext* self , jb_Any * mode, jb_Any * count, jb_Any * type, jb_Any * offset, jb_Any * instanceCount);

jb_Undefined WebGL2RenderingContext_drawRangeElements(WebGL2RenderingContext* self , jb_Any * mode, jb_Any * start, jb_Any * end, jb_Any * count, jb_Any * type, jb_Any * offset);

jb_Undefined WebGL2RenderingContext_drawBuffers(WebGL2RenderingContext* self , jb_Array * buffers);

jb_Undefined WebGL2RenderingContext_clearBufferfv0(WebGL2RenderingContext* self , jb_Any * buffer, jb_Any * drawbuffer, jb_Any * values);

jb_Undefined WebGL2RenderingContext_clearBufferfv1(WebGL2RenderingContext* self , jb_Any * buffer, jb_Any * drawbuffer, jb_Any * values, long long srcOffset);

jb_Undefined WebGL2RenderingContext_clearBufferiv0(WebGL2RenderingContext* self , jb_Any * buffer, jb_Any * drawbuffer, jb_Any * values);

jb_Undefined WebGL2RenderingContext_clearBufferiv1(WebGL2RenderingContext* self , jb_Any * buffer, jb_Any * drawbuffer, jb_Any * values, long long srcOffset);

jb_Undefined WebGL2RenderingContext_clearBufferuiv0(WebGL2RenderingContext* self , jb_Any * buffer, jb_Any * drawbuffer, jb_Any * values);

jb_Undefined WebGL2RenderingContext_clearBufferuiv1(WebGL2RenderingContext* self , jb_Any * buffer, jb_Any * drawbuffer, jb_Any * values, long long srcOffset);

jb_Undefined WebGL2RenderingContext_clearBufferfi(WebGL2RenderingContext* self , jb_Any * buffer, jb_Any * drawbuffer, jb_Any * depth, jb_Any * stencil);

WebGLQuery WebGL2RenderingContext_createQuery(WebGL2RenderingContext* self );

jb_Undefined WebGL2RenderingContext_deleteQuery(WebGL2RenderingContext* self , WebGLQuery * query);

jb_Any WebGL2RenderingContext_isQuery(WebGL2RenderingContext* self , WebGLQuery * query);

jb_Undefined WebGL2RenderingContext_beginQuery(WebGL2RenderingContext* self , jb_Any * target, WebGLQuery * query);

jb_Undefined WebGL2RenderingContext_endQuery(WebGL2RenderingContext* self , jb_Any * target);

WebGLQuery WebGL2RenderingContext_getQuery(WebGL2RenderingContext* self , jb_Any * target, jb_Any * pname);

jb_Any WebGL2RenderingContext_getQueryParameter(WebGL2RenderingContext* self , WebGLQuery * query, jb_Any * pname);

WebGLSampler WebGL2RenderingContext_createSampler(WebGL2RenderingContext* self );

jb_Undefined WebGL2RenderingContext_deleteSampler(WebGL2RenderingContext* self , WebGLSampler * sampler);

jb_Any WebGL2RenderingContext_isSampler(WebGL2RenderingContext* self , WebGLSampler * sampler);

jb_Undefined WebGL2RenderingContext_bindSampler(WebGL2RenderingContext* self , jb_Any * unit, WebGLSampler * sampler);

jb_Undefined WebGL2RenderingContext_samplerParameteri(WebGL2RenderingContext* self , WebGLSampler * sampler, jb_Any * pname, jb_Any * param);

jb_Undefined WebGL2RenderingContext_samplerParameterf(WebGL2RenderingContext* self , WebGLSampler * sampler, jb_Any * pname, jb_Any * param);

jb_Any WebGL2RenderingContext_getSamplerParameter(WebGL2RenderingContext* self , WebGLSampler * sampler, jb_Any * pname);

WebGLSync WebGL2RenderingContext_fenceSync(WebGL2RenderingContext* self , jb_Any * condition, jb_Any * flags);

jb_Any WebGL2RenderingContext_isSync(WebGL2RenderingContext* self , WebGLSync * sync);

jb_Undefined WebGL2RenderingContext_deleteSync(WebGL2RenderingContext* self , WebGLSync * sync);

jb_Any WebGL2RenderingContext_clientWaitSync(WebGL2RenderingContext* self , WebGLSync * sync, jb_Any * flags, jb_Any * timeout);

jb_Undefined WebGL2RenderingContext_waitSync(WebGL2RenderingContext* self , WebGLSync * sync, jb_Any * flags, jb_Any * timeout);

jb_Any WebGL2RenderingContext_getSyncParameter(WebGL2RenderingContext* self , WebGLSync * sync, jb_Any * pname);

WebGLTransformFeedback WebGL2RenderingContext_createTransformFeedback(WebGL2RenderingContext* self );

jb_Undefined WebGL2RenderingContext_deleteTransformFeedback(WebGL2RenderingContext* self , WebGLTransformFeedback * tf);

jb_Any WebGL2RenderingContext_isTransformFeedback(WebGL2RenderingContext* self , WebGLTransformFeedback * tf);

jb_Undefined WebGL2RenderingContext_bindTransformFeedback(WebGL2RenderingContext* self , jb_Any * target, WebGLTransformFeedback * tf);

jb_Undefined WebGL2RenderingContext_beginTransformFeedback(WebGL2RenderingContext* self , jb_Any * primitiveMode);

jb_Undefined WebGL2RenderingContext_endTransformFeedback(WebGL2RenderingContext* self );

jb_Undefined WebGL2RenderingContext_transformFeedbackVaryings(WebGL2RenderingContext* self , WebGLProgram * program, jb_Array * varyings, jb_Any * bufferMode);

WebGLActiveInfo WebGL2RenderingContext_getTransformFeedbackVarying(WebGL2RenderingContext* self , WebGLProgram * program, jb_Any * index);

jb_Undefined WebGL2RenderingContext_pauseTransformFeedback(WebGL2RenderingContext* self );

jb_Undefined WebGL2RenderingContext_resumeTransformFeedback(WebGL2RenderingContext* self );

jb_Undefined WebGL2RenderingContext_bindBufferBase(WebGL2RenderingContext* self , jb_Any * target, jb_Any * index, WebGLBuffer * buffer);

jb_Undefined WebGL2RenderingContext_bindBufferRange(WebGL2RenderingContext* self , jb_Any * target, jb_Any * index, WebGLBuffer * buffer, jb_Any * offset, jb_Any * size);

jb_Any WebGL2RenderingContext_getIndexedParameter(WebGL2RenderingContext* self , jb_Any * target, jb_Any * index);

jb_Array WebGL2RenderingContext_getUniformIndices(WebGL2RenderingContext* self , WebGLProgram * program, jb_Array * uniformNames);

jb_Any WebGL2RenderingContext_getActiveUniforms(WebGL2RenderingContext* self , WebGLProgram * program, jb_Array * uniformIndices, jb_Any * pname);

jb_Any WebGL2RenderingContext_getUniformBlockIndex(WebGL2RenderingContext* self , WebGLProgram * program, jb_String * uniformBlockName);

jb_Any WebGL2RenderingContext_getActiveUniformBlockParameter(WebGL2RenderingContext* self , WebGLProgram * program, jb_Any * uniformBlockIndex, jb_Any * pname);

jb_String WebGL2RenderingContext_getActiveUniformBlockName(WebGL2RenderingContext* self , WebGLProgram * program, jb_Any * uniformBlockIndex);

jb_Undefined WebGL2RenderingContext_uniformBlockBinding(WebGL2RenderingContext* self , WebGLProgram * program, jb_Any * uniformBlockIndex, jb_Any * uniformBlockBinding);

WebGLVertexArrayObject WebGL2RenderingContext_createVertexArray(WebGL2RenderingContext* self );

jb_Undefined WebGL2RenderingContext_deleteVertexArray(WebGL2RenderingContext* self , WebGLVertexArrayObject * vertexArray);

jb_Any WebGL2RenderingContext_isVertexArray(WebGL2RenderingContext* self , WebGLVertexArrayObject * vertexArray);

jb_Undefined WebGL2RenderingContext_bindVertexArray(WebGL2RenderingContext* self , WebGLVertexArrayObject * array);

jb_Undefined WebGL2RenderingContext_bufferData0(WebGL2RenderingContext* self , jb_Any * target, jb_Any * srcData, jb_Any * usage, long long srcOffset);

jb_Undefined WebGL2RenderingContext_bufferData1(WebGL2RenderingContext* self , jb_Any * target, jb_Any * srcData, jb_Any * usage, long long srcOffset, jb_Any * length);

jb_Undefined WebGL2RenderingContext_bufferSubData0(WebGL2RenderingContext* self , jb_Any * target, jb_Any * dstByteOffset, jb_Any * srcData, long long srcOffset);

jb_Undefined WebGL2RenderingContext_bufferSubData1(WebGL2RenderingContext* self , jb_Any * target, jb_Any * dstByteOffset, jb_Any * srcData, long long srcOffset, jb_Any * length);

jb_Undefined WebGL2RenderingContext_texImage2D(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * border, jb_Any * format, jb_Any * type, jb_Any * srcData, long long srcOffset);

jb_Undefined WebGL2RenderingContext_texSubImage2D(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * width, jb_Any * height, jb_Any * format, jb_Any * type, jb_Any * srcData, long long srcOffset);

jb_Undefined WebGL2RenderingContext_compressedTexImage2D0(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * border, jb_Any * srcData);

jb_Undefined WebGL2RenderingContext_compressedTexImage2D1(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * border, jb_Any * srcData, long long srcOffset);

jb_Undefined WebGL2RenderingContext_compressedTexImage2D2(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * border, jb_Any * srcData, long long srcOffset, jb_Any * srcLengthOverride);

jb_Undefined WebGL2RenderingContext_compressedTexSubImage2D0(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * width, jb_Any * height, jb_Any * format, jb_Any * srcData);

jb_Undefined WebGL2RenderingContext_compressedTexSubImage2D1(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * width, jb_Any * height, jb_Any * format, jb_Any * srcData, long long srcOffset);

jb_Undefined WebGL2RenderingContext_compressedTexSubImage2D2(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * width, jb_Any * height, jb_Any * format, jb_Any * srcData, long long srcOffset, jb_Any * srcLengthOverride);

jb_Undefined WebGL2RenderingContext_uniform1fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniform1fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform1fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniform2fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniform2fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform2fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniform3fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniform3fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform3fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniform4fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniform4fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform4fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniform1iv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniform1iv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform1iv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniform2iv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniform2iv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform2iv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniform3iv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniform3iv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform3iv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniform4iv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniform4iv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform4iv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniformMatrix2fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniformMatrix2fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniformMatrix2fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniformMatrix3fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniformMatrix3fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniformMatrix3fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_uniformMatrix4fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data);

jb_Undefined WebGL2RenderingContext_uniformMatrix4fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniformMatrix4fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset, jb_Any * srcLength);

jb_Undefined WebGL2RenderingContext_readPixels(WebGL2RenderingContext* self , jb_Any * x, jb_Any * y, jb_Any * width, jb_Any * height, jb_Any * format, jb_Any * type, jb_Any * dstData, long long dstOffset);
