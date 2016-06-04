// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ChatChannel.generated.h"

UENUM(BlueprintType)
enum class EChatChannel
{
	/* Admin-Only chat. */
	Admin,
	/* Global admin announcements. */
	AdminNotify,
	/* Global announcements. */
	GlobalNotify,
	/* Local chat. */
	Local,
	/* Local emotes. */
	LocalNotify,
	/* Out Of Character global chat. */
	OOC,
	/* Radio chat. */
	Radio
};