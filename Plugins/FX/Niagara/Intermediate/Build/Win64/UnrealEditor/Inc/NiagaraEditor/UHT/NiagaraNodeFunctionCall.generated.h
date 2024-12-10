// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraNodeFunctionCall.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraNodeFunctionCall_generated_h
#error "NiagaraNodeFunctionCall.generated.h already included, missing '#pragma once' in NiagaraNodeFunctionCall.h"
#endif
#define NIAGARAEDITOR_NiagaraNodeFunctionCall_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraPropagatedVariable>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraNodeFunctionCall(); \
	friend struct Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics; \
public: \
	DECLARE_CLASS(UNiagaraNodeFunctionCall, UNiagaraNodeWithDynamicPins, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UNiagaraNodeFunctionCall)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraNodeFunctionCall(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraNodeFunctionCall(UNiagaraNodeFunctionCall&&); \
	UNiagaraNodeFunctionCall(const UNiagaraNodeFunctionCall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraNodeFunctionCall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraNodeFunctionCall); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraNodeFunctionCall) \
	NIAGARAEDITOR_API virtual ~UNiagaraNodeFunctionCall();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_53_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraNodeFunctionCall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
