// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Customizations/SimCache/NiagaraRenderTargetVolumeSimCacheVisualizer.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraRenderTargetVolumeSimCacheVisualizer_generated_h
#error "NiagaraRenderTargetVolumeSimCacheVisualizer.generated.h already included, missing '#pragma once' in NiagaraRenderTargetVolumeSimCacheVisualizer.h"
#endif
#define NIAGARAEDITOR_NiagaraRenderTargetVolumeSimCacheVisualizer_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_SimCache_NiagaraRenderTargetVolumeSimCacheVisualizer_h


#define FOREACH_ENUM_ENIAGARARENDERTARGETVOLUMEVISUALIZERMASK(op) \
	op(ENiagaraRenderTargetVolumeVisualizerMask::R) \
	op(ENiagaraRenderTargetVolumeVisualizerMask::G) \
	op(ENiagaraRenderTargetVolumeVisualizerMask::B) \
	op(ENiagaraRenderTargetVolumeVisualizerMask::A) 

enum class ENiagaraRenderTargetVolumeVisualizerMask;
template<> struct TIsUEnumClass<ENiagaraRenderTargetVolumeVisualizerMask> { enum { Value = true }; };
template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraRenderTargetVolumeVisualizerMask>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
