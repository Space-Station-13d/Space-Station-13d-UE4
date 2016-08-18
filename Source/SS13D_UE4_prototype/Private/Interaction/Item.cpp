// Fill out your copyright notice in the Description page of Project Settings.

#include "SS13D_UE4_prototype.h"
#include "Item.h"
#include "ItemHandlerInterface.h"
#define LOCTEXT_NAMESPACE "Item"

UItem::UItem()
{
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
}

void UItem::BeginPlay()
{
	Tooltip = FText::Format(LOCTEXT("pickup format", "pick up {0}"), Name);
}

void UItem::OnInteract_Implementation(APawn* Pawn)
{
	if (Pawn->GetClass()->ImplementsInterface(UItemHandler::StaticClass()))
	{
		PickupMulticast(Pawn);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Non-IItemHandler attempted to interact with item, ignoring!"))
	}
}

void UItem::PickupMulticast_Implementation(APawn* Pawn)
{
	IItemHandler::Execute_PickUpItem(Pawn, this);
}

#undef LOCTEXT_NAMESPACE