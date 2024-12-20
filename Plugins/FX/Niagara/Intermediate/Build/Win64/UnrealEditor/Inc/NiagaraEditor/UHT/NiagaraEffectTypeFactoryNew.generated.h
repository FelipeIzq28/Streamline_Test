// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraEffectTypeFactoryNew.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraEffectTypeFactoryNew_generated_h
#error "NiagaraEffectTypeFactoryNew.generated.h already included, missing '#pragma once' in NiagaraEffectTypeFactoryNew.h"
#endif
#define NIAGARAEDITOR_NiagaraEffectTypeFactoryNew_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEffectTypeFactoryNew_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraEffectTypeFactoryNew(); \
	friend struct Z_Construct_UClass_UNiagaraEffectTypeFactoryNew_Statics; \
public: \
	DECLARE_CLASS(UNiagaraEffectTypeFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraEffectTypeFactoryNew)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEffectTypeFactoryNew_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraEffectTypeFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEffectTypeFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraEffectTypeFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEffectTypeFactoryNew); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraEffectTypeFactoryNew(UNiagaraEffectTypeFactoryNew&&); \
	UNiagaraEffectTypeFactoryNew(const UNiagaraEffectTypeFactoryNew&); \
public: \
	NO_API virtual ~UNiagaraEffectTypeFactoryNew();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEffectTypeFactoryNew_h_10_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEffectTypeFactoryNew_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEffectTypeFactoryNew_h_13_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEffectTypeFactoryNew_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraEffectTypeFactoryNew>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEffectTypeFactoryNew_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
