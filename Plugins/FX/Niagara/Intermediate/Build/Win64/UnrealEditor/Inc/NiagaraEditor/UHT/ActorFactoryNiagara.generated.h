// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactoryNiagara.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_ActorFactoryNiagara_generated_h
#error "ActorFactoryNiagara.generated.h already included, missing '#pragma once' in ActorFactoryNiagara.h"
#endif
#define NIAGARAEDITOR_ActorFactoryNiagara_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryNiagara(); \
	friend struct Z_Construct_UClass_UActorFactoryNiagara_Statics; \
public: \
	DECLARE_CLASS(UActorFactoryNiagara, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UActorFactoryNiagara)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UActorFactoryNiagara(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryNiagara) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UActorFactoryNiagara); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryNiagara); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFactoryNiagara(UActorFactoryNiagara&&); \
	UActorFactoryNiagara(const UActorFactoryNiagara&); \
public: \
	NIAGARAEDITOR_API virtual ~UActorFactoryNiagara();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h_14_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h_17_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UActorFactoryNiagara>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
