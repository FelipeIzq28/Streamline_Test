// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/NiagaraSystemAuditCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraSystemAuditCommandlet_generated_h
#error "NiagaraSystemAuditCommandlet.generated.h already included, missing '#pragma once' in NiagaraSystemAuditCommandlet.h"
#endif
#define NIAGARAEDITOR_NiagaraSystemAuditCommandlet_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraSystemAuditCommandlet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSystemAuditCommandlet(); \
	friend struct Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSystemAuditCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraSystemAuditCommandlet) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraSystemAuditCommandlet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraSystemAuditCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSystemAuditCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraSystemAuditCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSystemAuditCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraSystemAuditCommandlet(UNiagaraSystemAuditCommandlet&&); \
	UNiagaraSystemAuditCommandlet(const UNiagaraSystemAuditCommandlet&); \
public: \
	NO_API virtual ~UNiagaraSystemAuditCommandlet();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraSystemAuditCommandlet_h_10_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraSystemAuditCommandlet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraSystemAuditCommandlet_h_13_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraSystemAuditCommandlet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraSystemAuditCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraSystemAuditCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
