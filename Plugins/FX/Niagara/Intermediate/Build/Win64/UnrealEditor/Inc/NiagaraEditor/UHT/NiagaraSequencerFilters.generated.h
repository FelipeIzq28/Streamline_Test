// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/NiagaraSequence/NiagaraSequencerFilters.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraSequencerFilters_generated_h
#error "NiagaraSequencerFilters.generated.h already included, missing '#pragma once' in NiagaraSequencerFilters.h"
#endif
#define NIAGARAEDITOR_NiagaraSequencerFilters_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequencerFilters_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSequencerTrackFilter(); \
	friend struct Z_Construct_UClass_UNiagaraSequencerTrackFilter_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSequencerTrackFilter, USequencerTrackFilterExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraSequencerTrackFilter)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequencerFilters_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraSequencerTrackFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraSequencerTrackFilter(UNiagaraSequencerTrackFilter&&); \
	UNiagaraSequencerTrackFilter(const UNiagaraSequencerTrackFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraSequencerTrackFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSequencerTrackFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSequencerTrackFilter) \
	NO_API virtual ~UNiagaraSequencerTrackFilter();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequencerFilters_h_11_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequencerFilters_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequencerFilters_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequencerFilters_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraSequencerTrackFilter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequencerFilters_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
