// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once


/**

Data Channel Read Interface.
Enabled Niagara Systems to read data from a NiagaraDataChannel that has been previously generated by another System or Game code/BP.

Read DIs will grab a buffer from the handler for their bound Data Channel.
This could be a global buffer or some localized buffer for their region of the map
Or any other buffer sub division scheme that the handler chooses.
The main point being that this buffer can change from frame to frame and instance to instance.
The handler is free to store and distribute it's Channel Data as it pleases.

Accessor functions on the Data Channel Read and Write DIs can have any number of parameters, allowing a single function call to access arbitrary data from the Channel.
This avoids cumbersome work in the graph to access data but requires special handling inside the DI.

TODO: Local support - We can read directly from a writer DI in the same system to avoid having to publish that data in some cases. 
There is working code for this already but the concept/API needs more fleshing out before we include it.

*/

#include "Containers/DynamicRHIResourceArray.h"

#include "NiagaraDataChannelPublic.h"
#include "NiagaraDataInterfaceDataChannelCommon.h"
#include "NiagaraDataInterfaceRW.h"
#include "NiagaraDataSetAccessor.h"
#include "NiagaraDataInterfaceDataChannelRead.generated.h"

class UNiagaraDataInterfaceDataChannelWrite;
struct FNDIDataChannelWriteInstanceData;
class UNiagaraDataChannelHandler;
class FNiagaraDataBuffer;

struct FNiagaraDataChannelDataProxy;

/** Mode controlling the behavior of the Spawn function for Niagara's Data Channel Read Data Interface.*/
UENUM()
enum class ENDIDataChannelSpawnMode
{
	/** This mode will override any previous spawn counts set or accumulated this tick. */
	Override,

	/** This mode will accumulate spawn counts with other spawns. */
	Accumulate,

	/** Does nothing. This mode is useful for dynamically skipping spawning based on script logic. */
	None,

	Max UMETA(Hidden),
};

UCLASS(Experimental, EditInlineNew, Category = "Data Channels", CollapseCategories, meta = (DisplayName = "Data Channel Reader"), MinimalAPI)
class UNiagaraDataInterfaceDataChannelRead : public UNiagaraDataInterfaceRWBase
{
	GENERATED_UCLASS_BODY()
protected:

public:

	//TODO: In future we may allow reads and writes that stay local to a single system.	
// 	/** The scope at which to read data. When reading locally we'll read directly from a Data Channel Write Interface in this or another emitter. When reading from World scope, we'll read from a named Data Channel. */
// 	UPROPERTY(EditAnywhere, Category = "Data Channel")
// 	ENiagaraDataChannelScope Scope;
// 
// 	/** Name of the source */
// 	UPROPERTY(EditAnywhere, Category="Data Channel", meta=(EditCondition = "Scope == ENiagaraDataChannelScope::Local"))
// 	FName Source;

	/** The data channel to access and read from. */
	UPROPERTY(EditAnywhere, Category="Data Channel")
	TObjectPtr<UNiagaraDataChannelAsset> Channel;
	
	/** True if this reader will read the current frame's data. If false, we read the previous frame.
	* Reading the current frame introduces a tick order dependency but allows for zero latency reads. Any data channel elements that are generated after this reader is used are missed.
	* Reading the previous frame's data introduces a frame of latency but ensures we never miss any data as we have access to the whole frame.
	*/
	UPROPERTY(EditAnywhere, Category = "Data Channel", AdvancedDisplay)
	bool bReadCurrentFrame = false;

	/**
	Whether this DI should request updated source data from the Data Channel each tick.
	Some Data Channels have multiple separate source data elements for things such as spatial subdivision. 
	Each DI will request the correct one for it's owning system instance from the data channel. 
	Depending on the data channel this could be an expensive search so we should avoid doing this every tick if possible.
	*/
	UPROPERTY(EditAnywhere, Category = "Data Channel", AdvancedDisplay)
	bool bUpdateSourceDataEveryTick = true;


	/**
	When true, Emitter.Spawn group for any spawned particles will be overridden to the index of the data channel element that generated that spawn.
	Doing this will submit all NDC spawns individually and will be less performant.
	However it will allow particles to access the NDC data that generated then via the SpawnGroup value.
	It will also mean that Exec Index will be correct on a per NDC Entry level. 
	Without this settings ExecIndex will be 0...TotalSpawnCount-1. With this it will be 0...SpawnCount for each NDC item individually.
	Unless absolutely needed this is discouraged as it comes at significant performance cost when spawning and GPU emitters can currently only handle 8 individual spawns per frame.
	Calling GetNDCSpawnInfo() in the particle spawn script to get the spawning NDC Index is prefered.
	*/
	UPROPERTY(EditAnywhere, Category = "Spawning", AdvancedDisplay)
	bool bOverrideSpawnGroupToDataChannelIndex = false;

	//UObject Interface
	NIAGARA_API virtual void PostInitProperties() override;
	NIAGARA_API virtual void BeginDestroy() override;
	NIAGARA_API virtual void Serialize(FArchive& Ar) override;
	//UObject Interface End

	//UNiagaraDataInterface Interface
	NIAGARA_API virtual void GetVMExternalFunction(const FVMExternalFunctionBindingInfo& BindingInfo, void* InstanceData, FVMExternalFunction &OutFunc) override;
	virtual bool CanExecuteOnTarget(ENiagaraSimTarget Target) const override { return true; }
#if WITH_EDITORONLY_DATA
	NIAGARA_API virtual bool AppendCompileHash(FNiagaraCompileHashVisitor* InVisitor) const override;
	NIAGARA_API virtual void GetCommonHLSL(FString& OutHLSL)override;
	NIAGARA_API virtual bool GetFunctionHLSL(FNiagaraDataInterfaceHlslGenerationContext& HlslGenContext, FString& OutHLSL) override;
	NIAGARA_API virtual void GetParameterDefinitionHLSL(FNiagaraDataInterfaceHlslGenerationContext& HlslGenContext, FString& OutHLSL) override;

	virtual bool UpgradeFunctionCall(FNiagaraFunctionSignature& FunctionSignature)override;

	NIAGARA_API virtual void PostCompile()override;
#endif	

#if WITH_EDITOR	
	NIAGARA_API virtual void GetFeedback(UNiagaraSystem* InAsset, UNiagaraComponent* InComponent, TArray<FNiagaraDataInterfaceError>& OutErrors, TArray<FNiagaraDataInterfaceFeedback>& OutWarnings, TArray<FNiagaraDataInterfaceFeedback>& OutInfo) override;
	NIAGARA_API virtual void ValidateFunction(const FNiagaraFunctionSignature& Function, TArray<FText>& OutValidationErrors) override;
#endif

	NIAGARA_API virtual bool Equals(const UNiagaraDataInterface* Other) const override;

	NIAGARA_API virtual void BuildShaderParameters(FNiagaraShaderParametersBuilder& ShaderParametersBuilder) const override;
	NIAGARA_API virtual void SetShaderParameters(const FNiagaraDataInterfaceSetShaderParametersContext& Context) const override;

	NIAGARA_API virtual bool InitPerInstanceData(void* PerInstanceData, FNiagaraSystemInstance* SystemInstance) override;
	NIAGARA_API virtual void DestroyPerInstanceData(void* PerInstanceData, FNiagaraSystemInstance* SystemInstance) override;
	NIAGARA_API virtual int32 PerInstanceDataSize() const override;
	virtual bool HasPreSimulateTick() const override { return true; }
	virtual bool HasPostSimulateTick() const override { return true; }
	virtual bool HasPostStageTick(ENiagaraScriptUsage Usage) const override { return Usage == ENiagaraScriptUsage::EmitterUpdateScript || Usage == ENiagaraScriptUsage::SystemUpdateScript; }
	NIAGARA_API virtual bool PerInstanceTick(void* PerInstanceData, FNiagaraSystemInstance* SystemInstance, float DeltaSeconds) override;
	NIAGARA_API virtual bool PerInstanceTickPostSimulate(void* PerInstanceData, FNiagaraSystemInstance* SystemInstance, float DeltaSeconds) override;
	NIAGARA_API virtual void PostStageTick(FNDICpuPostStageContext& Context)override;
	NIAGARA_API virtual void ProvidePerInstanceDataForRenderThread(void* DataForRenderThread, void* PerInstanceData, const FNiagaraSystemInstanceID& SystemInstance) override;
	NIAGARA_API virtual void GetEmitterDependencies(UNiagaraSystem* Asset, TArray<FVersionedNiagaraEmitter>& Dependencies) const;

	virtual bool HasTickGroupPrereqs() const override;
	virtual ETickingGroup CalculateTickGroup(const void* PerInstanceData) const override;

	//We cannot overlap frames as we must correctly sync up with the data channel manager on Begin/End frame etc.
	virtual bool PostSimulateCanOverlapFrames() const { return false; }
	//UNiagaraDataInterface Interface

	//Functions usable anywhere.
	NIAGARA_API void Num(FVectorVMExternalFunctionContext& Context);
	NIAGARA_API void Read(FVectorVMExternalFunctionContext& Context, int32 FuncIdx);
	NIAGARA_API void Consume(FVectorVMExternalFunctionContext& Context, int32 FuncIdx);
	
	NIAGARA_API void GetNDCSpawnData(FVectorVMExternalFunctionContext& Context);

	//Emitter only functions.
	NIAGARA_API void SpawnConditional(FVectorVMExternalFunctionContext& Context, int32 FuncIndex);

	FNDIDataChannelCompiledData& GetCompiledData() { return CompiledData; }

protected:
#if WITH_EDITORONLY_DATA
	NIAGARA_API virtual void GetFunctionsInternal(TArray<FNiagaraFunctionSignature>& OutFunctions) const override;
#endif
	NIAGARA_API virtual bool CopyToInternal(UNiagaraDataInterface* Destination) const override;
	NIAGARA_API UNiagaraDataInterfaceDataChannelWrite* FindSourceDI()const;

 	UPROPERTY()
 	FNDIDataChannelCompiledData CompiledData;
};

struct FNDIDataChannelRead_EmitterSpawnData
{
	TArray<int32> NDCSpawnData;
	int32 NDCSpawnDataBuckets[16];

	void Reset()
	{
		NDCSpawnData.Reset();
		FMemory::Memzero(NDCSpawnDataBuckets, sizeof(int32) * 16);
	}
};

struct FNDIDataChannelRead_EmitterInstanceData
{
	//Spawn data buffers needed for accessing the correct NDCIndex and spawn data from a particle during CPU or GPU execution.
	//Rebuilt every frame and only valid inside the spawn execution generated by this DI.
	FNDIDataChannelRead_EmitterSpawnData NDCSpawnData;

	//Spawn Counts for each entry in the NDC.
	TArray<int32> NDCSpawnCounts;

	void Reset()
	{
		NDCSpawnCounts.Reset();
		NDCSpawnData.Reset();
	}
};

struct FNDIDataChannelReadInstanceData
{
	//TODO: Local reads.
// 	/** The local DataChannel writer we're bounds to, if any. */
// 	TWeakObjectPtr<UNiagaraDataInterfaceDataChannelWrite> SourceDI;
// 
// 	/** The instance data of the local DataChannel writer we're bound to, if any. */
// 	FNDIDataChannelWriteInstanceData* SourceInstData = nullptr;
	
	/** Pointer to the world DataChannel Channel we're reading from, if any. */
	TWeakObjectPtr<UNiagaraDataChannelHandler> DataChannel;

	/** Shared pointer to the actual data channel data pulled from the data channel. */
	FNiagaraDataChannelDataPtr DataChannelData = nullptr;
	
	/** Cached hash to check if the layout of our source data has changed. */
	uint64 ChachedDataSetLayoutHash = INDEX_NONE;

	/** When true we should update our function binding info on the RT next tick. */
	mutable bool bUpdateFunctionBindingRTData = false;

	/** Binding info from the Data Channel to each of our function's parameters. */
	//FNDIDataChannelBindingInfo BindingInfo;

	TArray<FNDIDataChannel_FuncToDataSetBindingPtr, TInlineAllocator<8>> FuncToDataSetBindingInfo;

	/** Keys for each of the above function infos. */
	//TArray<uint32> FuncToDataSetLayoutKeys;
	
	/** Index we use to consume DataChannel data.
		Reset at each tick.
		All consumers of the DI use the same index.
		TODO: Allow ConsumeUnique that has a unique counter per call.
	*/
	std::atomic<int32> ConsumeIndex = 0;

	/** 
	Instance data for each emitter using this DI.
	*/
	TMap<FNiagaraEmitterInstance*,FNDIDataChannelRead_EmitterInstanceData> EmitterInstanceData;

	uint32 CachedLayoutHash = INDEX_NONE;
	FNiagaraSystemInstance* Owner = nullptr;

	virtual ~FNDIDataChannelReadInstanceData();
	FNiagaraDataBuffer* GetReadBufferCPU(bool bPrevFrame);
	bool Init(UNiagaraDataInterfaceDataChannelRead* Interface, FNiagaraSystemInstance* Instance);
	bool Tick(UNiagaraDataInterfaceDataChannelRead* Interface, FNiagaraSystemInstance* Instance, bool bIsInit = false);	
	bool PostTick(UNiagaraDataInterfaceDataChannelRead* Interface, FNiagaraSystemInstance* Instance);
};

struct FNiagaraDataInterfaceProxy_DataChannelRead : public FNiagaraDataInterfaceProxyRW
{
	virtual void ConsumePerInstanceDataFromGameThread(void* PerInstanceData, const FNiagaraSystemInstanceID& Instance) override;
	virtual int32 PerInstanceDataPassedToRenderThreadSize() const override;
	virtual void GetDispatchArgs(const FNDIGpuComputeDispatchArgsGenContext& Context) override;

	virtual void PreStage(const FNDIGpuComputePreStageContext& Context)override;
	virtual void PostSimulate(const FNDIGpuComputePostSimulateContext& Context)override;

	/** Persistent per instance data on the RT. Constructed when consuming data passed from GT->RT. */
	struct FInstanceData
	{
		//GPU Dataset from the channel handler. We'll grab the current buffer from this on the RT.
		//This must be grabbed fresh from the handler each frame as it's lifetime cannot be ensured.
		FNiagaraDataChannelDataProxy* ChannelDataRTProxy = nullptr;

		bool bReadPrevFrame = false;

		/**
		A buffer containing layout information needed to access parameters for each script using this DI.
		*/
		FReadBuffer ParameterLayoutBuffer;

		TResourceArray<uint32> ParameterLayoutData;

		/**
		Offsets into the parameter table are embedded in the gpu script hlsl.
		At hlsl gen time we can only know which parameter are accessed by each script individually so each script must have it's own parameter binding table.
		*/
		TMap<FNiagaraCompileHash, uint32> GPUScriptParameterTableOffsets;

		/** Buffer containing packed data for all emitters NDC spawning data for use on the GPU. */
		TArray<int32> NDCSpawnData;

		FRDGBufferRef NDCSpawnDataBuffer;
	};

	TMap<FNiagaraSystemInstanceID, FInstanceData> SystemInstancesToProxyData_RT;
};
