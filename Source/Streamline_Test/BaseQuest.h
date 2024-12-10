// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseQuest.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMissionCompleted);
UCLASS()
class STREAMLINE_TEST_API UBaseQuest : public UObject
{
	GENERATED_BODY()
public:
    // Constructor
    UBaseQuest();

    UPROPERTY(BlueprintReadOnly, Category = "Mission")
    FString AbilityName;

    // Inicializa la misión
    UFUNCTION(BlueprintCallable, Category = "Mission")
    virtual void InitializeMission(const FString& InAbilityName, int32 InTargetCount);

    // Reporta que la habilidad asociada ha sido usada
    UFUNCTION(BlueprintCallable, Category = "Mission")
    virtual void ReportAbilityUse(const FString& UsedAbilityName);

    // Verifica si la misión está completa
    UFUNCTION(BlueprintCallable, Category = "Mission")
    bool IsMissionCompleted() const;

    // Devuelve el progreso actual
    UFUNCTION(BlueprintCallable, Category = "Mission")
    int32 GetCurrentProgress() const;

    // Devuelve el objetivo total
    UFUNCTION(BlueprintCallable, Category = "Mission")
    int32 GetTargetCount() const;

    UFUNCTION(BlueprintCallable, Category = "Mission")
    FString GetQuestName() const;

    // Delegado que notifica cuando la misión está completa
    UPROPERTY(BlueprintAssignable, Category = "Mission")
    FOnMissionCompleted OnMissionCompleted;

protected:
    // Nombre de la habilidad asociada


    // Progreso actual de la misión
    UPROPERTY(BlueprintReadOnly, Category = "Mission")
    int32 CurrentProgress;

    // Objetivo para completar la misión
    UPROPERTY(BlueprintReadOnly, Category = "Mission")
    int32 TargetCount;

    // Estado de la misión
    UPROPERTY(BlueprintReadOnly, Category = "Mission")
    bool bIsCompleted;
};
