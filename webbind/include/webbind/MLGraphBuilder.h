#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "MLContext.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MLOperand MLOperand;
typedef struct MLTensor MLTensor;
typedef struct MLGraph MLGraph;
typedef struct MLArgMinMaxOptions MLArgMinMaxOptions;
typedef struct MLBatchNormalizationOptions MLBatchNormalizationOptions;
typedef struct MLOperatorOptions MLOperatorOptions;
typedef struct MLClampOptions MLClampOptions;
typedef struct MLConv2dOptions MLConv2dOptions;
typedef struct MLConvTranspose2dOptions MLConvTranspose2dOptions;
typedef struct MLCumulativeSumOptions MLCumulativeSumOptions;
typedef struct MLEluOptions MLEluOptions;
typedef struct MLGatherOptions MLGatherOptions;
typedef struct MLGemmOptions MLGemmOptions;
typedef struct MLGruOptions MLGruOptions;
typedef struct MLGruCellOptions MLGruCellOptions;
typedef struct MLHardSigmoidOptions MLHardSigmoidOptions;
typedef struct MLInstanceNormalizationOptions MLInstanceNormalizationOptions;
typedef struct MLLayerNormalizationOptions MLLayerNormalizationOptions;
typedef struct MLLeakyReluOptions MLLeakyReluOptions;
typedef struct MLLinearOptions MLLinearOptions;
typedef struct MLLstmOptions MLLstmOptions;
typedef struct MLLstmCellOptions MLLstmCellOptions;
typedef struct MLPadOptions MLPadOptions;
typedef struct MLPool2dOptions MLPool2dOptions;
typedef struct MLReduceOptions MLReduceOptions;
typedef struct MLResample2dOptions MLResample2dOptions;
typedef struct MLReverseOptions MLReverseOptions;
typedef struct MLScatterOptions MLScatterOptions;
typedef struct MLSliceOptions MLSliceOptions;
typedef struct MLSplitOptions MLSplitOptions;
typedef struct MLTransposeOptions MLTransposeOptions;
typedef struct MLTriangularOptions MLTriangularOptions;


DECLARE_EMLITE_TYPE(MLArgMinMaxOptions, em_Val);

bool MLArgMinMaxOptions_keepDimensions(const MLArgMinMaxOptions *self);

void MLArgMinMaxOptions_set_keepDimensions(MLArgMinMaxOptions* self, bool value);

MLOperandDataType MLArgMinMaxOptions_outputDataType(const MLArgMinMaxOptions *self);

void MLArgMinMaxOptions_set_outputDataType(MLArgMinMaxOptions* self, MLOperandDataType * value);
DECLARE_EMLITE_TYPE(MLBatchNormalizationOptions, em_Val);

MLOperand MLBatchNormalizationOptions_scale(const MLBatchNormalizationOptions *self);

void MLBatchNormalizationOptions_set_scale(MLBatchNormalizationOptions* self, MLOperand * value);

MLOperand MLBatchNormalizationOptions_bias(const MLBatchNormalizationOptions *self);

void MLBatchNormalizationOptions_set_bias(MLBatchNormalizationOptions* self, MLOperand * value);

unsigned long MLBatchNormalizationOptions_axis(const MLBatchNormalizationOptions *self);

void MLBatchNormalizationOptions_set_axis(MLBatchNormalizationOptions* self, unsigned long value);

double MLBatchNormalizationOptions_epsilon(const MLBatchNormalizationOptions *self);

void MLBatchNormalizationOptions_set_epsilon(MLBatchNormalizationOptions* self, double value);
DECLARE_EMLITE_TYPE(MLOperatorOptions, em_Val);

jb_String MLOperatorOptions_label(const MLOperatorOptions *self);

void MLOperatorOptions_set_label(MLOperatorOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(MLClampOptions, em_Val);

jb_Any MLClampOptions_minValue(const MLClampOptions *self);

void MLClampOptions_set_minValue(MLClampOptions* self, jb_Any * value);

jb_Any MLClampOptions_maxValue(const MLClampOptions *self);

void MLClampOptions_set_maxValue(MLClampOptions* self, jb_Any * value);
DECLARE_EMLITE_TYPE(MLConv2dOptions, em_Val);

jb_Array MLConv2dOptions_padding(const MLConv2dOptions *self);

void MLConv2dOptions_set_padding(MLConv2dOptions* self, jb_Array * value);

jb_Array MLConv2dOptions_strides(const MLConv2dOptions *self);

void MLConv2dOptions_set_strides(MLConv2dOptions* self, jb_Array * value);

jb_Array MLConv2dOptions_dilations(const MLConv2dOptions *self);

void MLConv2dOptions_set_dilations(MLConv2dOptions* self, jb_Array * value);

unsigned long MLConv2dOptions_groups(const MLConv2dOptions *self);

void MLConv2dOptions_set_groups(MLConv2dOptions* self, unsigned long value);

MLInputOperandLayout MLConv2dOptions_inputLayout(const MLConv2dOptions *self);

void MLConv2dOptions_set_inputLayout(MLConv2dOptions* self, MLInputOperandLayout * value);

MLConv2dFilterOperandLayout MLConv2dOptions_filterLayout(const MLConv2dOptions *self);

void MLConv2dOptions_set_filterLayout(MLConv2dOptions* self, MLConv2dFilterOperandLayout * value);

MLOperand MLConv2dOptions_bias(const MLConv2dOptions *self);

void MLConv2dOptions_set_bias(MLConv2dOptions* self, MLOperand * value);
DECLARE_EMLITE_TYPE(MLConvTranspose2dOptions, em_Val);

jb_Array MLConvTranspose2dOptions_padding(const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_padding(MLConvTranspose2dOptions* self, jb_Array * value);

jb_Array MLConvTranspose2dOptions_strides(const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_strides(MLConvTranspose2dOptions* self, jb_Array * value);

jb_Array MLConvTranspose2dOptions_dilations(const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_dilations(MLConvTranspose2dOptions* self, jb_Array * value);

jb_Array MLConvTranspose2dOptions_outputPadding(const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_outputPadding(MLConvTranspose2dOptions* self, jb_Array * value);

jb_Array MLConvTranspose2dOptions_outputSizes(const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_outputSizes(MLConvTranspose2dOptions* self, jb_Array * value);

unsigned long MLConvTranspose2dOptions_groups(const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_groups(MLConvTranspose2dOptions* self, unsigned long value);

MLInputOperandLayout MLConvTranspose2dOptions_inputLayout(const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_inputLayout(MLConvTranspose2dOptions* self, MLInputOperandLayout * value);

MLConvTranspose2dFilterOperandLayout MLConvTranspose2dOptions_filterLayout(const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_filterLayout(MLConvTranspose2dOptions* self, MLConvTranspose2dFilterOperandLayout * value);

MLOperand MLConvTranspose2dOptions_bias(const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_bias(MLConvTranspose2dOptions* self, MLOperand * value);
DECLARE_EMLITE_TYPE(MLCumulativeSumOptions, em_Val);

bool MLCumulativeSumOptions_exclusive(const MLCumulativeSumOptions *self);

void MLCumulativeSumOptions_set_exclusive(MLCumulativeSumOptions* self, bool value);

bool MLCumulativeSumOptions_reversed(const MLCumulativeSumOptions *self);

void MLCumulativeSumOptions_set_reversed(MLCumulativeSumOptions* self, bool value);
DECLARE_EMLITE_TYPE(MLEluOptions, em_Val);

double MLEluOptions_alpha(const MLEluOptions *self);

void MLEluOptions_set_alpha(MLEluOptions* self, double value);
DECLARE_EMLITE_TYPE(MLGatherOptions, em_Val);

unsigned long MLGatherOptions_axis(const MLGatherOptions *self);

void MLGatherOptions_set_axis(MLGatherOptions* self, unsigned long value);
DECLARE_EMLITE_TYPE(MLGemmOptions, em_Val);

MLOperand MLGemmOptions_c(const MLGemmOptions *self);

void MLGemmOptions_set_c(MLGemmOptions* self, MLOperand * value);

double MLGemmOptions_alpha(const MLGemmOptions *self);

void MLGemmOptions_set_alpha(MLGemmOptions* self, double value);

double MLGemmOptions_beta(const MLGemmOptions *self);

void MLGemmOptions_set_beta(MLGemmOptions* self, double value);

bool MLGemmOptions_aTranspose(const MLGemmOptions *self);

void MLGemmOptions_set_aTranspose(MLGemmOptions* self, bool value);

bool MLGemmOptions_bTranspose(const MLGemmOptions *self);

void MLGemmOptions_set_bTranspose(MLGemmOptions* self, bool value);
DECLARE_EMLITE_TYPE(MLGruOptions, em_Val);

MLOperand MLGruOptions_bias(const MLGruOptions *self);

void MLGruOptions_set_bias(MLGruOptions* self, MLOperand * value);

MLOperand MLGruOptions_recurrentBias(const MLGruOptions *self);

void MLGruOptions_set_recurrentBias(MLGruOptions* self, MLOperand * value);

MLOperand MLGruOptions_initialHiddenState(const MLGruOptions *self);

void MLGruOptions_set_initialHiddenState(MLGruOptions* self, MLOperand * value);

bool MLGruOptions_resetAfter(const MLGruOptions *self);

void MLGruOptions_set_resetAfter(MLGruOptions* self, bool value);

bool MLGruOptions_returnSequence(const MLGruOptions *self);

void MLGruOptions_set_returnSequence(MLGruOptions* self, bool value);

MLRecurrentNetworkDirection MLGruOptions_direction(const MLGruOptions *self);

void MLGruOptions_set_direction(MLGruOptions* self, MLRecurrentNetworkDirection * value);

MLGruWeightLayout MLGruOptions_layout(const MLGruOptions *self);

void MLGruOptions_set_layout(MLGruOptions* self, MLGruWeightLayout * value);

jb_Array MLGruOptions_activations(const MLGruOptions *self);

void MLGruOptions_set_activations(MLGruOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(MLGruCellOptions, em_Val);

MLOperand MLGruCellOptions_bias(const MLGruCellOptions *self);

void MLGruCellOptions_set_bias(MLGruCellOptions* self, MLOperand * value);

MLOperand MLGruCellOptions_recurrentBias(const MLGruCellOptions *self);

void MLGruCellOptions_set_recurrentBias(MLGruCellOptions* self, MLOperand * value);

bool MLGruCellOptions_resetAfter(const MLGruCellOptions *self);

void MLGruCellOptions_set_resetAfter(MLGruCellOptions* self, bool value);

MLGruWeightLayout MLGruCellOptions_layout(const MLGruCellOptions *self);

void MLGruCellOptions_set_layout(MLGruCellOptions* self, MLGruWeightLayout * value);

jb_Array MLGruCellOptions_activations(const MLGruCellOptions *self);

void MLGruCellOptions_set_activations(MLGruCellOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(MLHardSigmoidOptions, em_Val);

double MLHardSigmoidOptions_alpha(const MLHardSigmoidOptions *self);

void MLHardSigmoidOptions_set_alpha(MLHardSigmoidOptions* self, double value);

double MLHardSigmoidOptions_beta(const MLHardSigmoidOptions *self);

void MLHardSigmoidOptions_set_beta(MLHardSigmoidOptions* self, double value);
DECLARE_EMLITE_TYPE(MLInstanceNormalizationOptions, em_Val);

MLOperand MLInstanceNormalizationOptions_scale(const MLInstanceNormalizationOptions *self);

void MLInstanceNormalizationOptions_set_scale(MLInstanceNormalizationOptions* self, MLOperand * value);

MLOperand MLInstanceNormalizationOptions_bias(const MLInstanceNormalizationOptions *self);

void MLInstanceNormalizationOptions_set_bias(MLInstanceNormalizationOptions* self, MLOperand * value);

double MLInstanceNormalizationOptions_epsilon(const MLInstanceNormalizationOptions *self);

void MLInstanceNormalizationOptions_set_epsilon(MLInstanceNormalizationOptions* self, double value);

MLInputOperandLayout MLInstanceNormalizationOptions_layout(const MLInstanceNormalizationOptions *self);

void MLInstanceNormalizationOptions_set_layout(MLInstanceNormalizationOptions* self, MLInputOperandLayout * value);
DECLARE_EMLITE_TYPE(MLLayerNormalizationOptions, em_Val);

MLOperand MLLayerNormalizationOptions_scale(const MLLayerNormalizationOptions *self);

void MLLayerNormalizationOptions_set_scale(MLLayerNormalizationOptions* self, MLOperand * value);

MLOperand MLLayerNormalizationOptions_bias(const MLLayerNormalizationOptions *self);

void MLLayerNormalizationOptions_set_bias(MLLayerNormalizationOptions* self, MLOperand * value);

jb_Array MLLayerNormalizationOptions_axes(const MLLayerNormalizationOptions *self);

void MLLayerNormalizationOptions_set_axes(MLLayerNormalizationOptions* self, jb_Array * value);

double MLLayerNormalizationOptions_epsilon(const MLLayerNormalizationOptions *self);

void MLLayerNormalizationOptions_set_epsilon(MLLayerNormalizationOptions* self, double value);
DECLARE_EMLITE_TYPE(MLLeakyReluOptions, em_Val);

double MLLeakyReluOptions_alpha(const MLLeakyReluOptions *self);

void MLLeakyReluOptions_set_alpha(MLLeakyReluOptions* self, double value);
DECLARE_EMLITE_TYPE(MLLinearOptions, em_Val);

double MLLinearOptions_alpha(const MLLinearOptions *self);

void MLLinearOptions_set_alpha(MLLinearOptions* self, double value);

double MLLinearOptions_beta(const MLLinearOptions *self);

void MLLinearOptions_set_beta(MLLinearOptions* self, double value);
DECLARE_EMLITE_TYPE(MLLstmOptions, em_Val);

MLOperand MLLstmOptions_bias(const MLLstmOptions *self);

void MLLstmOptions_set_bias(MLLstmOptions* self, MLOperand * value);

MLOperand MLLstmOptions_recurrentBias(const MLLstmOptions *self);

void MLLstmOptions_set_recurrentBias(MLLstmOptions* self, MLOperand * value);

MLOperand MLLstmOptions_peepholeWeight(const MLLstmOptions *self);

void MLLstmOptions_set_peepholeWeight(MLLstmOptions* self, MLOperand * value);

MLOperand MLLstmOptions_initialHiddenState(const MLLstmOptions *self);

void MLLstmOptions_set_initialHiddenState(MLLstmOptions* self, MLOperand * value);

MLOperand MLLstmOptions_initialCellState(const MLLstmOptions *self);

void MLLstmOptions_set_initialCellState(MLLstmOptions* self, MLOperand * value);

bool MLLstmOptions_returnSequence(const MLLstmOptions *self);

void MLLstmOptions_set_returnSequence(MLLstmOptions* self, bool value);

MLRecurrentNetworkDirection MLLstmOptions_direction(const MLLstmOptions *self);

void MLLstmOptions_set_direction(MLLstmOptions* self, MLRecurrentNetworkDirection * value);

MLLstmWeightLayout MLLstmOptions_layout(const MLLstmOptions *self);

void MLLstmOptions_set_layout(MLLstmOptions* self, MLLstmWeightLayout * value);

jb_Array MLLstmOptions_activations(const MLLstmOptions *self);

void MLLstmOptions_set_activations(MLLstmOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(MLLstmCellOptions, em_Val);

MLOperand MLLstmCellOptions_bias(const MLLstmCellOptions *self);

void MLLstmCellOptions_set_bias(MLLstmCellOptions* self, MLOperand * value);

MLOperand MLLstmCellOptions_recurrentBias(const MLLstmCellOptions *self);

void MLLstmCellOptions_set_recurrentBias(MLLstmCellOptions* self, MLOperand * value);

MLOperand MLLstmCellOptions_peepholeWeight(const MLLstmCellOptions *self);

void MLLstmCellOptions_set_peepholeWeight(MLLstmCellOptions* self, MLOperand * value);

MLLstmWeightLayout MLLstmCellOptions_layout(const MLLstmCellOptions *self);

void MLLstmCellOptions_set_layout(MLLstmCellOptions* self, MLLstmWeightLayout * value);

jb_Array MLLstmCellOptions_activations(const MLLstmCellOptions *self);

void MLLstmCellOptions_set_activations(MLLstmCellOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(MLPadOptions, em_Val);

MLPaddingMode MLPadOptions_mode(const MLPadOptions *self);

void MLPadOptions_set_mode(MLPadOptions* self, MLPaddingMode * value);

jb_Any MLPadOptions_value(const MLPadOptions *self);

void MLPadOptions_set_value(MLPadOptions* self, jb_Any * value);
DECLARE_EMLITE_TYPE(MLPool2dOptions, em_Val);

jb_Array MLPool2dOptions_windowDimensions(const MLPool2dOptions *self);

void MLPool2dOptions_set_windowDimensions(MLPool2dOptions* self, jb_Array * value);

jb_Array MLPool2dOptions_padding(const MLPool2dOptions *self);

void MLPool2dOptions_set_padding(MLPool2dOptions* self, jb_Array * value);

jb_Array MLPool2dOptions_strides(const MLPool2dOptions *self);

void MLPool2dOptions_set_strides(MLPool2dOptions* self, jb_Array * value);

jb_Array MLPool2dOptions_dilations(const MLPool2dOptions *self);

void MLPool2dOptions_set_dilations(MLPool2dOptions* self, jb_Array * value);

MLInputOperandLayout MLPool2dOptions_layout(const MLPool2dOptions *self);

void MLPool2dOptions_set_layout(MLPool2dOptions* self, MLInputOperandLayout * value);

MLRoundingType MLPool2dOptions_roundingType(const MLPool2dOptions *self);

void MLPool2dOptions_set_roundingType(MLPool2dOptions* self, MLRoundingType * value);

jb_Array MLPool2dOptions_outputSizes(const MLPool2dOptions *self);

void MLPool2dOptions_set_outputSizes(MLPool2dOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(MLReduceOptions, em_Val);

jb_Array MLReduceOptions_axes(const MLReduceOptions *self);

void MLReduceOptions_set_axes(MLReduceOptions* self, jb_Array * value);

bool MLReduceOptions_keepDimensions(const MLReduceOptions *self);

void MLReduceOptions_set_keepDimensions(MLReduceOptions* self, bool value);
DECLARE_EMLITE_TYPE(MLResample2dOptions, em_Val);

MLInterpolationMode MLResample2dOptions_mode(const MLResample2dOptions *self);

void MLResample2dOptions_set_mode(MLResample2dOptions* self, MLInterpolationMode * value);

jb_Array MLResample2dOptions_scales(const MLResample2dOptions *self);

void MLResample2dOptions_set_scales(MLResample2dOptions* self, jb_Array * value);

jb_Array MLResample2dOptions_sizes(const MLResample2dOptions *self);

void MLResample2dOptions_set_sizes(MLResample2dOptions* self, jb_Array * value);

jb_Array MLResample2dOptions_axes(const MLResample2dOptions *self);

void MLResample2dOptions_set_axes(MLResample2dOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(MLReverseOptions, em_Val);

jb_Array MLReverseOptions_axes(const MLReverseOptions *self);

void MLReverseOptions_set_axes(MLReverseOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(MLScatterOptions, em_Val);

unsigned long MLScatterOptions_axis(const MLScatterOptions *self);

void MLScatterOptions_set_axis(MLScatterOptions* self, unsigned long value);
DECLARE_EMLITE_TYPE(MLSliceOptions, em_Val);

jb_Array MLSliceOptions_strides(const MLSliceOptions *self);

void MLSliceOptions_set_strides(MLSliceOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(MLSplitOptions, em_Val);

unsigned long MLSplitOptions_axis(const MLSplitOptions *self);

void MLSplitOptions_set_axis(MLSplitOptions* self, unsigned long value);
DECLARE_EMLITE_TYPE(MLTransposeOptions, em_Val);

jb_Array MLTransposeOptions_permutation(const MLTransposeOptions *self);

void MLTransposeOptions_set_permutation(MLTransposeOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(MLTriangularOptions, em_Val);

bool MLTriangularOptions_upper(const MLTriangularOptions *self);

void MLTriangularOptions_set_upper(MLTriangularOptions* self, bool value);

long MLTriangularOptions_diagonal(const MLTriangularOptions *self);

void MLTriangularOptions_set_diagonal(MLTriangularOptions* self, long value);
DECLARE_EMLITE_TYPE(MLGraphBuilder, em_Val);

MLGraphBuilder MLGraphBuilder_new(MLContext * context);

MLOperand MLGraphBuilder_input(MLGraphBuilder* self , jb_String * name, MLOperandDescriptor * descriptor);

MLOperand MLGraphBuilder_constant(MLGraphBuilder* self , MLTensor * tensor);

jb_Promise MLGraphBuilder_build(MLGraphBuilder* self , jb_Any * outputs);

MLOperand MLGraphBuilder_argMin0(MLGraphBuilder* self , MLOperand * input, unsigned long axis);

MLOperand MLGraphBuilder_argMin1(MLGraphBuilder* self , MLOperand * input, unsigned long axis, MLArgMinMaxOptions * options);

MLOperand MLGraphBuilder_argMax0(MLGraphBuilder* self , MLOperand * input, unsigned long axis);

MLOperand MLGraphBuilder_argMax1(MLGraphBuilder* self , MLOperand * input, unsigned long axis, MLArgMinMaxOptions * options);

MLOperand MLGraphBuilder_batchNormalization0(MLGraphBuilder* self , MLOperand * input, MLOperand * mean, MLOperand * variance);

MLOperand MLGraphBuilder_batchNormalization1(MLGraphBuilder* self , MLOperand * input, MLOperand * mean, MLOperand * variance, MLBatchNormalizationOptions * options);

MLOperand MLGraphBuilder_cast0(MLGraphBuilder* self , MLOperand * input, MLOperandDataType * type);

MLOperand MLGraphBuilder_cast1(MLGraphBuilder* self , MLOperand * input, MLOperandDataType * type, MLOperatorOptions * options);

MLOperand MLGraphBuilder_clamp0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_clamp1(MLGraphBuilder* self , MLOperand * input, MLClampOptions * options);

MLOperand MLGraphBuilder_concat0(MLGraphBuilder* self , jb_Array * inputs, unsigned long axis);

MLOperand MLGraphBuilder_concat1(MLGraphBuilder* self , jb_Array * inputs, unsigned long axis, MLOperatorOptions * options);

MLOperand MLGraphBuilder_conv2d0(MLGraphBuilder* self , MLOperand * input, MLOperand * filter);

MLOperand MLGraphBuilder_conv2d1(MLGraphBuilder* self , MLOperand * input, MLOperand * filter, MLConv2dOptions * options);

MLOperand MLGraphBuilder_convTranspose2d0(MLGraphBuilder* self , MLOperand * input, MLOperand * filter);

MLOperand MLGraphBuilder_convTranspose2d1(MLGraphBuilder* self , MLOperand * input, MLOperand * filter, MLConvTranspose2dOptions * options);

MLOperand MLGraphBuilder_cumulativeSum0(MLGraphBuilder* self , MLOperand * input, unsigned long axis);

MLOperand MLGraphBuilder_cumulativeSum1(MLGraphBuilder* self , MLOperand * input, unsigned long axis, MLCumulativeSumOptions * options);

MLOperand MLGraphBuilder_add0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_add1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_sub0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_sub1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_mul0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_mul1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_div0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_div1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_max0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_max1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_min0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_min1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_pow0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_pow1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_equal0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_equal1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_notEqual0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_notEqual1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_greater0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_greater1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_greaterOrEqual0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_greaterOrEqual1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_lesser0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_lesser1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_lesserOrEqual0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_lesserOrEqual1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_logicalNot0(MLGraphBuilder* self , MLOperand * a);

MLOperand MLGraphBuilder_logicalNot1(MLGraphBuilder* self , MLOperand * a, MLOperatorOptions * options);

MLOperand MLGraphBuilder_logicalAnd0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_logicalAnd1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_logicalOr0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_logicalOr1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_logicalXor0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_logicalXor1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_abs0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_abs1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_ceil0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_ceil1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_cos0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_cos1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_erf0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_erf1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_exp0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_exp1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_floor0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_floor1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_identity0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_identity1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_log0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_log1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_neg0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_neg1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_reciprocal0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reciprocal1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_sin0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_sin1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_sign0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_sign1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_sqrt0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_sqrt1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_tan0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_tan1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_dequantizeLinear0(MLGraphBuilder* self , MLOperand * input, MLOperand * scale, MLOperand * zeroPoint);

MLOperand MLGraphBuilder_dequantizeLinear1(MLGraphBuilder* self , MLOperand * input, MLOperand * scale, MLOperand * zeroPoint, MLOperatorOptions * options);

MLOperand MLGraphBuilder_quantizeLinear0(MLGraphBuilder* self , MLOperand * input, MLOperand * scale, MLOperand * zeroPoint);

MLOperand MLGraphBuilder_quantizeLinear1(MLGraphBuilder* self , MLOperand * input, MLOperand * scale, MLOperand * zeroPoint, MLOperatorOptions * options);

MLOperand MLGraphBuilder_elu0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_elu1(MLGraphBuilder* self , MLOperand * input, MLEluOptions * options);

MLOperand MLGraphBuilder_expand0(MLGraphBuilder* self , MLOperand * input, jb_Array * newShape);

MLOperand MLGraphBuilder_expand1(MLGraphBuilder* self , MLOperand * input, jb_Array * newShape, MLOperatorOptions * options);

MLOperand MLGraphBuilder_gather0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices);

MLOperand MLGraphBuilder_gather1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLGatherOptions * options);

MLOperand MLGraphBuilder_gatherElements0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices);

MLOperand MLGraphBuilder_gatherElements1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLGatherOptions * options);

MLOperand MLGraphBuilder_gatherND0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices);

MLOperand MLGraphBuilder_gatherND1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperatorOptions * options);

MLOperand MLGraphBuilder_gelu0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_gelu1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_gemm0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_gemm1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLGemmOptions * options);

jb_Array MLGraphBuilder_gru0(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, unsigned long steps, unsigned long hiddenSize);

jb_Array MLGraphBuilder_gru1(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, unsigned long steps, unsigned long hiddenSize, MLGruOptions * options);

MLOperand MLGraphBuilder_gruCell0(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, MLOperand * hiddenState, unsigned long hiddenSize);

MLOperand MLGraphBuilder_gruCell1(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, MLOperand * hiddenState, unsigned long hiddenSize, MLGruCellOptions * options);

MLOperand MLGraphBuilder_hardSigmoid0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_hardSigmoid1(MLGraphBuilder* self , MLOperand * input, MLHardSigmoidOptions * options);

MLOperand MLGraphBuilder_hardSwish0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_hardSwish1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_instanceNormalization0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_instanceNormalization1(MLGraphBuilder* self , MLOperand * input, MLInstanceNormalizationOptions * options);

MLOperand MLGraphBuilder_layerNormalization0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_layerNormalization1(MLGraphBuilder* self , MLOperand * input, MLLayerNormalizationOptions * options);

MLOperand MLGraphBuilder_leakyRelu0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_leakyRelu1(MLGraphBuilder* self , MLOperand * input, MLLeakyReluOptions * options);

MLOperand MLGraphBuilder_linear0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_linear1(MLGraphBuilder* self , MLOperand * input, MLLinearOptions * options);

jb_Array MLGraphBuilder_lstm0(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, unsigned long steps, unsigned long hiddenSize);

jb_Array MLGraphBuilder_lstm1(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, unsigned long steps, unsigned long hiddenSize, MLLstmOptions * options);

jb_Array MLGraphBuilder_lstmCell0(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, MLOperand * hiddenState, MLOperand * cellState, unsigned long hiddenSize);

jb_Array MLGraphBuilder_lstmCell1(MLGraphBuilder* self , MLOperand * input, MLOperand * weight, MLOperand * recurrentWeight, MLOperand * hiddenState, MLOperand * cellState, unsigned long hiddenSize, MLLstmCellOptions * options);

MLOperand MLGraphBuilder_matmul0(MLGraphBuilder* self , MLOperand * a, MLOperand * b);

MLOperand MLGraphBuilder_matmul1(MLGraphBuilder* self , MLOperand * a, MLOperand * b, MLOperatorOptions * options);

MLOperand MLGraphBuilder_pad0(MLGraphBuilder* self , MLOperand * input, jb_Array * beginningPadding, jb_Array * endingPadding);

MLOperand MLGraphBuilder_pad1(MLGraphBuilder* self , MLOperand * input, jb_Array * beginningPadding, jb_Array * endingPadding, MLPadOptions * options);

MLOperand MLGraphBuilder_averagePool2d0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_averagePool2d1(MLGraphBuilder* self , MLOperand * input, MLPool2dOptions * options);

MLOperand MLGraphBuilder_l2Pool2d0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_l2Pool2d1(MLGraphBuilder* self , MLOperand * input, MLPool2dOptions * options);

MLOperand MLGraphBuilder_maxPool2d0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_maxPool2d1(MLGraphBuilder* self , MLOperand * input, MLPool2dOptions * options);

MLOperand MLGraphBuilder_prelu0(MLGraphBuilder* self , MLOperand * input, MLOperand * slope);

MLOperand MLGraphBuilder_prelu1(MLGraphBuilder* self , MLOperand * input, MLOperand * slope, MLOperatorOptions * options);

MLOperand MLGraphBuilder_reduceL10(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceL11(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_reduceL20(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceL21(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_reduceLogSum0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceLogSum1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_reduceLogSumExp0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceLogSumExp1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_reduceMax0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceMax1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_reduceMean0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceMean1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_reduceMin0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceMin1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_reduceProduct0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceProduct1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_reduceSum0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceSum1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_reduceSumSquare0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reduceSumSquare1(MLGraphBuilder* self , MLOperand * input, MLReduceOptions * options);

MLOperand MLGraphBuilder_relu0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_relu1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_resample2d0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_resample2d1(MLGraphBuilder* self , MLOperand * input, MLResample2dOptions * options);

MLOperand MLGraphBuilder_reshape0(MLGraphBuilder* self , MLOperand * input, jb_Array * newShape);

MLOperand MLGraphBuilder_reshape1(MLGraphBuilder* self , MLOperand * input, jb_Array * newShape, MLOperatorOptions * options);

MLOperand MLGraphBuilder_reverse0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_reverse1(MLGraphBuilder* self , MLOperand * input, MLReverseOptions * options);

MLOperand MLGraphBuilder_scatterElements0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperand * updates);

MLOperand MLGraphBuilder_scatterElements1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperand * updates, MLScatterOptions * options);

MLOperand MLGraphBuilder_scatterND0(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperand * updates);

MLOperand MLGraphBuilder_scatterND1(MLGraphBuilder* self , MLOperand * input, MLOperand * indices, MLOperand * updates, MLOperatorOptions * options);

MLOperand MLGraphBuilder_sigmoid0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_sigmoid1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_slice0(MLGraphBuilder* self , MLOperand * input, jb_Array * starts, jb_Array * sizes);

MLOperand MLGraphBuilder_slice1(MLGraphBuilder* self , MLOperand * input, jb_Array * starts, jb_Array * sizes, MLSliceOptions * options);

MLOperand MLGraphBuilder_softmax0(MLGraphBuilder* self , MLOperand * input, unsigned long axis);

MLOperand MLGraphBuilder_softmax1(MLGraphBuilder* self , MLOperand * input, unsigned long axis, MLOperatorOptions * options);

MLOperand MLGraphBuilder_softplus0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_softplus1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_softsign0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_softsign1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

jb_Array MLGraphBuilder_split0(MLGraphBuilder* self , MLOperand * input, jb_Any * splits);

jb_Array MLGraphBuilder_split1(MLGraphBuilder* self , MLOperand * input, jb_Any * splits, MLSplitOptions * options);

MLOperand MLGraphBuilder_tanh0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_tanh1(MLGraphBuilder* self , MLOperand * input, MLOperatorOptions * options);

MLOperand MLGraphBuilder_tile0(MLGraphBuilder* self , MLOperand * input, jb_Array * repetitions);

MLOperand MLGraphBuilder_tile1(MLGraphBuilder* self , MLOperand * input, jb_Array * repetitions, MLOperatorOptions * options);

MLOperand MLGraphBuilder_transpose0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_transpose1(MLGraphBuilder* self , MLOperand * input, MLTransposeOptions * options);

MLOperand MLGraphBuilder_triangular0(MLGraphBuilder* self , MLOperand * input);

MLOperand MLGraphBuilder_triangular1(MLGraphBuilder* self , MLOperand * input, MLTriangularOptions * options);

MLOperand MLGraphBuilder_where0(MLGraphBuilder* self , MLOperand * condition, MLOperand * trueValue, MLOperand * falseValue);

MLOperand MLGraphBuilder_where1(MLGraphBuilder* self , MLOperand * condition, MLOperand * trueValue, MLOperand * falseValue, MLOperatorOptions * options);
