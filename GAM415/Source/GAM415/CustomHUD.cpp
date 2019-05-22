// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomHUD.h"
#include "Engine/Canvas.h"

void ACustomHUD::DrawHUD()
{
	Super::DrawHUD();

	Canvas->DrawText(GEngine->GetSmallFont(), TEXT("Test string to be printed to screen"), 10.f, 10.f, 2.f, 2.f);

	FCanvasBoxItem ProgressBar(FVector2D(5.f, 25.f), FVector2D(100.f, 5.f));
	
	Canvas->DrawItem(ProgressBar);
	
	DrawRect(FLinearColor::Blue, 5.f, 25.f, 100.f, 5.f);
}

