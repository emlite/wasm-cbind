#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioDestinationNode AudioDestinationNode;
typedef struct AudioListener AudioListener;
typedef struct AudioWorklet AudioWorklet;
typedef struct AnalyserNode AnalyserNode;
typedef struct BiquadFilterNode BiquadFilterNode;
typedef struct AudioBuffer AudioBuffer;
typedef struct AudioBufferSourceNode AudioBufferSourceNode;
typedef struct ChannelMergerNode ChannelMergerNode;
typedef struct ChannelSplitterNode ChannelSplitterNode;
typedef struct ConstantSourceNode ConstantSourceNode;
typedef struct ConvolverNode ConvolverNode;
typedef struct DelayNode DelayNode;
typedef struct DynamicsCompressorNode DynamicsCompressorNode;
typedef struct GainNode GainNode;
typedef struct IIRFilterNode IIRFilterNode;
typedef struct OscillatorNode OscillatorNode;
typedef struct PannerNode PannerNode;
typedef struct PeriodicWave PeriodicWave;
typedef struct PeriodicWaveConstraints PeriodicWaveConstraints;
typedef struct ScriptProcessorNode ScriptProcessorNode;
typedef struct StereoPannerNode StereoPannerNode;
typedef struct WaveShaperNode WaveShaperNode;


DECLARE_EMLITE_TYPE(PeriodicWaveConstraints, em_Val);

bool PeriodicWaveConstraints_disableNormalization(const PeriodicWaveConstraints *self);

void PeriodicWaveConstraints_set_disableNormalization(PeriodicWaveConstraints* self, bool value);
DECLARE_EMLITE_TYPE(BaseAudioContext, EventTarget);

AudioDestinationNode BaseAudioContext_destination(const BaseAudioContext *self);

float BaseAudioContext_sampleRate(const BaseAudioContext *self);

double BaseAudioContext_currentTime(const BaseAudioContext *self);

AudioListener BaseAudioContext_listener(const BaseAudioContext *self);

AudioContextState BaseAudioContext_state(const BaseAudioContext *self);

unsigned long BaseAudioContext_renderQuantumSize(const BaseAudioContext *self);

AudioWorklet BaseAudioContext_audioWorklet(const BaseAudioContext *self);

jb_Any BaseAudioContext_onstatechange(const BaseAudioContext *self);

void BaseAudioContext_set_onstatechange(BaseAudioContext* self, jb_Any * value);

AnalyserNode BaseAudioContext_createAnalyser(BaseAudioContext* self );

BiquadFilterNode BaseAudioContext_createBiquadFilter(BaseAudioContext* self );

AudioBuffer BaseAudioContext_createBuffer(BaseAudioContext* self , unsigned long numberOfChannels, unsigned long length, float sampleRate);

AudioBufferSourceNode BaseAudioContext_createBufferSource(BaseAudioContext* self );

ChannelMergerNode BaseAudioContext_createChannelMerger0(BaseAudioContext* self );

ChannelMergerNode BaseAudioContext_createChannelMerger1(BaseAudioContext* self , unsigned long numberOfInputs);

ChannelSplitterNode BaseAudioContext_createChannelSplitter0(BaseAudioContext* self );

ChannelSplitterNode BaseAudioContext_createChannelSplitter1(BaseAudioContext* self , unsigned long numberOfOutputs);

ConstantSourceNode BaseAudioContext_createConstantSource(BaseAudioContext* self );

ConvolverNode BaseAudioContext_createConvolver(BaseAudioContext* self );

DelayNode BaseAudioContext_createDelay0(BaseAudioContext* self );

DelayNode BaseAudioContext_createDelay1(BaseAudioContext* self , double maxDelayTime);

DynamicsCompressorNode BaseAudioContext_createDynamicsCompressor(BaseAudioContext* self );

GainNode BaseAudioContext_createGain(BaseAudioContext* self );

IIRFilterNode BaseAudioContext_createIIRFilter(BaseAudioContext* self , jb_Array * feedforward, jb_Array * feedback);

OscillatorNode BaseAudioContext_createOscillator(BaseAudioContext* self );

PannerNode BaseAudioContext_createPanner(BaseAudioContext* self );

PeriodicWave BaseAudioContext_createPeriodicWave0(BaseAudioContext* self , jb_Array * real, jb_Array * imag);

PeriodicWave BaseAudioContext_createPeriodicWave1(BaseAudioContext* self , jb_Array * real, jb_Array * imag, PeriodicWaveConstraints * constraints);

ScriptProcessorNode BaseAudioContext_createScriptProcessor0(BaseAudioContext* self );

ScriptProcessorNode BaseAudioContext_createScriptProcessor1(BaseAudioContext* self , unsigned long bufferSize);

ScriptProcessorNode BaseAudioContext_createScriptProcessor2(BaseAudioContext* self , unsigned long bufferSize, unsigned long numberOfInputChannels);

ScriptProcessorNode BaseAudioContext_createScriptProcessor3(BaseAudioContext* self , unsigned long bufferSize, unsigned long numberOfInputChannels, unsigned long numberOfOutputChannels);

StereoPannerNode BaseAudioContext_createStereoPanner(BaseAudioContext* self );

WaveShaperNode BaseAudioContext_createWaveShaper(BaseAudioContext* self );

jb_Promise BaseAudioContext_decodeAudioData0(BaseAudioContext* self , jb_ArrayBuffer * audioData);

jb_Promise BaseAudioContext_decodeAudioData1(BaseAudioContext* self , jb_ArrayBuffer * audioData, jb_Function * successCallback);

jb_Promise BaseAudioContext_decodeAudioData2(BaseAudioContext* self , jb_ArrayBuffer * audioData, jb_Function * successCallback, jb_Function * errorCallback);
