// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraMessages.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraMessages_generated_h
#error "NiagaraMessages.generated.h already included, missing '#pragma once' in NiagaraMessages.h"
#endif
#define NIAGARAEDITOR_NiagaraMessages_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_242_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraStackMessage>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_267_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraStackNoteData_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraStackNoteData>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_311_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraMessageData(); \
	friend struct Z_Construct_UClass_UNiagaraMessageData_Statics; \
public: \
	DECLARE_CLASS(UNiagaraMessageData, UNiagaraMessageDataBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UNiagaraMessageData)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_311_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraMessageData(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraMessageData(UNiagaraMessageData&&); \
	UNiagaraMessageData(const UNiagaraMessageData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraMessageData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraMessageData); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNiagaraMessageData) \
	NIAGARAEDITOR_API virtual ~UNiagaraMessageData();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_308_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_311_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_311_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_311_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraMessageData>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_320_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraMessageDataText(); \
	friend struct Z_Construct_UClass_UNiagaraMessageDataText_Statics; \
public: \
	DECLARE_CLASS(UNiagaraMessageDataText, UNiagaraMessageData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UNiagaraMessageDataText)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_320_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraMessageDataText(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraMessageDataText(UNiagaraMessageDataText&&); \
	UNiagaraMessageDataText(const UNiagaraMessageDataText&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraMessageDataText); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraMessageDataText); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraMessageDataText) \
	NIAGARAEDITOR_API virtual ~UNiagaraMessageDataText();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_317_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_320_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_320_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_320_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraMessageDataText>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h


#define FOREACH_ENUM_ENIAGARAMESSAGESEVERITY(op) \
	op(ENiagaraMessageSeverity::CriticalError) \
	op(ENiagaraMessageSeverity::Error) \
	op(ENiagaraMessageSeverity::PerformanceWarning) \
	op(ENiagaraMessageSeverity::Warning) \
	op(ENiagaraMessageSeverity::Info) 

enum class ENiagaraMessageSeverity : uint8;
template<> struct TIsUEnumClass<ENiagaraMessageSeverity> { enum { Value = true }; };
template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraMessageSeverity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
