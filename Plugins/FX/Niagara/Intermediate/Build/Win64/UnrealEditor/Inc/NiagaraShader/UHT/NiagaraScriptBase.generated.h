// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraScriptBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARASHADER_NiagaraScriptBase_generated_h
#error "NiagaraScriptBase.generated.h already included, missing '#pragma once' in NiagaraScriptBase.h"
#endif
#define NIAGARASHADER_NiagaraScriptBase_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics; \
	NIAGARASHADER_API static class UScriptStruct* StaticStruct();


template<> NIAGARASHADER_API UScriptStruct* StaticStruct<struct FSimulationStageMetaData>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h_167_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraScriptBase(); \
	friend struct Z_Construct_UClass_UNiagaraScriptBase_Statics; \
public: \
	DECLARE_CLASS(UNiagaraScriptBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NiagaraShader"), NIAGARASHADER_API) \
	DECLARE_SERIALIZER(UNiagaraScriptBase)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h_167_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARASHADER_API UNiagaraScriptBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraScriptBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARASHADER_API, UNiagaraScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScriptBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraScriptBase(UNiagaraScriptBase&&); \
	UNiagaraScriptBase(const UNiagaraScriptBase&); \
public: \
	NIAGARASHADER_API virtual ~UNiagaraScriptBase();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h_164_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h_167_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h_167_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h_167_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARASHADER_API UClass* StaticClass<class UNiagaraScriptBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h


#define FOREACH_ENUM_ENIAGARAGPUDISPATCHTYPE(op) \
	op(ENiagaraGpuDispatchType::OneD) \
	op(ENiagaraGpuDispatchType::TwoD) \
	op(ENiagaraGpuDispatchType::ThreeD) \
	op(ENiagaraGpuDispatchType::Custom) 

enum class ENiagaraGpuDispatchType : uint8;
template<> struct TIsUEnumClass<ENiagaraGpuDispatchType> { enum { Value = true }; };
template<> NIAGARASHADER_API UEnum* StaticEnum<ENiagaraGpuDispatchType>();

#define FOREACH_ENUM_ENIAGARADIRECTDISPATCHELEMENTTYPE(op) \
	op(ENiagaraDirectDispatchElementType::NumThreads) \
	op(ENiagaraDirectDispatchElementType::NumThreadsNoClipping) \
	op(ENiagaraDirectDispatchElementType::NumGroups) 

enum class ENiagaraDirectDispatchElementType : uint8;
template<> struct TIsUEnumClass<ENiagaraDirectDispatchElementType> { enum { Value = true }; };
template<> NIAGARASHADER_API UEnum* StaticEnum<ENiagaraDirectDispatchElementType>();

#define FOREACH_ENUM_ENIAGARASIMSTAGEEXECUTEBEHAVIOR(op) \
	op(ENiagaraSimStageExecuteBehavior::Always) \
	op(ENiagaraSimStageExecuteBehavior::OnSimulationReset) \
	op(ENiagaraSimStageExecuteBehavior::NotOnSimulationReset) 

enum class ENiagaraSimStageExecuteBehavior : uint8;
template<> struct TIsUEnumClass<ENiagaraSimStageExecuteBehavior> { enum { Value = true }; };
template<> NIAGARASHADER_API UEnum* StaticEnum<ENiagaraSimStageExecuteBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
