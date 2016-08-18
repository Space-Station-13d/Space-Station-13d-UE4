// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#define LOCTEXT_NAMESPACE "Interaction"
#include "Components/ActorComponent.h"
#include "Interactable.generated.h"

/**
 * Interaction!
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SS13D_UE4_PROTOTYPE_API UInteractable : public UActorComponent
{
	GENERATED_BODY()

public:
	UInteractable();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Interaction")
	FText Tooltip = LOCTEXT("default tooltip", "Interact");

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void OnInteract(APawn* Pawn);
	virtual void OnInteract_Implementation(APawn* Pawn);
};

#undef LOCTEXT_NAMESPACE