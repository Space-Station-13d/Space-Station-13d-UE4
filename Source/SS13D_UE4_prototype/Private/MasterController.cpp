// Fill out your copyright notice in the Description page of Project Settings.

#include "SS13D_UE4_prototype.h"
#include "MasterController.h"

UMasterController::UMasterController()
{
	MessageSystem = NewObject<UMessageSystemGlobal>();
}

UMessageSystemGlobal* UMasterController::GetMessageSystem()
{
	return MessageSystem;
}
