// Fill out your copyright notice in the Description page of Project Settings.

#include "SS13D_UE4_prototype.h"
#include "Interactable.h"
#include "InteractableInterface.h"

UInteractable::UInteractable()
{
	bWantsBeginPlay = false;
	PrimaryComponentTick.bCanEverTick = false;
}

void UInteractable::OnInteract_Implementation(APawn* Pawn)
{
	AActor* Owner = GetOwner();
	if (Owner->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()))
	{
		IInteractableInterface::Execute_OnInteract(Owner, Pawn);
	}
}