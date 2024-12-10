// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraGraph_generated_h
#error "NiagaraGraph.generated.h already included, missing '#pragma once' in NiagaraGraph.h"
#endif
#define NIAGARAEDITOR_NiagaraGraph_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraGraphParameterReference>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraGraphParameterReferenceCollection>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraGraphScriptUsageInfo>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_182_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraGraph(); \
	friend struct Z_Construct_UClass_UNiagaraGraph_Statics; \
public: \
	DECLARE_CLASS(UNiagaraGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UNiagaraGraph)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_182_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraGraph(UNiagaraGraph&&); \
	UNiagaraGraph(const UNiagaraGraph&); \
public: \
	NIAGARAEDITOR_API virtual ~UNiagaraGraph();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_179_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_182_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_182_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_182_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
