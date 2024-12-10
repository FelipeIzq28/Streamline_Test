// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraNodeOutputTag.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraNodeOutputTag_generated_h
#error "NiagaraNodeOutputTag.generated.h already included, missing '#pragma once' in NiagaraNodeOutputTag.h"
#endif
#define NIAGARAEDITOR_NiagaraNodeOutputTag_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeOutputTag_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraNodeOutputTag(); \
	friend struct Z_Construct_UClass_UNiagaraNodeOutputTag_Statics; \
public: \
	DECLARE_CLASS(UNiagaraNodeOutputTag, UNiagaraNodeWithDynamicPins, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UNiagaraNodeOutputTag)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeOutputTag_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraNodeOutputTag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraNodeOutputTag) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraNodeOutputTag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraNodeOutputTag); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraNodeOutputTag(UNiagaraNodeOutputTag&&); \
	UNiagaraNodeOutputTag(const UNiagaraNodeOutputTag&); \
public: \
	NIAGARAEDITOR_API virtual ~UNiagaraNodeOutputTag();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeOutputTag_h_13_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeOutputTag_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeOutputTag_h_16_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeOutputTag_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraNodeOutputTag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeOutputTag_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
