// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "MessageSender.h"
#include "ChatChannel.h"
#include "ChatStruct.generated.h"

USTRUCT(BlueprintType)
struct FChatMessage
{
	GENERATED_BODY()

	UPROPERTY()
	FText Message = FText();

	UPROPERTY()
	UMessageSender* Source = nullptr;

	UPROPERTY()
	TEnumAsByte<EChatChannel> Channel = EChatChannel::GlobalNotify;
	
	//UPROPERTY()
	//int32 Frequency;
	/*
	FChatMessage()
	{
		Message = FText();
		Source = nullptr;
	}*/
};
