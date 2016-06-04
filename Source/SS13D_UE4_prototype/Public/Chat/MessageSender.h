// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "ChatChannel.h"
#include "MessageSender.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SS13D_UE4_PROTOTYPE_API UMessageSender : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMessageSender();

	// Called when the game starts
	// virtual void BeginPlay() override;
	
	// Called every frame
	// virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Default)
	FText Name;

	UFUNCTION(BlueprintCallable, Category=Default)
	void SendMessage(FText Message, TEnumAsByte<EChatChannel> Channel);
};
