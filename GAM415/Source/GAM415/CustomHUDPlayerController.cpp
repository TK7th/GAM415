// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomHUDPlayerController.h"
#include "SlateBasics.h"

void ACustomHUDPlayerController::BeginPlay()
{
	Super::BeginPlay();

	TSharedRef<SVerticalBox> widget = SNew(SVerticalBox) + SVerticalBox::Slot().HAlign(HAlign_Left).VAlign(VAlign_Bottom)
		[SNew(SButton).Content()[SNew(STextBlock).Text(FText::FromString(TEXT("Test Button")))]];

	GEngine->GameViewport->AddViewportWidgetForPlayer(GetLocalPlayer(), widget, 1);

}


