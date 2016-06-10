// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "ChatStruct.h"
#include "MessageReceiver.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), abstract, BlueprintType)
class SS13D_UE4_PROTOTYPE_API UMessageReceiver : public UActorComponent
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMessageReceived, FChatMessage, Message);
public:	
	// Sets default values for this component's properties
	UMessageReceiver();

	UPROPERTY(BlueprintAssignable)
	FMessageReceived OnMessageReceived;

	UFUNCTION()
	void ReceiveMessage(FChatMessage Message);

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void BeginPlay() override;
};
