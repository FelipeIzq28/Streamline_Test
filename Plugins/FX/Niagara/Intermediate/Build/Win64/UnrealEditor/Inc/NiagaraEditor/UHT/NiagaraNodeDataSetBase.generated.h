// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraNodeDataSetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraNodeDataSetBase_generated_h
#error "NiagaraNodeDataSetBase.generated.h already included, missing '#pragma once' in NiagaraNodeDataSetBase.h"
#endif
#define NIAGARAEDITOR_NiagaraNodeDataSetBase_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeDataSetBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraNodeDataSetBase(); \
	friend struct Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics; \
public: \
	DECLARE_CLASS(UNiagaraNodeDataSetBase, UNiagaraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UNiagaraNodeDataSetBase)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeDataSetBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraNodeDataSetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraNodeDataSetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraNodeDataSetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraNodeDataSetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraNodeDataSetBase(UNiagaraNodeDataSetBase&&); \
	UNiagaraNodeDataSetBase(const UNiagaraNodeDataSetBase&); \
public: \
	NIAGARAEDITOR_API virtual ~UNiagaraNodeDataSetBase();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeDataSetBase_h_12_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeDataSetBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeDataSetBase_h_15_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeDataSetBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraNodeDataSetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeDataSetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
