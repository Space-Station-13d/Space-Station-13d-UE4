// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Components/ActorComponent.h"
#include "Interactable.h"
#include "UnrealNetwork.h"
#include "Item.generated.h"

/**
 * Allows something to be picked up and stuff.
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), BlueprintType, Blueprintable)
class SS13D_UE4_PROTOTYPE_API UItem : public UInteractable
{
	GENERATED_BODY()

public:
	UItem();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Item")
	FText Name = NSLOCTEXT("Item", "default item name", "Atom");

	virtual void BeginPlay() override;

	virtual void OnInteract_Implementation(APawn* Pawn) override;

private:
	UFUNCTION(NetMulticast, Reliable)
	void PickupMulticast(APawn* Pawn);
};
