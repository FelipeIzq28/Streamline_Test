// Fill out your copyright notice in the Description page of Project Settings.

/**
 * @file Quest_Manager.h
 * @brief Header file for the `UQuest_Manager` component, which manages a series of quests for an actor.
 * @details This class provides functionality to initialize and track quests, report progress, and transition between quests.
 *          It includes utility functions for retrieving quest details and a delegate for notifying when all quests are completed.
 *          Designed to work as a component for any actor, such as a player character or game manager.
 * @author
 * Felipe Izquierdo
 * @date 09/12/2024
 */
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseQuest.h"
#include "Quest_Manager.generated.h"

 /** Delegate for notifying when all quests are completed. */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAllQuestsCompleted);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STREAMLINE_TEST_API UQuest_Manager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UQuest_Manager();

    UFUNCTION(BlueprintCallable, Category = "Quests")
    void InitializeQuests();


    UFUNCTION(BlueprintCallable, Category = "Quests")
    void StartNextQuest();


    UFUNCTION(BlueprintCallable, Category = "Quests")
    void ReportAbilityUse(const FString& AbilityName);


    UFUNCTION(BlueprintCallable, Category = "Quests")
    UBaseQuest* GetCurrentQuest() const;


    UPROPERTY(BlueprintAssignable, Category = "Quests")
    FOnAllQuestsCompleted OnAllQuestsCompleted;


    UFUNCTION(BlueprintCallable, Category = "Quests")
    FString GetCurrentQuestName() const;


    UFUNCTION(BlueprintCallable, Category = "Quests")
    int32 GetCurrentQuestProgress() const;


    UFUNCTION(BlueprintCallable, Category = "Quests")
    int32 GetCurrentQuestTarget() const;


    UFUNCTION(BlueprintCallable, Category = "Quests")
    FString GetCurrentQuestDescription() const;
public:
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

    /** The list of all quests managed by this component. */
    UPROPERTY(BlueprintReadOnly, Category = "Quests")
    TArray<UBaseQuest*> Quests;

    /** The current active quest. */
    UPROPERTY(BlueprintReadOnly, Category = "Quests")
    UBaseQuest* CurrentQuest;


    int32 CurrentQuestIndex;

private:

    UFUNCTION()
    void OnQuestCompleted();
};
