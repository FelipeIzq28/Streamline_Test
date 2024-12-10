// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewModels/Stack/NiagaraStackEntry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraStackEntry_generated_h
#error "NiagaraStackEntry.generated.h already included, missing '#pragma once' in NiagaraStackEntry.h"
#endif
#define NIAGARAEDITOR_NiagaraStackEntry_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStackEntry(); \
	friend struct Z_Construct_UClass_UNiagaraStackEntry_Statics; \
public: \
	DECLARE_CLASS(UNiagaraStackEntry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UNiagaraStackEntry)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraStackEntry(UNiagaraStackEntry&&); \
	UNiagaraStackEntry(const UNiagaraStackEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraStackEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStackEntry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraStackEntry) \
	NIAGARAEDITOR_API virtual ~UNiagaraStackEntry();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_50_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraStackEntry>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_718_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStackSpacer(); \
	friend struct Z_Construct_UClass_UNiagaraStackSpacer_Statics; \
public: \
	DECLARE_CLASS(UNiagaraStackSpacer, UNiagaraStackEntry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UNiagaraStackSpacer)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_718_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraStackSpacer(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraStackSpacer(UNiagaraStackSpacer&&); \
	UNiagaraStackSpacer(const UNiagaraStackSpacer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraStackSpacer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStackSpacer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraStackSpacer) \
	NIAGARAEDITOR_API virtual ~UNiagaraStackSpacer();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_715_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_718_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_718_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_718_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraStackSpacer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h


#define FOREACH_ENUM_ESTACKISSUESEVERITY(op) \
	op(EStackIssueSeverity::Error) \
	op(EStackIssueSeverity::Warning) \
	op(EStackIssueSeverity::Info) \
	op(EStackIssueSeverity::None) 

enum class EStackIssueSeverity : uint8;
template<> struct TIsUEnumClass<EStackIssueSeverity> { enum { Value = true }; };
template<> NIAGARAEDITOR_API UEnum* StaticEnum<EStackIssueSeverity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
