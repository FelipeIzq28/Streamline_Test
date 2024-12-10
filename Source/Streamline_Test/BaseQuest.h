// Fill out your copyright notice in the Description page of Project Settings.
/**
 * @file BaseQuest.h
 * @brief Base class for quest logic.
 * @details Provides core functionality for defining and tracking quest progress.
 *          It includes properties and methods for quest initialization, reporting progress, and checking completion status.
 */
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

    UBaseQuest();

    /** Name of the ability required to complete the quest. */
    UPROPERTY(BlueprintReadOnly, Category = "Mission")
    FString AbilityName;

    /** Initializes the quest with a name and target count. */
    UFUNCTION(BlueprintCallable, Category = "Mission")
    virtual void InitializeMission(const FString& InAbilityName, int32 InTargetCount);

    /** Reports the use of an ability to update quest progress. */
    UFUNCTION(BlueprintCallable, Category = "Mission")
    virtual void ReportAbilityUse(const FString& UsedAbilityName);

    /** Checks if the quest is completed. */
    UFUNCTION(BlueprintCallable, Category = "Mission")
    bool IsMissionCompleted() const;

    /** Gets the current progress of the quest. */
    UFUNCTION(BlueprintCallable, Category = "Mission")
    int32 GetCurrentProgress() const;

    /** Gets the target count for the quest. */
    UFUNCTION(BlueprintCallable, Category = "Mission")
    int32 GetTargetCount() const;

    /** Gets the name of the quest. */
    UFUNCTION(BlueprintCallable, Category = "Mission")
    FString GetQuestName() const;

    /** Delegate for broadcasting when the quest is completed. */
    UPROPERTY(BlueprintAssignable, Category = "Mission")
    FOnMissionCompleted OnMissionCompleted;

protected:

    /** Current progress towards completing the quest. */
    UPROPERTY(BlueprintReadOnly, Category = "Mission")
    int32 CurrentProgress;

    /** Total target required to complete the quest. */
    UPROPERTY(BlueprintReadOnly, Category = "Mission")
    int32 TargetCount;

    /** Whether the quest is completed. */
    UPROPERTY(BlueprintReadOnly, Category = "Mission")
    bool bIsCompleted;
};
