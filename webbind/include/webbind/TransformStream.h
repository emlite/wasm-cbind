#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct QueuingStrategy QueuingStrategy;
typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;

DECLARE_EMLITE_TYPE(TransformStream, em_Val);

TransformStream TransformStream_new0();

TransformStream TransformStream_new1(jb_Object * transformer);

TransformStream TransformStream_new2(jb_Object * transformer, QueuingStrategy * writableStrategy);

TransformStream TransformStream_new3(jb_Object * transformer, QueuingStrategy * writableStrategy, QueuingStrategy * readableStrategy);

ReadableStream TransformStream_readable(const TransformStream *self);

WritableStream TransformStream_writable(const TransformStream *self);

#ifdef __cplusplus
}
#endif
