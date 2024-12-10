// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraphSchema_Niagara.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_EdGraphSchema_Niagara_generated_h
#error "EdGraphSchema_Niagara.generated.h already included, missing '#pragma once' in EdGraphSchema_Niagara.h"
#endif
#define NIAGARAEDITOR_EdGraphSchema_Niagara_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraSchemaAction_NewNode>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewComment_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraSchemaAction_NewComment>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_86_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphSchema_Niagara(); \
	friend struct Z_Construct_UClass_UEdGraphSchema_Niagara_Statics; \
public: \
	DECLARE_CLASS(UEdGraphSchema_Niagara, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UEdGraphSchema_Niagara)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UEdGraphSchema_Niagara(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphSchema_Niagara) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UEdGraphSchema_Niagara); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphSchema_Niagara); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEdGraphSchema_Niagara(UEdGraphSchema_Niagara&&); \
	UEdGraphSchema_Niagara(const UEdGraphSchema_Niagara&); \
public: \
	NIAGARAEDITOR_API virtual ~UEdGraphSchema_Niagara();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_83_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_86_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UEdGraphSchema_Niagara>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
