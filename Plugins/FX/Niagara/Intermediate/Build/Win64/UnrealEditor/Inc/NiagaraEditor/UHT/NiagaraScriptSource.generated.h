// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraScriptSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraScriptSource_generated_h
#error "NiagaraScriptSource.generated.h already included, missing '#pragma once' in NiagaraScriptSource.h"
#endif
#define NIAGARAEDITOR_NiagaraScriptSource_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraScriptSource(); \
	friend struct Z_Construct_UClass_UNiagaraScriptSource_Statics; \
public: \
	DECLARE_CLASS(UNiagaraScriptSource, UNiagaraScriptSourceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UNiagaraScriptSource)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraScriptSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraScriptSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraScriptSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScriptSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraScriptSource(UNiagaraScriptSource&&); \
	UNiagaraScriptSource(const UNiagaraScriptSource&); \
public: \
	NIAGARAEDITOR_API virtual ~UNiagaraScriptSource();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h_17_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h_20_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraScriptSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
