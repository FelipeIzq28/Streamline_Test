// Fill out your copyright notice in the Description page of Project Settings.


#include "Quest_Manager.h"

// Sets default values for this component's properties
UQuest_Manager::UQuest_Manager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	PrimaryComponentTick.bCanEverTick = false; // No necesitamos Tick por defecto
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
void UQuest_Manager::InitializeQuests()
{
	UBaseQuest* DashQuest = NewObject<UBaseQuest>(this);
	if (DashQuest)
	{
		DashQuest->InitializeMission(TEXT("Dash"), 3);
		DashQuest->OnMissionCompleted.AddDynamic(this, &UQuest_Manager::OnQuestCompleted);
		Quests.Add(DashQuest);
		UE_LOG(LogTemp, Log, TEXT("Added Dash Quest."));
	}

	if (Quests.Num() > 0)
	{
		StartNextQuest();
	}
}

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
		OnAllQuestsCompleted.Broadcast(); // Notificar que todas las misiones están completas
		UE_LOG(LogTemp, Log, TEXT("All quests completed!"));
	}
}

void UQuest_Manager::ReportAbilityUse(const FString& AbilityName)
{
	if (CurrentQuest)
	{
		CurrentQuest->ReportAbilityUse(AbilityName);
		UE_LOG(LogTemp, Log, TEXT("Reported ability use: %s to CurrentQuest."), *AbilityName);
	}
}

UBaseQuest* UQuest_Manager::GetCurrentQuest() const
{
	return CurrentQuest;
}

void UQuest_Manager::OnQuestCompleted()
{
	UE_LOG(LogTemp, Log, TEXT("Quest Completed: %s"), *CurrentQuest->AbilityName);
	StartNextQuest();
}

