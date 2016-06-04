// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "ChatStruct.h"
#include "MessageReceiver.h"
#include "MessageSystemGlobal.generated.h"

/**
 * 
 */
UCLASS()
class SS13D_UE4_PROTOTYPE_API UMessageSystemGlobal : public UObject
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<UMessageReceiver*> Receivers;

public:
	UMessageSystemGlobal();
	
	UFUNCTION()
	void ReceiveMessage(FChatMessage Message);

	UFUNCTION()
	void AddMessageReceiver(UMessageReceiver* Receiver);

	UFUNCTION()
	void RemoveMessageReceiver(UMessageReceiver* Receiver);
};
