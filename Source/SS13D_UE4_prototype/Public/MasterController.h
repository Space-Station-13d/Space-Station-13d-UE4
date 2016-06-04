// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/GameInstance.h"
#include "Chat/MessageSystemGlobal.h"
#include "MasterController.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class SS13D_UE4_PROTOTYPE_API UMasterController : public UGameInstance
{
	GENERATED_BODY()

	UPROPERTY()
	UMessageSystemGlobal* MessageSystem;

public:
	UMasterController();
	
	UFUNCTION()
	UMessageSystemGlobal* GetMessageSystem();
};
