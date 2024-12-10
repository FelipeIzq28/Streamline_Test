// Fill out your copyright notice in the Description page of Project Settings.

/**
 * @file BaseQuest.cpp
 * @brief Implementation file for the base quest class, `UBaseQuest`.
 * @details This file defines the core logic for managing quest progress and completion.
 *          The class tracks the required ability, progress, and completion status, and it broadcasts an event when the quest is completed.
 */
#include "BaseQuest.h"

UBaseQuest::UBaseQuest()
{
	CurrentProgress = 0;
	TargetCount = 0;
	bIsCompleted = false;
}

////////////////////////////////////////////////////////////////////////////
// InitializeMission

/**
 * @brief Initializes the quest with an ability name and target count.
 * @param InAbilityName The name of the ability required to complete the quest.
 * @param InTargetCount The total number of times the ability must be used to complete the quest.
 * @details Resets the quest progress and marks it as incomplete.
 */
void UBaseQuest::InitializeMission(const FString& InAbilityName, int32 InTargetCount)
{
	AbilityName = InAbilityName;
	TargetCount = InTargetCount;
	CurrentProgress = 0;
	bIsCompleted = false;
}
/**
 * @brief Reports the usage of an ability to update the quest's progress.
 * @param UsedAbilityName The name of the ability that was used.
 * @details If the ability matches the quest's requirement and the quest is not already completed, progress is updated.
 *          Once the progress reaches the target count, the quest is marked as completed, and the `OnMissionCompleted` delegate is broadcast.
 * @note If the quest is already completed or the ability does not match, the function logs a warning and exits without updating progress.
 */
void UBaseQuest::ReportAbilityUse(const FString& UsedAbilityName)
{
	if (bIsCompleted || AbilityName != UsedAbilityName)
	{
		UE_LOG(LogTemp, Warning, TEXT("Mission already completed. No further progress recorded."));
		return;
	}

	CurrentProgress++;
	UE_LOG(LogTemp, Log, TEXT("Ability %s used. Progress: %d/%d"), *UsedAbilityName, CurrentProgress, TargetCount);
	if (CurrentProgress >= TargetCount)
	{
		bIsCompleted = true;
		OnMissionCompleted.Broadcast(); // Notifica que la misión se completó
		UE_LOG(LogTemp, Log, TEXT("Mission completed: %s"), *AbilityName);
	}
}
/**
 * @brief Checks if the quest is completed.
 * @return True if the quest is completed, false otherwise.
 */
bool UBaseQuest::IsMissionCompleted() const
{
	return bIsCompleted;
}
/**
 * @brief Retrieves the current progress of the quest.
 * @return The number of times the required ability has been used.
 */
int32 UBaseQuest::GetCurrentProgress() const
{
	return CurrentProgress;
}
/**
 * @brief Retrieves the total target count for the quest.
 * @return The total number of times the required ability must be used to complete the quest.
 */
int32 UBaseQuest::GetTargetCount() const
{
	return TargetCount;
}
/**
 * @brief Retrieves the name of the quest.
 * @return A string representing the name of the ability associated with the quest.
 */
FString UBaseQuest::GetQuestName() const
{
	return AbilityName;
}
