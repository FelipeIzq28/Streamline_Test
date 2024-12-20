// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VolumeCacheFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_VolumeCacheFactory_generated_h
#error "VolumeCacheFactory.generated.h already included, missing '#pragma once' in VolumeCacheFactory.h"
#endif
#define NIAGARAEDITOR_VolumeCacheFactory_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUVolumeCacheFactory(); \
	friend struct Z_Construct_UClass_UVolumeCacheFactory_Statics; \
public: \
	DECLARE_CLASS(UVolumeCacheFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UVolumeCacheFactory)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UVolumeCacheFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumeCacheFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UVolumeCacheFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumeCacheFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVolumeCacheFactory(UVolumeCacheFactory&&); \
	UVolumeCacheFactory(const UVolumeCacheFactory&); \
public: \
	NIAGARAEDITOR_API virtual ~UVolumeCacheFactory();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h_13_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h_16_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UVolumeCacheFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
