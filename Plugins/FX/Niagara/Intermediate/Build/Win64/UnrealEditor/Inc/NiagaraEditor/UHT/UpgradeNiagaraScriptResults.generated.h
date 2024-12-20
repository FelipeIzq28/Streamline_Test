// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UpgradeNiagaraScriptResults.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraEmitter;
class UNiagaraPythonModule;
class UNiagaraPythonScriptModuleInput;
class UNiagaraStackModuleItem;
struct FLinearColor;
struct FVersionedNiagaraEmitterData;
#ifdef NIAGARAEDITOR_UpgradeNiagaraScriptResults_generated_h
#error "UpgradeNiagaraScriptResults.generated.h already included, missing '#pragma once' in UpgradeNiagaraScriptResults.h"
#endif
#define NIAGARAEDITOR_UpgradeNiagaraScriptResults_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAsLinkedValue); \
	DECLARE_FUNCTION(execAsEnum); \
	DECLARE_FUNCTION(execAsQuat); \
	DECLARE_FUNCTION(execAsColor); \
	DECLARE_FUNCTION(execAsVec4); \
	DECLARE_FUNCTION(execAsVec3); \
	DECLARE_FUNCTION(execAsVec2); \
	DECLARE_FUNCTION(execAsBool); \
	DECLARE_FUNCTION(execAsInt); \
	DECLARE_FUNCTION(execAsFloat); \
	DECLARE_FUNCTION(execIsLinkedValue); \
	DECLARE_FUNCTION(execIsLocalValue); \
	DECLARE_FUNCTION(execIsSet);


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPythonScriptModuleInput(); \
	friend struct Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPythonScriptModuleInput, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPythonScriptModuleInput)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraPythonScriptModuleInput(UNiagaraPythonScriptModuleInput&&); \
	UNiagaraPythonScriptModuleInput(const UNiagaraPythonScriptModuleInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPythonScriptModuleInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPythonScriptModuleInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraPythonScriptModuleInput) \
	NO_API virtual ~UNiagaraPythonScriptModuleInput();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_38_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraPythonScriptModuleInput>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetToDefault); \
	DECLARE_FUNCTION(execSetNewInput); \
	DECLARE_FUNCTION(execSetLinkedInput); \
	DECLARE_FUNCTION(execSetEnumInput); \
	DECLARE_FUNCTION(execSetQuatInput); \
	DECLARE_FUNCTION(execSetColorInput); \
	DECLARE_FUNCTION(execSetVec4Input); \
	DECLARE_FUNCTION(execSetVec3Input); \
	DECLARE_FUNCTION(execSetVec2Input); \
	DECLARE_FUNCTION(execSetBoolInput); \
	DECLARE_FUNCTION(execSetIntInput); \
	DECLARE_FUNCTION(execSetFloatInput); \
	DECLARE_FUNCTION(execGetOldInput);


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpgradeNiagaraScriptResults(); \
	friend struct Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics; \
public: \
	DECLARE_CLASS(UUpgradeNiagaraScriptResults, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UUpgradeNiagaraScriptResults)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_95_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUpgradeNiagaraScriptResults(UUpgradeNiagaraScriptResults&&); \
	UUpgradeNiagaraScriptResults(const UUpgradeNiagaraScriptResults&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UUpgradeNiagaraScriptResults); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpgradeNiagaraScriptResults); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUpgradeNiagaraScriptResults) \
	NIAGARAEDITOR_API virtual ~UUpgradeNiagaraScriptResults();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_92_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_95_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UUpgradeNiagaraScriptResults>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_175_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetObject);


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_175_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPythonModule(); \
	friend struct Z_Construct_UClass_UNiagaraPythonModule_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPythonModule, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPythonModule)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_175_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraPythonModule(UNiagaraPythonModule&&); \
	UNiagaraPythonModule(const UNiagaraPythonModule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPythonModule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPythonModule); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraPythonModule) \
	NO_API virtual ~UNiagaraPythonModule();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_172_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_175_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_175_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_175_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_175_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraPythonModule>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_197_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetModule); \
	DECLARE_FUNCTION(execHasModule); \
	DECLARE_FUNCTION(execGetModules); \
	DECLARE_FUNCTION(execSetProperties); \
	DECLARE_FUNCTION(execGetProperties); \
	DECLARE_FUNCTION(execGetObject);


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_197_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPythonEmitter(); \
	friend struct Z_Construct_UClass_UNiagaraPythonEmitter_Statics; \
public: \
	DECLARE_CLASS(UNiagaraPythonEmitter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraPythonEmitter)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_197_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraPythonEmitter(UNiagaraPythonEmitter&&); \
	UNiagaraPythonEmitter(const UNiagaraPythonEmitter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPythonEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPythonEmitter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraPythonEmitter) \
	NO_API virtual ~UNiagaraPythonEmitter();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_194_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_197_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_197_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_197_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_197_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraPythonEmitter>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_241_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpgradeNiagaraEmitterContext(); \
	friend struct Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics; \
public: \
	DECLARE_CLASS(UUpgradeNiagaraEmitterContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UUpgradeNiagaraEmitterContext)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_241_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUpgradeNiagaraEmitterContext(UUpgradeNiagaraEmitterContext&&); \
	UUpgradeNiagaraEmitterContext(const UUpgradeNiagaraEmitterContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UUpgradeNiagaraEmitterContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpgradeNiagaraEmitterContext); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUpgradeNiagaraEmitterContext) \
	NIAGARAEDITOR_API virtual ~UUpgradeNiagaraEmitterContext();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_238_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_241_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_241_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_241_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UUpgradeNiagaraEmitterContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h


#define FOREACH_ENUM_ENIAGARAPYTHONSCRIPTINPUTSOURCE(op) \
	op(ENiagaraPythonScriptInputSource::Input) \
	op(ENiagaraPythonScriptInputSource::Output) \
	op(ENiagaraPythonScriptInputSource::Local) \
	op(ENiagaraPythonScriptInputSource::InputOutput) \
	op(ENiagaraPythonScriptInputSource::InitialValueInput) \
	op(ENiagaraPythonScriptInputSource::None) \
	op(ENiagaraPythonScriptInputSource::Num) 

enum class ENiagaraPythonScriptInputSource : uint32;
template<> struct TIsUEnumClass<ENiagaraPythonScriptInputSource> { enum { Value = true }; };
template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraPythonScriptInputSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
