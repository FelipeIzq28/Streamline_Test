// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSystemFactoryNew.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraSystemFactoryNew_generated_h
#error "NiagaraSystemFactoryNew.generated.h already included, missing '#pragma once' in NiagaraSystemFactoryNew.h"
#endif
#define NIAGARAEDITOR_NiagaraSystemFactoryNew_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemFactoryNew_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSystemFactoryNew(); \
	friend struct Z_Construct_UClass_UNiagaraSystemFactoryNew_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSystemFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraSystemFactoryNew)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemFactoryNew_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraSystemFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSystemFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraSystemFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSystemFactoryNew); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraSystemFactoryNew(UNiagaraSystemFactoryNew&&); \
	UNiagaraSystemFactoryNew(const UNiagaraSystemFactoryNew&); \
public: \
	NO_API virtual ~UNiagaraSystemFactoryNew();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemFactoryNew_h_15_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemFactoryNew_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemFactoryNew_h_18_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemFactoryNew_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraSystemFactoryNew>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemFactoryNew_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
