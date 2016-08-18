// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Item.h"
#include "ItemHandlerInterface.generated.h"

/**
 * Basic interfaces that defines functionality for things that can pick up and drop stuff.
 * (people, for example)
 */
UINTERFACE()
class SS13D_UE4_PROTOTYPE_API UItemHandler : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class SS13D_UE4_PROTOTYPE_API IItemHandler
{
	GENERATED_IINTERFACE_BODY()

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Interaction")
	void PickUpItem(UItem* Item);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Interaction")
	void DropItem();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Interaction")
	UItem* GetHeldItem();
};