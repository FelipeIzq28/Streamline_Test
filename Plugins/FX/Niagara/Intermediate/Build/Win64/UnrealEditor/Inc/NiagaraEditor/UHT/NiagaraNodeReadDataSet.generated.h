// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraNodeReadDataSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraNodeReadDataSet_generated_h
#error "NiagaraNodeReadDataSet.generated.h already included, missing '#pragma once' in NiagaraNodeReadDataSet.h"
#endif
#define NIAGARAEDITOR_NiagaraNodeReadDataSet_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeReadDataSet_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraNodeReadDataSet(); \
	friend struct Z_Construct_UClass_UNiagaraNodeReadDataSet_Statics; \
public: \
	DECLARE_CLASS(UNiagaraNodeReadDataSet, UNiagaraNodeDataSetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UNiagaraNodeReadDataSet)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeReadDataSet_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraNodeReadDataSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraNodeReadDataSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraNodeReadDataSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraNodeReadDataSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraNodeReadDataSet(UNiagaraNodeReadDataSet&&); \
	UNiagaraNodeReadDataSet(const UNiagaraNodeReadDataSet&); \
public: \
	NIAGARAEDITOR_API virtual ~UNiagaraNodeReadDataSet();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeReadDataSet_h_12_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeReadDataSet_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeReadDataSet_h_15_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeReadDataSet_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraNodeReadDataSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeReadDataSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS