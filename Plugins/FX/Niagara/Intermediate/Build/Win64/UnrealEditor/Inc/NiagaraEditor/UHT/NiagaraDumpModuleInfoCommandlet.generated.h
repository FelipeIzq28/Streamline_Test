// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/NiagaraDumpModuleInfoCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraDumpModuleInfoCommandlet_generated_h
#error "NiagaraDumpModuleInfoCommandlet.generated.h already included, missing '#pragma once' in NiagaraDumpModuleInfoCommandlet.h"
#endif
#define NIAGARAEDITOR_NiagaraDumpModuleInfoCommandlet_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpModuleInfoCommandlet_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDumpModuleInfoCommandlet(); \
	friend struct Z_Construct_UClass_UNiagaraDumpModuleInfoCommandlet_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDumpModuleInfoCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraDumpModuleInfoCommandlet) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpModuleInfoCommandlet_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDumpModuleInfoCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDumpModuleInfoCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDumpModuleInfoCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDumpModuleInfoCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDumpModuleInfoCommandlet(UNiagaraDumpModuleInfoCommandlet&&); \
	UNiagaraDumpModuleInfoCommandlet(const UNiagaraDumpModuleInfoCommandlet&); \
public: \
	NO_API virtual ~UNiagaraDumpModuleInfoCommandlet();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpModuleInfoCommandlet_h_12_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpModuleInfoCommandlet_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpModuleInfoCommandlet_h_15_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpModuleInfoCommandlet_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraDumpModuleInfoCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpModuleInfoCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
