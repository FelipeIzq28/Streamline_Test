// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraEditorSettings_generated_h
#error "NiagaraEditorSettings.generated.h already included, missing '#pragma once' in NiagaraEditorSettings.h"
#endif
#define NIAGARAEDITOR_NiagaraEditorSettings_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraNewAssetDialogConfig>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraNamespaceMetadata>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_217_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraCurveTemplate>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_229_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraActionColors_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraActionColors>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_250_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraParameterPanelSectionStorage>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_270_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraViewportSharedSettings_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraViewportSharedSettings>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_347_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraEditorSettings(); \
	friend struct Z_Construct_UClass_UNiagaraEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UNiagaraEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UNiagaraEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Niagara");} \



#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_347_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraEditorSettings(UNiagaraEditorSettings&&); \
	UNiagaraEditorSettings(const UNiagaraEditorSettings&); \
public: \
	NIAGARAEDITOR_API virtual ~UNiagaraEditorSettings();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_343_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_347_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_347_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_347_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h


#define FOREACH_ENUM_ENIAGARACATEGORYEXPANDSTATE(op) \
	op(ENiagaraCategoryExpandState::Default) \
	op(ENiagaraCategoryExpandState::DefaultExpandModified) \
	op(ENiagaraCategoryExpandState::CollapseAll) \
	op(ENiagaraCategoryExpandState::ExpandAll) 

enum class ENiagaraCategoryExpandState : uint8;
template<> struct TIsUEnumClass<ENiagaraCategoryExpandState> { enum { Value = true }; };
template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraCategoryExpandState>();

#define FOREACH_ENUM_ENIAGARANAMESPACEMETADATAOPTIONS(op) \
	op(ENiagaraNamespaceMetadataOptions::HideInScript) \
	op(ENiagaraNamespaceMetadataOptions::HideInSystem) \
	op(ENiagaraNamespaceMetadataOptions::AdvancedInScript) \
	op(ENiagaraNamespaceMetadataOptions::AdvancedInSystem) \
	op(ENiagaraNamespaceMetadataOptions::PreventEditingNamespace) \
	op(ENiagaraNamespaceMetadataOptions::PreventEditingNamespaceModifier) \
	op(ENiagaraNamespaceMetadataOptions::PreventEditingName) \
	op(ENiagaraNamespaceMetadataOptions::PreventCreatingInSystemEditor) \
	op(ENiagaraNamespaceMetadataOptions::HideInDefinitions) 

enum class ENiagaraNamespaceMetadataOptions;
template<> struct TIsUEnumClass<ENiagaraNamespaceMetadataOptions> { enum { Value = true }; };
template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraNamespaceMetadataOptions>();

#define FOREACH_ENUM_ENIAGARAADDDEFAULTSTRACKMODE(op) \
	op(ENiagaraAddDefaultsTrackMode::NoSubtracks) \
	op(ENiagaraAddDefaultsTrackMode::ComponentTrackOnly) \
	op(ENiagaraAddDefaultsTrackMode::LifecycleTrack) 

enum class ENiagaraAddDefaultsTrackMode : uint8;
template<> struct TIsUEnumClass<ENiagaraAddDefaultsTrackMode> { enum { Value = true }; };
template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraAddDefaultsTrackMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
