// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraScriptFactoryNew.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraScriptFactoryNew_generated_h
#error "NiagaraScriptFactoryNew.generated.h already included, missing '#pragma once' in NiagaraScriptFactoryNew.h"
#endif
#define NIAGARAEDITOR_NiagaraScriptFactoryNew_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraScriptFactoryNew(); \
	friend struct Z_Construct_UClass_UNiagaraScriptFactoryNew_Statics; \
public: \
	DECLARE_CLASS(UNiagaraScriptFactoryNew, UFactory, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraScriptFactoryNew)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraScriptFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraScriptFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraScriptFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScriptFactoryNew); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraScriptFactoryNew(UNiagaraScriptFactoryNew&&); \
	UNiagaraScriptFactoryNew(const UNiagaraScriptFactoryNew&); \
public: \
	NO_API virtual ~UNiagaraScriptFactoryNew();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_12_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_15_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraScriptFactoryNew>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraModuleScriptFactory(); \
	friend struct Z_Construct_UClass_UNiagaraModuleScriptFactory_Statics; \
public: \
	DECLARE_CLASS(UNiagaraModuleScriptFactory, UNiagaraScriptFactoryNew, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraModuleScriptFactory)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraModuleScriptFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraModuleScriptFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraModuleScriptFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraModuleScriptFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraModuleScriptFactory(UNiagaraModuleScriptFactory&&); \
	UNiagaraModuleScriptFactory(const UNiagaraModuleScriptFactory&); \
public: \
	NO_API virtual ~UNiagaraModuleScriptFactory();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_40_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_43_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraModuleScriptFactory>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraFunctionScriptFactory(); \
	friend struct Z_Construct_UClass_UNiagaraFunctionScriptFactory_Statics; \
public: \
	DECLARE_CLASS(UNiagaraFunctionScriptFactory, UNiagaraScriptFactoryNew, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraFunctionScriptFactory)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraFunctionScriptFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraFunctionScriptFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraFunctionScriptFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraFunctionScriptFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraFunctionScriptFactory(UNiagaraFunctionScriptFactory&&); \
	UNiagaraFunctionScriptFactory(const UNiagaraFunctionScriptFactory&); \
public: \
	NO_API virtual ~UNiagaraFunctionScriptFactory();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_60_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_63_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraFunctionScriptFactory>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDynamicInputScriptFactory(); \
	friend struct Z_Construct_UClass_UNiagaraDynamicInputScriptFactory_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDynamicInputScriptFactory, UNiagaraScriptFactoryNew, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraDynamicInputScriptFactory)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDynamicInputScriptFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDynamicInputScriptFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDynamicInputScriptFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDynamicInputScriptFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDynamicInputScriptFactory(UNiagaraDynamicInputScriptFactory&&); \
	UNiagaraDynamicInputScriptFactory(const UNiagaraDynamicInputScriptFactory&); \
public: \
	NO_API virtual ~UNiagaraDynamicInputScriptFactory();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_79_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_82_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraDynamicInputScriptFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
