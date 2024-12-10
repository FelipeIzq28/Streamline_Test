// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraNodeUsageSelector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraNodeUsageSelector_generated_h
#error "NiagaraNodeUsageSelector.generated.h already included, missing '#pragma once' in NiagaraNodeUsageSelector.h"
#endif
#define NIAGARAEDITOR_NiagaraNodeUsageSelector_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeUsageSelector_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraNodeUsageSelector(); \
	friend struct Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics; \
public: \
	DECLARE_CLASS(UNiagaraNodeUsageSelector, UNiagaraNodeWithDynamicPins, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UNiagaraNodeUsageSelector)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeUsageSelector_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraNodeUsageSelector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraNodeUsageSelector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraNodeUsageSelector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraNodeUsageSelector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraNodeUsageSelector(UNiagaraNodeUsageSelector&&); \
	UNiagaraNodeUsageSelector(const UNiagaraNodeUsageSelector&); \
public: \
	NIAGARAEDITOR_API virtual ~UNiagaraNodeUsageSelector();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeUsageSelector_h_8_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeUsageSelector_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeUsageSelector_h_11_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeUsageSelector_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraNodeUsageSelector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeUsageSelector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
