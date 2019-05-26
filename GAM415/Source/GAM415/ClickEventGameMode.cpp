// Fill out your copyright notice in the Description page of Project Settings.

#include "ClickEventGameMode.h"
#include "Engine.h"

void AClickEventGameMode::BeginPlay()
{
	Super::BeginPlay();

	Widget = SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		[
			SNew(SButton)
			.OnClicked(FOnClicked::CreateUObject(this, &AClickEventGameMode::ButtonClicked))
		.Content()
		[
			SAssignNew(ButtonLabel, STextBlock)
			.Text(FText::FromString(TEXT("Click me!")))
		]
		];

	auto player = GetWorld()->GetFirstLocalPlayerFromController(); // get the first player controller

	GEngine->GameViewport->AddViewportWidgetForPlayer(player, Widget.ToSharedRef(), 1); // add widget to first player controller viewport

	GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true; // enable the mouse cursor to show in the viewport

	auto pc = GEngine->GetFirstLocalPlayerController(GetWorld());

	EMouseLockMode lockMode = EMouseLockMode::DoNotLock;

	auto inputMode = FInputModeUIOnly().SetLockMouseToViewportBehavior(lockMode).SetWidgetToFocus(Widget);

	//pc->SetInputMode(inputMode); // Freezes player to interact with widget
}

FReply AClickEventGameMode::ButtonClicked()
{
	ButtonLabel->SetText(FString(TEXT("Clicked!")));
	return FReply::Handled();
}
