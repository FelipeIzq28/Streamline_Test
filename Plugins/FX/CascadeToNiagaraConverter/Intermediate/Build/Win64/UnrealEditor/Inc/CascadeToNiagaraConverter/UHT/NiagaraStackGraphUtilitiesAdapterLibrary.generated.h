// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraStackGraphUtilitiesAdapterLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDistribution;
class UDistributionFloatConstant;
class UDistributionFloatConstantCurve;
class UDistributionFloatParameterBase;
class UDistributionFloatUniform;
class UDistributionFloatUniformCurve;
class UDistributionVectorConstant;
class UDistributionVectorConstantCurve;
class UDistributionVectorParameterBase;
class UDistributionVectorUniform;
class UDistributionVectorUniformCurve;
class UMaterialInterface;
class UNiagaraClipboardFunctionInput;
class UNiagaraComponentRendererProperties;
class UNiagaraDataInterface;
class UNiagaraDataInterfaceCurve;
class UNiagaraDataInterfaceSkeletalMesh;
class UNiagaraDataInterfaceVector2DCurve;
class UNiagaraDataInterfaceVector4Curve;
class UNiagaraDataInterfaceVectorCurve;
class UNiagaraEmitter;
class UNiagaraEmitterConversionContext;
class UNiagaraLightRendererProperties;
class UNiagaraMeshRendererProperties;
class UNiagaraNodeFunctionCall;
class UNiagaraRendererProperties;
class UNiagaraRibbonRendererProperties;
class UNiagaraScriptConversionContext;
class UNiagaraScriptConversionContextInput;
class UNiagaraSystem;
class UNiagaraSystemConversionContext;
class UObject;
class UParticleEmitter;
class UParticleLODLevel;
class UParticleModule;
class UParticleModuleAcceleration;
class UParticleModuleAccelerationConstant;
class UParticleModuleAccelerationDrag;
class UParticleModuleAccelerationDragScaleOverLife;
class UParticleModuleAccelerationOverLifetime;
class UParticleModuleAttractorLine;
class UParticleModuleAttractorParticle;
class UParticleModuleAttractorPoint;
class UParticleModuleCameraOffset;
class UParticleModuleCollision;
class UParticleModuleColor;
class UParticleModuleColorOverLife;
class UParticleModuleColorScaleOverLife;
class UParticleModuleKillBox;
class UParticleModuleLifetime;
class UParticleModuleLight;
class UParticleModuleLocation;
class UParticleModuleLocationBoneSocket;
class UParticleModuleLocationDirect;
class UParticleModuleLocationPrimitiveCylinder;
class UParticleModuleLocationPrimitiveSphere;
class UParticleModuleMeshMaterial;
class UParticleModuleMeshRotation;
class UParticleModuleMeshRotationRate;
class UParticleModuleMeshRotationRateMultiplyLife;
class UParticleModuleOrbit;
class UParticleModuleOrientationAxisLock;
class UParticleModuleParameterDynamic;
class UParticleModulePivotOffset;
class UParticleModuleRequired;
class UParticleModuleRotation;
class UParticleModuleRotationOverLifetime;
class UParticleModuleRotationRate;
class UParticleModuleSize;
class UParticleModuleSizeMultiplyLife;
class UParticleModuleSizeScale;
class UParticleModuleSizeScaleBySpeed;
class UParticleModuleSpawn;
class UParticleModuleSpawnPerUnit;
class UParticleModuleSubUV;
class UParticleModuleSubUVMovie;
class UParticleModuleTrailSource;
class UParticleModuleTypeDataBase;
class UParticleModuleTypeDataGpu;
class UParticleModuleTypeDataMesh;
class UParticleModuleTypeDataRibbon;
class UParticleModuleVectorFieldLocal;
class UParticleModuleVectorFieldRotationRate;
class UParticleModuleVelocity;
class UParticleModuleVelocityInheritParent;
class UParticleModuleVelocityOverLifetime;
class UParticleSystem;
class USkeletalMesh;
class UStaticMesh;
class USubUVAnimation;
class UTexture2D;
class UUserDefinedStruct;
class UVectorField;
enum class EDistributionType : uint8;
enum class EDistributionValueType : uint8;
enum class ENiagaraMessageSeverity : uint8;
enum class ENiagaraRendererSourceDataMode : uint8;
enum class ENiagaraScriptInputType : uint8;
enum class ENiagaraSimTarget : uint8;
enum class EScriptExecutionCategory : uint8;
struct FAssetData;
struct FCreateScriptContextArgs;
struct FEmitterDynamicParameterBP;
struct FInterpCurveFloat;
struct FInterpCurveTwoVectors;
struct FInterpCurveVector2D;
struct FInterpCurveVector;
struct FLightingChannels;
struct FLocationBoneSocketInfoBP;
struct FNiagaraEventHandlerAddAction;
struct FNiagaraTypeDefinition;
struct FOrbitOptionsBP;
struct FParticleBurstBlueprint;
struct FRichCurveKeyBP;
#ifdef CASCADETONIAGARACONVERTER_NiagaraStackGraphUtilitiesAdapterLibrary_generated_h
#error "NiagaraStackGraphUtilitiesAdapterLibrary.generated.h already included, missing '#pragma once' in NiagaraStackGraphUtilitiesAdapterLibrary.h"
#endif
#define CASCADETONIAGARACONVERTER_NiagaraStackGraphUtilitiesAdapterLibrary_generated_h

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_229_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEmitterDynamicParameterBP_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


template<> CASCADETONIAGARACONVERTER_API UScriptStruct* StaticStruct<struct FEmitterDynamicParameterBP>();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_288_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOrbitOptionsBP_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


template<> CASCADETONIAGARACONVERTER_API UScriptStruct* StaticStruct<struct FOrbitOptionsBP>();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_327_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParticleBurstBlueprint_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


template<> CASCADETONIAGARACONVERTER_API UScriptStruct* StaticStruct<struct FParticleBurstBlueprint>();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_358_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRichCurveKeyBP_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct(); \
	typedef FRichCurveKey Super;


template<> CASCADETONIAGARACONVERTER_API UScriptStruct* StaticStruct<struct FRichCurveKeyBP>();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_376_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLocationBoneSocketInfoBP_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct(); \
	typedef FLocationBoneSocketInfo Super;


template<> CASCADETONIAGARACONVERTER_API UScriptStruct* StaticStruct<struct FLocationBoneSocketInfoBP>();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_390_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraAddEventGeneratorOptions_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


template<> CASCADETONIAGARACONVERTER_API UScriptStruct* StaticStruct<struct FNiagaraAddEventGeneratorOptions>();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_406_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEventHandlerAddAction_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


template<> CASCADETONIAGARACONVERTER_API UScriptStruct* StaticStruct<struct FNiagaraEventHandlerAddAction>();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_462_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStackEntryID_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


template<> CASCADETONIAGARACONVERTER_API UScriptStruct* StaticStruct<struct FStackEntryID>();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_491_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStackEntryAddAction_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


template<> CASCADETONIAGARACONVERTER_API UScriptStruct* StaticStruct<struct FStackEntryAddAction>();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_532_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraScriptVersion_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


template<> CASCADETONIAGARACONVERTER_API UScriptStruct* StaticStruct<struct FNiagaraScriptVersion>();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_552_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCreateScriptContextArgs_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


template<> CASCADETONIAGARACONVERTER_API UScriptStruct* StaticStruct<struct FCreateScriptContextArgs>();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_584_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGenericConverterMessage_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


template<> CASCADETONIAGARACONVERTER_API UScriptStruct* StaticStruct<struct FGenericConverterMessage>();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_609_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFinalize); \
	DECLARE_FUNCTION(execAddEmptyEmitter); \
	DECLARE_FUNCTION(execCleanup);


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_609_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSystemConversionContext(); \
	friend struct Z_Construct_UClass_UNiagaraSystemConversionContext_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSystemConversionContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CascadeToNiagaraConverter"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraSystemConversionContext)


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_609_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraSystemConversionContext(UNiagaraSystemConversionContext&&); \
	UNiagaraSystemConversionContext(const UNiagaraSystemConversionContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraSystemConversionContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSystemConversionContext); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraSystemConversionContext) \
	NO_API virtual ~UNiagaraSystemConversionContext();


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_606_PROLOG
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_609_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_609_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_609_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_609_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CASCADETONIAGARACONVERTER_API UClass* StaticClass<class UNiagaraSystemConversionContext>();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_660_DELEGATE \
static CASCADETONIAGARACONVERTER_API void FOnPasteScript_DelegateWrapper(const FScriptDelegate& OnPasteScript, int32 ScriptIdx);


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_658_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPastedFunctionCallNode); \
	DECLARE_FUNCTION(execRemoveModuleScriptsForAssets); \
	DECLARE_FUNCTION(execSetRendererBinding); \
	DECLARE_FUNCTION(execAddEventHandler); \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetLocalSpace); \
	DECLARE_FUNCTION(execSetSimTarget); \
	DECLARE_FUNCTION(execGetEmitter); \
	DECLARE_FUNCTION(execFinalize); \
	DECLARE_FUNCTION(execLog); \
	DECLARE_FUNCTION(execGetAllRenderers); \
	DECLARE_FUNCTION(execFindRenderer); \
	DECLARE_FUNCTION(execAddRenderer); \
	DECLARE_FUNCTION(execSetParameterDirectly); \
	DECLARE_FUNCTION(execAddModuleEventScript); \
	DECLARE_FUNCTION(execAddModuleScript); \
	DECLARE_FUNCTION(execFindModuleScript); \
	DECLARE_FUNCTION(execFindOrAddModuleEventScript); \
	DECLARE_FUNCTION(execFindOrAddModuleScript); \
	DECLARE_FUNCTION(execCleanup);


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_658_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraEmitterConversionContext(); \
	friend struct Z_Construct_UClass_UNiagaraEmitterConversionContext_Statics; \
public: \
	DECLARE_CLASS(UNiagaraEmitterConversionContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CascadeToNiagaraConverter"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraEmitterConversionContext)


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_658_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraEmitterConversionContext(UNiagaraEmitterConversionContext&&); \
	UNiagaraEmitterConversionContext(const UNiagaraEmitterConversionContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraEmitterConversionContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEmitterConversionContext); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraEmitterConversionContext) \
	NO_API virtual ~UNiagaraEmitterConversionContext();


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_655_PROLOG
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_658_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_658_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_658_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_658_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CASCADETONIAGARACONVERTER_API UClass* StaticClass<class UNiagaraEmitterConversionContext>();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_821_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetModuleEnabled); \
	DECLARE_FUNCTION(execSetModuleEnabled); \
	DECLARE_FUNCTION(execLog); \
	DECLARE_FUNCTION(execSetParameter);


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_821_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraScriptConversionContext(); \
	friend struct Z_Construct_UClass_UNiagaraScriptConversionContext_Statics; \
public: \
	DECLARE_CLASS(UNiagaraScriptConversionContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CascadeToNiagaraConverter"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraScriptConversionContext)


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_821_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraScriptConversionContext(UNiagaraScriptConversionContext&&); \
	UNiagaraScriptConversionContext(const UNiagaraScriptConversionContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraScriptConversionContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScriptConversionContext); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraScriptConversionContext) \
	NO_API virtual ~UNiagaraScriptConversionContext();


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_818_PROLOG
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_821_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_821_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_821_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_821_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CASCADETONIAGARACONVERTER_API UClass* StaticClass<class UNiagaraScriptConversionContext>();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_891_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInit);


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_891_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraScriptConversionContextInput(); \
	friend struct Z_Construct_UClass_UNiagaraScriptConversionContextInput_Statics; \
public: \
	DECLARE_CLASS(UNiagaraScriptConversionContextInput, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CascadeToNiagaraConverter"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraScriptConversionContextInput)


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_891_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraScriptConversionContextInput(UNiagaraScriptConversionContextInput&&); \
	UNiagaraScriptConversionContextInput(const UNiagaraScriptConversionContextInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraScriptConversionContextInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScriptConversionContextInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraScriptConversionContextInput) \
	NO_API virtual ~UNiagaraScriptConversionContextInput();


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_888_PROLOG
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_891_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_891_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_891_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_891_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CASCADETONIAGARACONVERTER_API UClass* StaticClass<class UNiagaraScriptConversionContextInput>();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_920_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execKeysFromInterpCurveTwoVectors); \
	DECLARE_FUNCTION(execKeysFromInterpCurveVector2D); \
	DECLARE_FUNCTION(execKeysFromInterpCurveVector); \
	DECLARE_FUNCTION(execKeysFromInterpCurveFloat); \
	DECLARE_FUNCTION(execGetVectorDistributionParameterValues); \
	DECLARE_FUNCTION(execGetFloatDistributionParameterValues); \
	DECLARE_FUNCTION(execGetVectorDistributionUniformCurveValues); \
	DECLARE_FUNCTION(execGetFloatDistributionUniformCurveValues); \
	DECLARE_FUNCTION(execGetVectorDistributionConstCurveValues); \
	DECLARE_FUNCTION(execGetFloatDistributionConstCurveValues); \
	DECLARE_FUNCTION(execGetVectorDistributionUniformValues); \
	DECLARE_FUNCTION(execGetFloatDistributionUniformValues); \
	DECLARE_FUNCTION(execGetVectorDistributionConstValues); \
	DECLARE_FUNCTION(execGetFloatDistributionConstValues); \
	DECLARE_FUNCTION(execGetDistributionType); \
	DECLARE_FUNCTION(execGetDistributionLockedAxes); \
	DECLARE_FUNCTION(execGetDistributionMinMaxValues); \
	DECLARE_FUNCTION(execSetMeshRendererMaterialOverridesFromCascade); \
	DECLARE_FUNCTION(execGetParticleModuleMeshMaterialProps); \
	DECLARE_FUNCTION(execGetParticleModuleLightProps); \
	DECLARE_FUNCTION(execGetParticleModuleKillBoxProps); \
	DECLARE_FUNCTION(execGetParticleModuleLocationBoneSocketProps); \
	DECLARE_FUNCTION(execGetParticleModuleLocationProps); \
	DECLARE_FUNCTION(execGetParticleModuleLocationDirectProps); \
	DECLARE_FUNCTION(execGetParticleModuleAttractorLineProps); \
	DECLARE_FUNCTION(execGetParticleModuleAttractorPointProps); \
	DECLARE_FUNCTION(execGetParticleModuleAttractorParticleProps); \
	DECLARE_FUNCTION(execGetParticleModuleTrailSourceProps); \
	DECLARE_FUNCTION(execGetParticleModuleAccelerationOverLifetimeProps); \
	DECLARE_FUNCTION(execGetParticleModuleAccelerationProps); \
	DECLARE_FUNCTION(execGetParticleModuleAccelerationDragScaleOverLifeProps); \
	DECLARE_FUNCTION(execGetParticleModuleAccelerationDragProps); \
	DECLARE_FUNCTION(execGetParticleModuleParameterDynamicProps); \
	DECLARE_FUNCTION(execGetParticleModuleSubUVMovieProps); \
	DECLARE_FUNCTION(execGetParticleModuleCameraOffsetProps); \
	DECLARE_FUNCTION(execGetParticleModuleSubUVProps); \
	DECLARE_FUNCTION(execGetParticleModulePivotOffsetProps); \
	DECLARE_FUNCTION(execGetParticleModuleMeshRotationRateMultiplyLifeProps); \
	DECLARE_FUNCTION(execGetParticleModuleRotationOverLifetimeProps); \
	DECLARE_FUNCTION(execGetParticleModuleMeshRotationRateProps); \
	DECLARE_FUNCTION(execGetParticleModuleRotationRateProps); \
	DECLARE_FUNCTION(execGetParticleModuleRotationProps); \
	DECLARE_FUNCTION(execGetParticleModuleColorScaleOverLifeProps); \
	DECLARE_FUNCTION(execGetParticleModuleSizeMultiplyLifeProps); \
	DECLARE_FUNCTION(execGetParticleModuleOrbitProps); \
	DECLARE_FUNCTION(execGetParticleModuleVectorFieldRotationRateProps); \
	DECLARE_FUNCTION(execGetParticleModuleVectorFieldLocalProps); \
	DECLARE_FUNCTION(execGetParticleModuleSizeScaleBySpeedProps); \
	DECLARE_FUNCTION(execGetParticleModuleSizeScaleProps); \
	DECLARE_FUNCTION(execGetParticleModuleCollisionProps); \
	DECLARE_FUNCTION(execGetParticleModuleMeshRotationProps); \
	DECLARE_FUNCTION(execGetParticleModuleVelocityInheritParentProps); \
	DECLARE_FUNCTION(execGetParticleModuleOrientationAxisLockProps); \
	DECLARE_FUNCTION(execGetParticleModuleLocationPrimitiveCylinderProps); \
	DECLARE_FUNCTION(execGetParticleModuleLocationPrimitiveSphereProps); \
	DECLARE_FUNCTION(execGetParticleModuleConstantAccelerationProps); \
	DECLARE_FUNCTION(execGetParticleModuleVelocityOverLifetimeProps); \
	DECLARE_FUNCTION(execGetParticleModuleVelocityProps); \
	DECLARE_FUNCTION(execGetParticleModuleSizeProps); \
	DECLARE_FUNCTION(execGetParticleModuleLifetimeProps); \
	DECLARE_FUNCTION(execGetParticleModuleColorOverLifeProps); \
	DECLARE_FUNCTION(execGetParticleModuleColorProps); \
	DECLARE_FUNCTION(execGetParticleModuleRequiredPerEmitterProps); \
	DECLARE_FUNCTION(execGetParticleModuleRequiredPerModuleProps); \
	DECLARE_FUNCTION(execGetParticleModuleRequiredPerRendererProps); \
	DECLARE_FUNCTION(execGetParticleModuleSpawnPerUnitProps); \
	DECLARE_FUNCTION(execGetParticleModuleSpawnProps); \
	DECLARE_FUNCTION(execGetParticleModuleTypeDataRibbonProps); \
	DECLARE_FUNCTION(execGetParticleModuleTypeDataRibbonClass); \
	DECLARE_FUNCTION(execGetParticleModuleTypeDataMeshProps); \
	DECLARE_FUNCTION(execGetParticleModuleTypeDataGpuProps); \
	DECLARE_FUNCTION(execCreateSystemConversionContext); \
	DECLARE_FUNCTION(execCreateVec4CurveDI); \
	DECLARE_FUNCTION(execCreateVec3CurveDI); \
	DECLARE_FUNCTION(execCreateVec2CurveDI); \
	DECLARE_FUNCTION(execCreateFloatCurveDI); \
	DECLARE_FUNCTION(execCreateSkeletalMeshDataInterface); \
	DECLARE_FUNCTION(execCreateComponentRendererProperties); \
	DECLARE_FUNCTION(execCreateLightRendererProperties); \
	DECLARE_FUNCTION(execCreateMeshRendererProperties); \
	DECLARE_FUNCTION(execCreateRibbonRendererProperties); \
	DECLARE_FUNCTION(execCreateScriptInputBool); \
	DECLARE_FUNCTION(execCreateScriptInputDI); \
	DECLARE_FUNCTION(execCreateScriptInputDynamic); \
	DECLARE_FUNCTION(execCreateScriptInputInt); \
	DECLARE_FUNCTION(execCreateScriptInputEnum); \
	DECLARE_FUNCTION(execCreateScriptInputStruct); \
	DECLARE_FUNCTION(execCreateScriptInputVector); \
	DECLARE_FUNCTION(execCreateScriptInputVec2); \
	DECLARE_FUNCTION(execCreateScriptInputFloat); \
	DECLARE_FUNCTION(execCreateScriptInputLinkedParameter); \
	DECLARE_FUNCTION(execCreateAssetData); \
	DECLARE_FUNCTION(execCreateScriptContext); \
	DECLARE_FUNCTION(execGetCascadeEmitterRenderMode); \
	DECLARE_FUNCTION(execGetCascadeEmitterName); \
	DECLARE_FUNCTION(execGetLodLevelTypeDataModule); \
	DECLARE_FUNCTION(execGetLodLevelRequiredModule); \
	DECLARE_FUNCTION(execGetLodLevelSpawnModule); \
	DECLARE_FUNCTION(execGetLodLevelModules); \
	DECLARE_FUNCTION(execGetLodLevelIsEnabled); \
	DECLARE_FUNCTION(execGetCascadeEmitterLodLevel); \
	DECLARE_FUNCTION(execGetCascadeSystemEmitters); \
	DECLARE_FUNCTION(execGetLongPackagePath);


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_920_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFXConverterUtilitiesLibrary(); \
	friend struct Z_Construct_UClass_UFXConverterUtilitiesLibrary_Statics; \
public: \
	DECLARE_CLASS(UFXConverterUtilitiesLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CascadeToNiagaraConverter"), NO_API) \
	DECLARE_SERIALIZER(UFXConverterUtilitiesLibrary)


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_920_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFXConverterUtilitiesLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFXConverterUtilitiesLibrary(UFXConverterUtilitiesLibrary&&); \
	UFXConverterUtilitiesLibrary(const UFXConverterUtilitiesLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFXConverterUtilitiesLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFXConverterUtilitiesLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFXConverterUtilitiesLibrary) \
	NO_API virtual ~UFXConverterUtilitiesLibrary();


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_917_PROLOG
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_920_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_920_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_920_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_920_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CASCADETONIAGARACONVERTER_API UClass* StaticClass<class UFXConverterUtilitiesLibrary>();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_1584_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInit);


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_1584_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConvertCascadeToNiagaraResults(); \
	friend struct Z_Construct_UClass_UConvertCascadeToNiagaraResults_Statics; \
public: \
	DECLARE_CLASS(UConvertCascadeToNiagaraResults, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CascadeToNiagaraConverter"), NO_API) \
	DECLARE_SERIALIZER(UConvertCascadeToNiagaraResults)


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_1584_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConvertCascadeToNiagaraResults(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConvertCascadeToNiagaraResults(UConvertCascadeToNiagaraResults&&); \
	UConvertCascadeToNiagaraResults(const UConvertCascadeToNiagaraResults&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConvertCascadeToNiagaraResults); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConvertCascadeToNiagaraResults); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConvertCascadeToNiagaraResults) \
	NO_API virtual ~UConvertCascadeToNiagaraResults();


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_1581_PROLOG
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_1584_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_1584_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_1584_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_1584_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CASCADETONIAGARACONVERTER_API UClass* StaticClass<class UConvertCascadeToNiagaraResults>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h


#define FOREACH_ENUM_ESCRIPTEXECUTIONCATEGORY(op) \
	op(EScriptExecutionCategory::EmitterSpawn) \
	op(EScriptExecutionCategory::EmitterUpdate) \
	op(EScriptExecutionCategory::ParticleSpawn) \
	op(EScriptExecutionCategory::ParticleUpdate) \
	op(EScriptExecutionCategory::ParticleEvent) \
	op(EScriptExecutionCategory::NONE) 

enum class EScriptExecutionCategory : uint8;
template<> struct TIsUEnumClass<EScriptExecutionCategory> { enum { Value = true }; };
template<> CASCADETONIAGARACONVERTER_API UEnum* StaticEnum<EScriptExecutionCategory>();

#define FOREACH_ENUM_EDISTRIBUTIONTYPE(op) \
	op(EDistributionType::Const) \
	op(EDistributionType::ConstCurve) \
	op(EDistributionType::Uniform) \
	op(EDistributionType::UniformCurve) \
	op(EDistributionType::Parameter) \
	op(EDistributionType::NONE) 

enum class EDistributionType : uint8;
template<> struct TIsUEnumClass<EDistributionType> { enum { Value = true }; };
template<> CASCADETONIAGARACONVERTER_API UEnum* StaticEnum<EDistributionType>();

#define FOREACH_ENUM_EDISTRIBUTIONVALUETYPE(op) \
	op(EDistributionValueType::Float) \
	op(EDistributionValueType::Vector) \
	op(EDistributionValueType::NONE) 

enum class EDistributionValueType : uint8;
template<> struct TIsUEnumClass<EDistributionValueType> { enum { Value = true }; };
template<> CASCADETONIAGARACONVERTER_API UEnum* StaticEnum<EDistributionValueType>();

#define FOREACH_ENUM_ECASCADERENDERERTYPE(op) \
	op(ECascadeRendererType::Sprite) \
	op(ECascadeRendererType::Mesh) \
	op(ECascadeRendererType::Ribbon) \
	op(ECascadeRendererType::Beam) \
	op(ECascadeRendererType::AnimTrail) \
	op(ECascadeRendererType::NONE) 

enum class ECascadeRendererType : uint8;
template<> struct TIsUEnumClass<ECascadeRendererType> { enum { Value = true }; };
template<> CASCADETONIAGARACONVERTER_API UEnum* StaticEnum<ECascadeRendererType>();

#define FOREACH_ENUM_ENIAGARASCRIPTINPUTTYPE(op) \
	op(ENiagaraScriptInputType::Int) \
	op(ENiagaraScriptInputType::Float) \
	op(ENiagaraScriptInputType::Vec2) \
	op(ENiagaraScriptInputType::Vec3) \
	op(ENiagaraScriptInputType::Vec4) \
	op(ENiagaraScriptInputType::LinearColor) \
	op(ENiagaraScriptInputType::Quaternion) \
	op(ENiagaraScriptInputType::Struct) \
	op(ENiagaraScriptInputType::Enum) \
	op(ENiagaraScriptInputType::DataInterface) \
	op(ENiagaraScriptInputType::Bool) \
	op(ENiagaraScriptInputType::Position) \
	op(ENiagaraScriptInputType::NONE) 

enum class ENiagaraScriptInputType : uint8;
template<> struct TIsUEnumClass<ENiagaraScriptInputType> { enum { Value = true }; };
template<> CASCADETONIAGARACONVERTER_API UEnum* StaticEnum<ENiagaraScriptInputType>();

#define FOREACH_ENUM_ERIBBONCONVERSIONMODE(op) \
	op(ERibbonConversionMode::Event) \
	op(ERibbonConversionMode::DirectRead) \
	op(ERibbonConversionMode::NONE) 

enum class ERibbonConversionMode : uint8;
template<> struct TIsUEnumClass<ERibbonConversionMode> { enum { Value = true }; };
template<> CASCADETONIAGARACONVERTER_API UEnum* StaticEnum<ERibbonConversionMode>();

#define FOREACH_ENUM_ESTACKENTRYADDACTIONMODE(op) \
	op(EStackEntryAddActionMode::Module) \
	op(EStackEntryAddActionMode::SetParameter) \
	op(EStackEntryAddActionMode::NONE) 

enum class EStackEntryAddActionMode : uint8;
template<> struct TIsUEnumClass<EStackEntryAddActionMode> { enum { Value = true }; };
template<> CASCADETONIAGARACONVERTER_API UEnum* StaticEnum<EStackEntryAddActionMode>();

#define FOREACH_ENUM_ENIAGARAEVENTHANDLERADDMODE(op) \
	op(ENiagaraEventHandlerAddMode::AddEvent) \
	op(ENiagaraEventHandlerAddMode::AddEventAndEventGenerator) \
	op(ENiagaraEventHandlerAddMode::NONE) 

enum class ENiagaraEventHandlerAddMode : uint8;
template<> struct TIsUEnumClass<ENiagaraEventHandlerAddMode> { enum { Value = true }; };
template<> CASCADETONIAGARACONVERTER_API UEnum* StaticEnum<ENiagaraEventHandlerAddMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS