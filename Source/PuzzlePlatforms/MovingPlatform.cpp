// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

AMovingPlatform::AMovingPlatform()
{
	PrimaryActorTick.bCanEverTick = true;
}
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	FVector Location =  GetActorLocation();
	Location += FVector(5 * DeltaTime, 0, 0);
	SetActorLocation(Location);
}
