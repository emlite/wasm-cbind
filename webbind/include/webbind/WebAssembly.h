#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Module Module;
typedef struct Response Response;
typedef struct Instance Instance;


bool WebAssembly_validate(jb_Any * bytes);
jb_Promise WebAssembly_compile(jb_Any * bytes);
jb_Promise WebAssembly_instantiate0(Module * moduleObject);
jb_Promise WebAssembly_instantiate1(Module * moduleObject, jb_Object * importObject);


jb_Promise WebAssembly_compileStreaming(jb_Promise * source);
jb_Promise WebAssembly_instantiateStreaming0(jb_Promise * source);
jb_Promise WebAssembly_instantiateStreaming1(jb_Promise * source, jb_Object * importObject);


#ifdef __cplusplus
}
#endif