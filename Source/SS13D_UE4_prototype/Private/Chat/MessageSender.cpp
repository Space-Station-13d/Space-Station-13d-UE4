// Fill out your copyright notice in the Description page of Project Settings.

#include "SS13D_UE4_prototype.h"
#include "MessageSender.h"
#include "MasterController.h"
#include "ChatStruct.h"


// Sets default values for this component's properties
UMessageSender::UMessageSender()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = false;
	PrimaryComponentTick.bCanEverTick = false;
}

void UMessageSender::SendMessage(FText Message, TEnumAsByte<EChatChannel> Channel)
{
	FChatMessage ChatMessage;
	ChatMessage.Channel = Channel;
	ChatMessage.Message = Message;
	ChatMessage.Source = this;
	UMasterController* MC = Cast<UMasterController>(GetOwner()->GetGameInstance());
	MC->GetMessageSystem()->ReceiveMessage(ChatMessage);
}