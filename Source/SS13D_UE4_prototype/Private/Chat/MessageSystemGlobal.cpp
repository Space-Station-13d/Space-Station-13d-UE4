// Fill out your copyright notice in the Description page of Project Settings.

#include "SS13D_UE4_prototype.h"
#include "MessageSystemGlobal.h"

UMessageSystemGlobal::UMessageSystemGlobal()
{
	UE_LOG(LogTemp, Warning, TEXT("Testing, message system got initialized!"));
}

void UMessageSystemGlobal::ReceiveMessage(FChatMessage Message)
{
	// TODO: Currently global everything!
	for (auto Itr(Receivers.CreateIterator()); Itr; Itr++)
	{
		if (!(*Itr)->IsValidLowLevel())
			continue;

		(*Itr)->ReceiveMessage(Message);
	}
};

void UMessageSystemGlobal::AddMessageReceiver(UMessageReceiver* Receiver)
{
	Receivers.Add(Receiver);
}

void UMessageSystemGlobal::RemoveMessageReceiver(UMessageReceiver* Receiver)
{
	Receivers.Remove(Receiver);
}