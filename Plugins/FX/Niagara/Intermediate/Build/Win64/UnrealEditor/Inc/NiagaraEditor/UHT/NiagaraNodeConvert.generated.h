// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraNodeConvert.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraNodeConvert_generated_h
#error "NiagaraNodeConvert.generated.h already included, missing '#pragma once' in NiagaraNodeConvert.h"
#endif
#define NIAGARAEDITOR_NiagaraNodeConvert_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeConvert_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraConvertPinRecord>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeConvert_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraConvertConnection>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeConvert_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraNodeConvert(); \
	friend struct Z_Construct_UClass_UNiagaraNodeConvert_Statics; \
public: \
	DECLARE_CLASS(UNiagaraNodeConvert, UNiagaraNodeWithDynamicPins, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraNodeConvert)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeConvert_h_96_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraNodeConvert(UNiagaraNodeConvert&&); \
	UNiagaraNodeConvert(const UNiagaraNodeConvert&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraNodeConvert); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraNodeConvert); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraNodeConvert) \
	NO_API virtual ~UNiagaraNodeConvert();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeConvert_h_92_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeConvert_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeConvert_h_96_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeConvert_h_96_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraNodeConvert>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeConvert_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
