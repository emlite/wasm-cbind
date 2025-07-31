#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct WebGLUniformLocation WebGLUniformLocation;


DECLARE_EMLITE_TYPE(WebGLRenderingContext, em_Val);

jb_Promise WebGLRenderingContext_makeXRCompatible(WebGLRenderingContext* self );

jb_Undefined WebGLRenderingContext_bufferData(WebGLRenderingContext* self , jb_Any * target, jb_Any * data, jb_Any * usage);

jb_Undefined WebGLRenderingContext_bufferSubData(WebGLRenderingContext* self , jb_Any * target, jb_Any * offset, jb_Any * data);

jb_Undefined WebGLRenderingContext_compressedTexImage2D(WebGLRenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * border, jb_Any * data);

jb_Undefined WebGLRenderingContext_compressedTexSubImage2D(WebGLRenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * width, jb_Any * height, jb_Any * format, jb_Any * data);

jb_Undefined WebGLRenderingContext_readPixels(WebGLRenderingContext* self , jb_Any * x, jb_Any * y, jb_Any * width, jb_Any * height, jb_Any * format, jb_Any * type, jb_Any * pixels);

jb_Undefined WebGLRenderingContext_texImage2D(WebGLRenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * format, jb_Any * type, jb_Any * source);

jb_Undefined WebGLRenderingContext_texSubImage2D(WebGLRenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * format, jb_Any * type, jb_Any * source);

jb_Undefined WebGLRenderingContext_uniform1fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v);

jb_Undefined WebGLRenderingContext_uniform2fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v);

jb_Undefined WebGLRenderingContext_uniform3fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v);

jb_Undefined WebGLRenderingContext_uniform4fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v);

jb_Undefined WebGLRenderingContext_uniform1iv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v);

jb_Undefined WebGLRenderingContext_uniform2iv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v);

jb_Undefined WebGLRenderingContext_uniform3iv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v);

jb_Undefined WebGLRenderingContext_uniform4iv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v);

jb_Undefined WebGLRenderingContext_uniformMatrix2fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * value);

jb_Undefined WebGLRenderingContext_uniformMatrix3fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * value);

jb_Undefined WebGLRenderingContext_uniformMatrix4fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * value);
