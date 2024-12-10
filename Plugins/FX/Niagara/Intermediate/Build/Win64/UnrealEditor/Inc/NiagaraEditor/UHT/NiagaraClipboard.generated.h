// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraClipboard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraClipboardFunctionInput;
class UNiagaraDataInterface;
class UNiagaraNodeFunctionCall;
class UNiagaraScript;
class UObject;
class UUserDefinedEnum;
class UUserDefinedStruct;
#ifdef NIAGARAEDITOR_NiagaraClipboard_generated_h
#error "NiagaraClipboard.generated.h already included, missing '#pragma once' in NiagaraClipboard.h"
#endif
#define NIAGARAEDITOR_NiagaraClipboard_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraClipboardFunctionInput(); \
	friend struct Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics; \
public: \
	DECLARE_CLASS(UNiagaraClipboardFunctionInput, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UNiagaraClipboardFunctionInput)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraClipboardFunctionInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraClipboardFunctionInput(UNiagaraClipboardFunctionInput&&); \
	UNiagaraClipboardFunctionInput(const UNiagaraClipboardFunctionInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraClipboardFunctionInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraClipboardFunctionInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraClipboardFunctionInput) \
	NIAGARAEDITOR_API virtual ~UNiagaraClipboardFunctionInput();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_33_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraClipboardFunctionInput>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraClipboardRenderer(); \
	friend struct Z_Construct_UClass_UNiagaraClipboardRenderer_Statics; \
public: \
	DECLARE_CLASS(UNiagaraClipboardRenderer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraClipboardRenderer)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_95_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraClipboardRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraClipboardRenderer(UNiagaraClipboardRenderer&&); \
	UNiagaraClipboardRenderer(const UNiagaraClipboardRenderer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraClipboardRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraClipboardRenderer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraClipboardRenderer) \
	NO_API virtual ~UNiagaraClipboardRenderer();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_92_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_95_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraClipboardRenderer>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_120_DELEGATE \
static NIAGARAEDITOR_API void FOnPastedFunctionCallNode_DelegateWrapper(const FScriptDelegate& OnPastedFunctionCallNode, UNiagaraNodeFunctionCall* PastedFunctionCall);


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraClipboardFunction(); \
	friend struct Z_Construct_UClass_UNiagaraClipboardFunction_Statics; \
public: \
	DECLARE_CLASS(UNiagaraClipboardFunction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UNiagaraClipboardFunction)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraClipboardFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraClipboardFunction(UNiagaraClipboardFunction&&); \
	UNiagaraClipboardFunction(const UNiagaraClipboardFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraClipboardFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraClipboardFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraClipboardFunction) \
	NIAGARAEDITOR_API virtual ~UNiagaraClipboardFunction();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_114_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_117_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraClipboardFunction>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_160_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraClipboardScriptVariable>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_185_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraClipboardContent(); \
	friend struct Z_Construct_UClass_UNiagaraClipboardContent_Statics; \
public: \
	DECLARE_CLASS(UNiagaraClipboardContent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UNiagaraClipboardContent)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_185_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraClipboardContent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraClipboardContent(UNiagaraClipboardContent&&); \
	UNiagaraClipboardContent(const UNiagaraClipboardContent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraClipboardContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraClipboardContent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraClipboardContent) \
	NIAGARAEDITOR_API virtual ~UNiagaraClipboardContent();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_182_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_185_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_185_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_185_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraClipboardContent>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateDynamicValueInput); \
	DECLARE_FUNCTION(execCreateExpressionValueInput); \
	DECLARE_FUNCTION(execCreateDataValueInput); \
	DECLARE_FUNCTION(execCreateLinkedValueInput); \
	DECLARE_FUNCTION(execCreateEnumLocalValueInput); \
	DECLARE_FUNCTION(execCreateStructLocalValueInput); \
	DECLARE_FUNCTION(execCreateBoolLocalValueInput); \
	DECLARE_FUNCTION(execCreateIntLocalValueInput); \
	DECLARE_FUNCTION(execCreateVec3LocalValueInput); \
	DECLARE_FUNCTION(execCreateVec2LocalValueInput); \
	DECLARE_FUNCTION(execCreateFloatLocalValueInput); \
	DECLARE_FUNCTION(execGetTypeName); \
	DECLARE_FUNCTION(execTrySetLocalValueAsInt); \
	DECLARE_FUNCTION(execTryGetLocalValueAsInt); \
	DECLARE_FUNCTION(execTryGetLocalValueAsFloat); \
	DECLARE_FUNCTION(execTryGetInputByName);


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_230_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraClipboardEditorScriptingUtilities(); \
	friend struct Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities_Statics; \
public: \
	DECLARE_CLASS(UNiagaraClipboardEditorScriptingUtilities, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UNiagaraClipboardEditorScriptingUtilities)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_230_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraClipboardEditorScriptingUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraClipboardEditorScriptingUtilities(UNiagaraClipboardEditorScriptingUtilities&&); \
	UNiagaraClipboardEditorScriptingUtilities(const UNiagaraClipboardEditorScriptingUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraClipboardEditorScriptingUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraClipboardEditorScriptingUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraClipboardEditorScriptingUtilities) \
	NIAGARAEDITOR_API virtual ~UNiagaraClipboardEditorScriptingUtilities();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_227_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_230_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_230_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_230_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraClipboardEditorScriptingUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h


#define FOREACH_ENUM_ENIAGARACLIPBOARDFUNCTIONINPUTVALUEMODE(op) \
	op(ENiagaraClipboardFunctionInputValueMode::Local) \
	op(ENiagaraClipboardFunctionInputValueMode::Linked) \
	op(ENiagaraClipboardFunctionInputValueMode::Data) \
	op(ENiagaraClipboardFunctionInputValueMode::ObjectAsset) \
	op(ENiagaraClipboardFunctionInputValueMode::Expression) \
	op(ENiagaraClipboardFunctionInputValueMode::Dynamic) \
	op(ENiagaraClipboardFunctionInputValueMode::ResetToDefault) 

enum class ENiagaraClipboardFunctionInputValueMode;
template<> struct TIsUEnumClass<ENiagaraClipboardFunctionInputValueMode> { enum { Value = true }; };
template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraClipboardFunctionInputValueMode>();

#define FOREACH_ENUM_ENIAGARACLIPBOARDFUNCTIONSCRIPTMODE(op) \
	op(ENiagaraClipboardFunctionScriptMode::ScriptAsset) \
	op(ENiagaraClipboardFunctionScriptMode::Assignment) 

enum class ENiagaraClipboardFunctionScriptMode;
template<> struct TIsUEnumClass<ENiagaraClipboardFunctionScriptMode> { enum { Value = true }; };
template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraClipboardFunctionScriptMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
