// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraEmitterEditorData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraEmitterEditorData_generated_h
#error "NiagaraEmitterEditorData.generated.h already included, missing '#pragma once' in NiagaraEmitterEditorData.h"
#endif
#define NIAGARAEDITOR_NiagaraEmitterEditorData_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraEmitterEditorData, NIAGARAEDITOR_API)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraEmitterEditorData(); \
	friend struct Z_Construct_UClass_UNiagaraEmitterEditorData_Statics; \
public: \
	DECLARE_CLASS(UNiagaraEmitterEditorData, UNiagaraEditorDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UNiagaraEmitterEditorData) \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_18_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraEmitterEditorData(UNiagaraEmitterEditorData&&); \
	UNiagaraEmitterEditorData(const UNiagaraEmitterEditorData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraEmitterEditorData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEmitterEditorData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEmitterEditorData) \
	NIAGARAEDITOR_API virtual ~UNiagaraEmitterEditorData();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_15_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraEmitterEditorData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
