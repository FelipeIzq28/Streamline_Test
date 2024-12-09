// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseQuest.h"

UBaseQuest::UBaseQuest()
{
	CurrentProgress = 0;
	TargetCount = 0;
	bIsCompleted = false;
}

void UBaseQuest::InitializeMission(const FString& InAbilityName, int32 InTargetCount)
{
	AbilityName = InAbilityName;
	TargetCount = InTargetCount;
	CurrentProgress = 0;
	bIsCompleted = false;
}

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

bool UBaseQuest::IsMissionCompleted() const
{
	return bIsCompleted;
}

int32 UBaseQuest::GetCurrentProgress() const
{
	return CurrentProgress;
}

int32 UBaseQuest::GetTargetCount() const
{
	return TargetCount;
}
