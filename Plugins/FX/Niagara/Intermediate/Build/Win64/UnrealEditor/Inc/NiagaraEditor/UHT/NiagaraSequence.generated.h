// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/NiagaraSequence/NiagaraSequence.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraSequence_generated_h
#error "NiagaraSequence.generated.h already included, missing '#pragma once' in NiagaraSequence.h"
#endif
#define NIAGARAEDITOR_NiagaraSequence_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequence_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSequence(); \
	friend struct Z_Construct_UClass_UNiagaraSequence_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSequence, UMovieSceneSequence, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UNiagaraSequence)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequence_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSequence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraSequence(UNiagaraSequence&&); \
	UNiagaraSequence(const UNiagaraSequence&); \
public: \
	NIAGARAEDITOR_API virtual ~UNiagaraSequence();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequence_h_16_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequence_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequence_h_20_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequence_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraSequence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
