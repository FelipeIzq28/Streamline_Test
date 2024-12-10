// Fill out your copyright notice in the Description page of Project Settings.

/**
 * @file Quest_Manager.cpp
 * @brief Implementation file for the `UQuest_Manager` component.
 * @details This file defines the functionality for managing quests, including initializing, progressing, and completing quests.
 *          It interacts with `UBaseQuest` objects to handle individual quest logic and transitions between quests in a sequence.
 *          Additionally, it provides utility functions to report ability usage and retrieve quest details.
 * @author
 * Felipe Izquierdo
 * @date 09/12/2024
 */

#include "Quest_Manager.h"

// Sets default values for this component's properties
UQuest_Manager::UQuest_Manager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	PrimaryComponentTick.bCanEverTick = false;
	CurrentQuestIndex = -1;
}

// Called when the game starts
void UQuest_Manager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	InitializeQuests();
	
}


// Called every frame
void UQuest_Manager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
////////////////////////////////////////////////////////////////////////////
// InitializeQuests

/**
 * @brief Initializes the list of quests for the quest manager.
 * @details Creates a sequence of quests with predefined configurations. Each quest is dynamically created and added to the quest list.
 *          The first quest is started automatically after initialization.
 */
void UQuest_Manager::InitializeQuests()
{
	// Define the sequence of quests with their names and target values
	TArray<TPair<FString, int32>> MissionConfigs = {
	   TPair<FString, int32>(TEXT("Gravity Gun"), 7),
	   TPair<FString, int32>(TEXT("Dash"), 5),
	   TPair<FString, int32>(TEXT("Smoke Grenade"), 3),
	   TPair<FString, int32>(TEXT("Molotov Grenade"), 3),
	   TPair<FString, int32>(TEXT("Light Creation"), 15)
	};

	// Create and configure each quest
	for (const auto& Config : MissionConfigs)
	{
		UBaseQuest* Quest = NewObject<UBaseQuest>(this);
		if (Quest)
		{
			Quest->InitializeMission(Config.Key, Config.Value);
			Quest->OnMissionCompleted.AddDynamic(this, &UQuest_Manager::OnQuestCompleted);
			Quests.Add(Quest);
			UE_LOG(LogTemp, Log, TEXT("Added Quest: %s with Target: %d"), *Config.Key, Config.Value);
		}
	}

	if (Quests.Num() > 0)
	{
		StartNextQuest();
	}
}
/**
 * @brief Advances to the next quest in the sequence.
 * @details Updates the `CurrentQuest` to the next quest in the list. If all quests are completed, the `OnAllQuestsCompleted` delegate is broadcast.
 */
void UQuest_Manager::StartNextQuest()
{
	CurrentQuestIndex++;
	UE_LOG(LogTemp, Log, TEXT("Starting Next Quest..."));
	if (CurrentQuestIndex < Quests.Num())
	{
		CurrentQuest = Quests[CurrentQuestIndex];
		UE_LOG(LogTemp, Log, TEXT("Started Quest: %s"), *CurrentQuest->AbilityName);
	}
	else
	{
		CurrentQuest = nullptr;
		OnAllQuestsCompleted.Broadcast(); 
		UE_LOG(LogTemp, Log, TEXT("All quests completed!"));
	}
}
/**
 * @brief Reports the usage of an ability to the current quest.
 * @param AbilityName The name of the ability used.
 * @details If the ability matches the current quest's requirements, progress is updated. If the quest is completed, the manager transitions to the next quest.
 */
void UQuest_Manager::ReportAbilityUse(const FString& AbilityName)
{
	if (CurrentQuest)
	{
		CurrentQuest->ReportAbilityUse(AbilityName);
		UE_LOG(LogTemp, Log, TEXT("Reported ability use: %s to CurrentQuest."), *AbilityName);
	}
}
/**
 * @brief Handles the completion of the current quest.
 * @details Logs the completion of the current quest and transitions to the next quest in the sequence.
 */
void UQuest_Manager::OnQuestCompleted()
{
	UE_LOG(LogTemp, Log, TEXT("Quest Completed: %s"), *CurrentQuest->AbilityName);
	StartNextQuest();
}
////////////////////////////////////////////////////////////////////////////
// Utility Function
/**
 * @brief Retrieves the current active quest.
 * @return A pointer to the `UBaseQuest` object representing the current quest, or nullptr if no quest is active.
 */
UBaseQuest* UQuest_Manager::GetCurrentQuest() const
{
	return CurrentQuest;
}
/**
 * @brief Retrieves the name of the current quest.
 * @return The name of the current quest, or "No Active Quest" if no quest is active.
 */
FString UQuest_Manager::GetCurrentQuestName() const
{
	if (CurrentQuest)
	{
		return CurrentQuest->GetQuestName();
	}
	return TEXT("No Active Quest");
}
/**
 * @brief Retrieves the current progress of the active quest.
 * @return An integer representing the current progress, or 0 if no quest is active.
 */
int32 UQuest_Manager::GetCurrentQuestProgress() const
{
	if (CurrentQuest)
	{
		return CurrentQuest->GetCurrentProgress();
	}
	return 0;
}
/**
 * @brief Retrieves the target count of the active quest.
 * @return An integer representing the target count, or 0 if no quest is active.
 */
int32 UQuest_Manager::GetCurrentQuestTarget() const
{
	if (CurrentQuest)
	{
		return CurrentQuest->GetTargetCount();
	}
	return 0;
}
/**
 * @brief Retrieves a description of the active quest.
 * @return A formatted string containing the quest name and progress, or "No Active Quest" if no quest is active.
 */
FString UQuest_Manager::GetCurrentQuestDescription() const
{
	if (CurrentQuest)
	{
		return FString::Printf(TEXT("%s: %d/%d"),
			*CurrentQuest->GetQuestName(),
			CurrentQuest->GetCurrentProgress(),
			CurrentQuest->GetTargetCount());
	}
	return TEXT("No Active Quest");
}


