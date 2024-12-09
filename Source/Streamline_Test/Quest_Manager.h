// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseQuest.h"
#include "Quest_Manager.generated.h"

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

    // Avanza a la siguiente misi�n
    UFUNCTION(BlueprintCallable, Category = "Quests")
    void StartNextQuest();

    // Reporta el progreso de una habilidad
    UFUNCTION(BlueprintCallable, Category = "Quests")
    void ReportAbilityUse(const FString& AbilityName);

    // Devuelve la misi�n actual
    UFUNCTION(BlueprintCallable, Category = "Quests")
    UBaseQuest* GetCurrentQuest() const;

    // Delegado para notificar cuando todas las misiones est�n completadas
    UPROPERTY(BlueprintAssignable, Category = "Quests")
    FOnAllQuestsCompleted OnAllQuestsCompleted;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

    // Lista de todas las misiones
    UPROPERTY(BlueprintReadOnly, Category = "Quests")
    TArray<UBaseQuest*> Quests;

    // Misi�n actual
    UPROPERTY(BlueprintReadOnly, Category = "Quests")
    UBaseQuest* CurrentQuest;

    // �ndice de la misi�n actual
    int32 CurrentQuestIndex;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
    // Maneja el evento cuando una misi�n se completa
    UFUNCTION()
    void OnQuestCompleted();
};
