// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "InteractableInterface.generated.h"

/**
 * 
 */
UINTERFACE()
class UInteractableInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class SS13D_UE4_PROTOTYPE_API IInteractableInterface
{
	GENERATED_IINTERFACE_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void OnInteract(APawn* Pawn);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void OnItemInteract(APawn* Pawn, UItem* Item);
};
