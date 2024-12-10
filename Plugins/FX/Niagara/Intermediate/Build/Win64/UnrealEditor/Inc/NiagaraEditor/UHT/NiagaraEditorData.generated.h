// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraEditorData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraEditorData_generated_h
#error "NiagaraEditorData.generated.h already included, missing '#pragma once' in NiagaraEditorData.h"
#endif
#define NIAGARAEDITOR_NiagaraEditorData_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorData_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraEditorParametersAdapter(); \
	friend struct Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics; \
public: \
	DECLARE_CLASS(UNiagaraEditorParametersAdapter, UNiagaraEditorParametersAdapterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraEditorParametersAdapter)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorData_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraEditorParametersAdapter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraEditorParametersAdapter(UNiagaraEditorParametersAdapter&&); \
	UNiagaraEditorParametersAdapter(const UNiagaraEditorParametersAdapter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraEditorParametersAdapter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEditorParametersAdapter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEditorParametersAdapter) \
	NO_API virtual ~UNiagaraEditorParametersAdapter();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorData_h_16_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorData_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorData_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorData_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraEditorParametersAdapter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS