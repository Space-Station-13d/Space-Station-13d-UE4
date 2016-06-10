// Fill out your copyright notice in the Description page of Project Settings.

#include "SS13D_UE4_prototype.h"
#include "MasterController.h"
#include "MessageReceiver.h"


// Sets default values for this component's properties
UMessageReceiver::UMessageReceiver()
{
	bWantsBeginPlay = true; 
}

void UMessageReceiver::BeginPlay()
{
	UMasterController* MC = Cast<UMasterController>(GetOwner()->GetGameInstance());
	MC->GetMessageSystem()->AddMessageReceiver(this);
}

void UMessageReceiver::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UMasterController* MC = Cast<UMasterController>(GetOwner()->GetGameInstance());
	MC->GetMessageSystem()->RemoveMessageReceiver(this);
}

void UMessageReceiver::ReceiveMessage(FChatMessage Message)
{
	OnMessageReceived.Broadcast(Message);
}